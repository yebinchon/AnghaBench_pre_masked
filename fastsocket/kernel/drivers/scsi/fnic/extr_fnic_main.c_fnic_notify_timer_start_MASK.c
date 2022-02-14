
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int notify_timer; int vdev; } ;



 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fnic *VAR_1)
{
 switch (FUNC_1(VAR_1->vdev)) {
 case 128:




  FUNC_0(&VAR_1->notify_timer, VAR_0);
  break;
 default:

  break;
 };
}
