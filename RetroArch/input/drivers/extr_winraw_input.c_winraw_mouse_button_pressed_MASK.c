
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int btn_l; int btn_r; int btn_m; int btn_b4; int btn_b5; int whl_u; int whl_d; } ;
typedef TYPE_2__ winraw_mouse_t ;
struct TYPE_9__ {TYPE_2__* mice; } ;
typedef TYPE_3__ winraw_input_t ;
struct TYPE_7__ {unsigned int* input_mouse_index; } ;
struct TYPE_10__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;


 unsigned int VAR_0 ;







 TYPE_4__* FUNC_0 () ;
 unsigned int VAR_1 ;

__attribute__((used)) static bool FUNC_1(
      winraw_input_t *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;
 winraw_mouse_t *VAR_6 = ((void*)0);
 settings_t *VAR_7 = FUNC_0();

 if (VAR_3 >= VAR_0)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
 {
  if (VAR_5 == VAR_7->uints.input_mouse_index[VAR_3])
  {
   VAR_6 = &VAR_2->mice[VAR_5];
   break;
  }
 }

 if (!VAR_6)
  return 0;

 switch ( VAR_4 )
 {

 case 132:
  return VAR_6->btn_l;
 case 130:
  return VAR_6->btn_r;
 case 131:
  return VAR_6->btn_m;
 case 134:
  return VAR_6->btn_b4;
 case 133:
  return VAR_6->btn_b5;
 case 128:
  return VAR_6->whl_u;
 case 129:
  return VAR_6->whl_d;
 }

 return 0;
}
