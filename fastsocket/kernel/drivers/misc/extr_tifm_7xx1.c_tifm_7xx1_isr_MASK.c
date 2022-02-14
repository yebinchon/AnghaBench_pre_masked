
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_dev {int (* card_event ) (struct tifm_dev*) ;int (* data_event ) (struct tifm_dev*) ;} ;
struct tifm_adapter {unsigned int num_sockets; unsigned int socket_change_set; int lock; int media_switcher; scalar_t__ addr; scalar_t__ finish_me; struct tifm_dev** sockets; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tifm_dev*) ;
 int FUNC_7 (struct tifm_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_6, void *VAR_7)
{
 struct tifm_adapter *VAR_8 = VAR_7;
 struct tifm_dev *VAR_9;
 unsigned int VAR_10, VAR_11;

 FUNC_4(&VAR_8->lock);
 VAR_10 = FUNC_3(VAR_8->addr + VAR_1);
 if (VAR_10 == 0 || VAR_10 == (~0)) {
  FUNC_5(&VAR_8->lock);
  return VAR_4;
 }

 if (VAR_10 & VAR_5) {
  FUNC_9(VAR_5, VAR_8->addr + VAR_0);

  for (VAR_11 = 0; VAR_11 < VAR_8->num_sockets; VAR_11++) {
   VAR_9 = VAR_8->sockets[VAR_11];
   if (VAR_9) {
    if ((VAR_10 >> VAR_11) & FUNC_1(1))
     VAR_9->data_event(VAR_9);
    if ((VAR_10 >> VAR_11) & FUNC_0(1))
     VAR_9->card_event(VAR_9);
   }
  }

  VAR_8->socket_change_set |= VAR_10
      & ((1 << VAR_8->num_sockets) - 1);
 }
 FUNC_9(VAR_10, VAR_8->addr + VAR_1);

 if (VAR_8->finish_me)
  FUNC_2(VAR_8->finish_me);
 else if (!VAR_8->socket_change_set)
  FUNC_9(VAR_5, VAR_8->addr + VAR_2);
 else
  FUNC_8(&VAR_8->media_switcher);

 FUNC_5(&VAR_8->lock);
 return VAR_3;
}
