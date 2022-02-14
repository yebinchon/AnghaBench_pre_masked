
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct mISDNtimer {TYPE_1__* dev; int list; } ;
struct TYPE_2__ {int wait; int lock; int expired; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_0)
{
 struct mISDNtimer *VAR_1 = (void *)VAR_0;
 u_long VAR_2;

 FUNC_1(&VAR_1->dev->lock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_1->dev->expired);
 FUNC_2(&VAR_1->dev->lock, VAR_2);
 FUNC_3(&VAR_1->dev->wait);
}
