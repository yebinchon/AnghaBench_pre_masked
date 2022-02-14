
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pointer_status {int pointer_y; int pointer_x; } ;
typedef int WPARAM ;
struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ POINT ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(
      struct pointer_status *VAR_0, WPARAM VAR_1)
{
   POINT VAR_2;

   VAR_2.x = FUNC_0(VAR_1);
   VAR_2.y = FUNC_1(VAR_1);
   FUNC_2((HWND)FUNC_3(), &VAR_2);
   VAR_0->pointer_x = VAR_2.x;
   VAR_0->pointer_y = VAR_2.y;
}
