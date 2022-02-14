
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {double* mouse_sens; int* axis_deadzone; int* axis_peak; TYPE_3__* axis; TYPE_2__* button; TYPE_1__* control; int device; } ;
struct TYPE_7__ {int button_a; int button_b; int axis_a; int axis_dir_a; int axis_b; int axis_dir_b; int hat; int hat_pos_a; int hat_pos_b; void* key_b; void* key_a; } ;
struct TYPE_6__ {int button; int axis; int axis_deadzone; int hat; int hat_pos; int mouse; void* key; } ;
struct TYPE_5__ {int Plugin; scalar_t__ RawData; scalar_t__ Present; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static void FUNC_0(int VAR_4)
{
    int VAR_5;

    VAR_3[VAR_4].device = VAR_0;
    VAR_3[VAR_4].control->Present = 0;
    VAR_3[VAR_4].control->RawData = 0;
    VAR_3[VAR_4].control->Plugin = VAR_1;
    for( VAR_5 = 0; VAR_5 < 16; VAR_5++ )
    {
        VAR_3[VAR_4].button[VAR_5].button = -1;
        VAR_3[VAR_4].button[VAR_5].key = VAR_2;
        VAR_3[VAR_4].button[VAR_5].axis = -1;
        VAR_3[VAR_4].button[VAR_5].axis_deadzone = -1;
        VAR_3[VAR_4].button[VAR_5].hat = -1;
        VAR_3[VAR_4].button[VAR_5].hat_pos = -1;
        VAR_3[VAR_4].button[VAR_5].mouse = -1;
    }
    for( VAR_5 = 0; VAR_5 < 2; VAR_5++ )
    {
        VAR_3[VAR_4].mouse_sens[VAR_5] = 2.0;
        VAR_3[VAR_4].axis_deadzone[VAR_5] = 4096;
        VAR_3[VAR_4].axis_peak[VAR_5] = 32768;
        VAR_3[VAR_4].axis[VAR_5].button_a = VAR_3[VAR_4].axis[VAR_5].button_b = -1;
        VAR_3[VAR_4].axis[VAR_5].key_a = VAR_3[VAR_4].axis[VAR_5].key_b = VAR_2;
        VAR_3[VAR_4].axis[VAR_5].axis_a = -1;
        VAR_3[VAR_4].axis[VAR_5].axis_dir_a = 1;
        VAR_3[VAR_4].axis[VAR_5].axis_b = -1;
        VAR_3[VAR_4].axis[VAR_5].axis_dir_b = 1;
        VAR_3[VAR_4].axis[VAR_5].hat = -1;
        VAR_3[VAR_4].axis[VAR_5].hat_pos_a = -1;
        VAR_3[VAR_4].axis[VAR_5].hat_pos_b = -1;
    }
}
