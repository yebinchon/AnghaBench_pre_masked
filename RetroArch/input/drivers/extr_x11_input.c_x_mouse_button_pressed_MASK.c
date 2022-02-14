
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mouse_l; int mouse_r; int mouse_m; } ;
typedef TYPE_2__ x11_input_t ;
struct TYPE_6__ {scalar_t__* input_mouse_index; } ;
struct TYPE_8__ {TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;


 unsigned int VAR_0 ;







 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(
      x11_input_t *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
   bool VAR_4;
   settings_t *VAR_5 = FUNC_0();

   if (VAR_2 >= VAR_0)
      return 0;


   if ( VAR_5->uints.input_mouse_index[ VAR_2 ] != 0 )
      return 0;

   switch ( VAR_3 )
   {

   case 132:
      return VAR_1->mouse_l;
   case 130:
      return VAR_1->mouse_r;
   case 131:
      return VAR_1->mouse_m;





   case 128:
   case 129:
   case 133:
   case 134:
      return FUNC_1( VAR_3 );
   }

   return 0;
}
