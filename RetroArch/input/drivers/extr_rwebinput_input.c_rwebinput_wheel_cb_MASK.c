
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int scroll_y; int scroll_x; } ;
struct TYPE_4__ {scalar_t__ deltaY; scalar_t__ deltaX; } ;
typedef TYPE_1__ EmscriptenWheelEvent ;
typedef int EM_BOOL ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static EM_BOOL FUNC_0(int VAR_2,
   const EmscriptenWheelEvent *VAR_3, void *VAR_4)
{
   (void)VAR_2;
   (void)VAR_4;

   VAR_1->scroll_x += VAR_3->deltaX;
   VAR_1->scroll_y += VAR_3->deltaY;

   return VAR_0;
}
