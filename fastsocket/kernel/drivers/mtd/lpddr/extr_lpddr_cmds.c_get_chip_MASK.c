
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
struct flchip_shared {int lock; struct flchip* erasing; struct flchip* writing; } ;
struct flchip {scalar_t__ state; int oldstate; int * mutex; int wq; struct flchip_shared* priv; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct map_info*,struct flchip*,int) ;
 int VAR_5 ;
 int FUNC_3 (struct map_info*,struct flchip*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct map_info *VAR_7, struct flchip *VAR_8, int VAR_9)
{
 int VAR_10;
 FUNC_0(VAR_6, VAR_5);

 retry:
 if (VAR_8->priv && (VAR_9 == VAR_3 || VAR_9 == VAR_1)
  && VAR_8->state != VAR_2) {
  struct flchip_shared *VAR_11 = VAR_8->priv;
  struct flchip *VAR_12;
  FUNC_7(&VAR_11->lock);
  VAR_12 = VAR_11->writing;
  if (VAR_12 && VAR_12 != VAR_8) {
   VAR_10 = FUNC_8(VAR_12->mutex);
   FUNC_9(&VAR_11->lock);
   if (!VAR_10)
    goto retry;
   FUNC_9(VAR_8->mutex);
   VAR_10 = FUNC_2(VAR_7, VAR_12, VAR_9);
   FUNC_7(VAR_8->mutex);

   if (VAR_10 == -VAR_0) {
    FUNC_9(VAR_12->mutex);
    goto retry;
   }
   if (VAR_10) {
    FUNC_9(VAR_12->mutex);
    return VAR_10;
   }
   FUNC_7(&VAR_11->lock);



   if (VAR_8->state == VAR_2) {
    FUNC_3(VAR_7, VAR_12);
    FUNC_9(VAR_12->mutex);
    goto retry;
   }
   FUNC_9(VAR_12->mutex);
  }



  if (VAR_9 == VAR_1 && VAR_11->erasing
      && VAR_11->erasing->oldstate == VAR_1) {
   FUNC_9(&VAR_11->lock);
   FUNC_6(VAR_4);
   FUNC_1(&VAR_8->wq, &VAR_6);
   FUNC_9(VAR_8->mutex);
   FUNC_5();
   FUNC_4(&VAR_8->wq, &VAR_6);
   FUNC_7(VAR_8->mutex);
   goto retry;
  }


  VAR_11->writing = VAR_8;
  if (VAR_9 == VAR_1)
   VAR_11->erasing = VAR_8;
  FUNC_9(&VAR_11->lock);
 }

 VAR_10 = FUNC_2(VAR_7, VAR_8, VAR_9);
 if (VAR_10 == -VAR_0)
  goto retry;

 return VAR_10;
}
