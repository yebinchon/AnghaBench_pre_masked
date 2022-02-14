
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int (* set_axis_value ) (int ,int ,int ,int ,int ,int ,int ) ;} ;
struct TYPE_10__ {int button_state; int analog_state; } ;
struct TYPE_8__ {int stick_y; int stick_x; } ;
struct TYPE_7__ {int btns_h; int rstick_y; int rstick_x; int lstick_y; int lstick_x; } ;
struct TYPE_9__ {int device_type; int btns_h; TYPE_2__ nunchuck; TYPE_1__ classic; } ;
typedef TYPE_3__ KPADData ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int) ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static void FUNC_6(unsigned VAR_4, KPADData *VAR_5)
{
   FUNC_1(VAR_4, VAR_5->device_type);
   switch(VAR_5->device_type)
   {
      case 129:
         VAR_3[VAR_4].button_state = VAR_5->classic.btns_h
            & ~VAR_1;
         VAR_2.set_axis_value(VAR_3[VAR_4].analog_state,
               FUNC_0(VAR_5->classic.lstick_x),
               FUNC_0(VAR_5->classic.lstick_y),
               FUNC_0(VAR_5->classic.rstick_x),
               FUNC_0(VAR_5->classic.rstick_y), 0, 0);
         break;
      case 131:
         VAR_3[VAR_4].button_state = VAR_5->classic.btns_h
            & ~VAR_0;
         VAR_2.set_axis_value(VAR_3[VAR_4].analog_state,
               FUNC_0(VAR_5->classic.lstick_x),
               FUNC_0(VAR_5->classic.lstick_y),
               FUNC_0(VAR_5->classic.rstick_x),
               FUNC_0(VAR_5->classic.rstick_y), 0, 0);
         break;
      case 130:
         VAR_3[VAR_4].button_state = VAR_5->btns_h;
         VAR_2.set_axis_value(VAR_3[VAR_4].analog_state,
               FUNC_0(VAR_5->nunchuck.stick_x),
               FUNC_0(VAR_5->nunchuck.stick_y), 0, 0, 0, 0);
         break;
      case 128:
         VAR_3[VAR_4].button_state = VAR_5->btns_h;
         VAR_2.set_axis_value(VAR_3[VAR_4].analog_state,
               0, 0, 0, 0, 0, 0);
         break;
   }
}
