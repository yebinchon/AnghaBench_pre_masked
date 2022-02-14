
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {int lock; TYPE_2__* netdev; } ;
struct TYPE_5__ {TYPE_1__* local; } ;
struct TYPE_4__ {int master; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(void)
{
 u_long VAR_1;
 int VAR_2;


 FUNC_1(&VAR_0->lock, VAR_1);
 while (VAR_0->netdev) {
  if (!VAR_0->netdev->local->master) {

   FUNC_2(&VAR_0->lock, VAR_1);
   if ((VAR_2 = FUNC_0(VAR_0->netdev, ((void*)0)))) {
    return VAR_2;
   }
   FUNC_1(&VAR_0->lock, VAR_1);
  }
 }
 VAR_0->netdev = ((void*)0);
 FUNC_2(&VAR_0->lock, VAR_1);
 return 0;
}
