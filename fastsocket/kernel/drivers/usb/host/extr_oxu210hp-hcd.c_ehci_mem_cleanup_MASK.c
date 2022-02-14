
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxu_hcd {int * pshadow; int * periodic; int urb_timer; int * async; int * murb_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct oxu_hcd *VAR_0)
{
 FUNC_1(VAR_0->murb_pool);
 VAR_0->murb_pool = ((void*)0);

 if (VAR_0->async)
  FUNC_2(VAR_0->async);
 VAR_0->async = ((void*)0);

 FUNC_0(&VAR_0->urb_timer);

 VAR_0->periodic = ((void*)0);


 FUNC_1(VAR_0->pshadow);
 VAR_0->pshadow = ((void*)0);
}
