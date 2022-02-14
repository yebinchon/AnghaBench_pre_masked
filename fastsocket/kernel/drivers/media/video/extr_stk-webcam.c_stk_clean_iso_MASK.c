
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct stk_camera {TYPE_1__* isobufs; int urbs_used; } ;
struct TYPE_2__ {struct TYPE_2__* data; struct urb* urb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct stk_camera*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct stk_camera*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;

__attribute__((used)) static void FUNC_6(struct stk_camera *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0) || VAR_1->isobufs == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct urb *VAR_3;

  VAR_3 = VAR_1->isobufs[VAR_2].urb;
  if (VAR_3) {
   if (FUNC_0(&VAR_1->urbs_used) && FUNC_1(VAR_1))
    FUNC_5(VAR_3);
   FUNC_4(VAR_3);
  }
  FUNC_2(VAR_1->isobufs[VAR_2].data);
 }
 FUNC_2(VAR_1->isobufs);
 VAR_1->isobufs = ((void*)0);
 FUNC_3(VAR_1);
}
