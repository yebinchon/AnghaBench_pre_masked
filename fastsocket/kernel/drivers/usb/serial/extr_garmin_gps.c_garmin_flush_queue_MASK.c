
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct garmin_packet {int size; int data; } ;
struct garmin_data {int flags; int lock; int timer; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct garmin_packet*) ;
 int FUNC_1 (int *,scalar_t__) ;
 struct garmin_packet* FUNC_2 (struct garmin_data*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct garmin_data *VAR_3)
{
 unsigned long VAR_4;
 struct garmin_packet *VAR_5;

 if ((VAR_3->flags & VAR_1) == 0) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 != ((void*)0)) {
   FUNC_3(VAR_3->port, VAR_5->data, VAR_5->size);
   FUNC_0(VAR_5);
   FUNC_1(&VAR_3->timer, (1)+VAR_2);

  } else {
   FUNC_4(&VAR_3->lock, VAR_4);
   VAR_3->flags &= ~VAR_0;
   FUNC_5(&VAR_3->lock, VAR_4);
  }
 }
 return 0;
}
