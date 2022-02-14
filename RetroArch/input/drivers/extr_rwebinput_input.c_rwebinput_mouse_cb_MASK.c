
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int buttons; int delta_y; int delta_x; int y; int x; } ;
struct TYPE_4__ {int button; scalar_t__ movementY; scalar_t__ movementX; int canvasY; int canvasX; } ;
typedef TYPE_1__ EmscriptenMouseEvent ;
typedef int EM_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static EM_BOOL FUNC_0(int VAR_4,
   const EmscriptenMouseEvent *VAR_5, void *VAR_6)
{
   (void)VAR_6;

   uint8_t VAR_7 = 1 << VAR_5->button;

   VAR_3->x = VAR_5->canvasX;
   VAR_3->y = VAR_5->canvasY;
   VAR_3->delta_x += VAR_5->movementX;
   VAR_3->delta_y += VAR_5->movementY;

   if (VAR_4 == VAR_0)
   {
      VAR_3->buttons |= VAR_7;
   }
   else if (VAR_4 == VAR_1)
   {
      VAR_3->buttons &= ~VAR_7;
   }

   return VAR_2;
}
