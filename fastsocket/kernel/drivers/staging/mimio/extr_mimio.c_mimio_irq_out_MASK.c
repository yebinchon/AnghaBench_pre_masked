
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct mimio* context; } ;
struct mimio {int waitq; int txlock; int txflags; TYPE_1__* idev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_1)
{
 unsigned long VAR_2;
 struct mimio *VAR_3;

 VAR_3 = VAR_1->context;

 if (VAR_1->status)
  FUNC_0(&VAR_3->idev->dev, "urb-status: %d.\n", VAR_1->status);

 FUNC_1(&VAR_3->txlock, VAR_2);
 VAR_3->txflags |= VAR_0;
 FUNC_2(&VAR_3->txlock, VAR_2);
 FUNC_4();
 FUNC_3(&VAR_3->waitq);
}
