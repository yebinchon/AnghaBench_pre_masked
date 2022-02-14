
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_5__ {size_t latest_idx; TYPE_3__* entries; } ;
struct TYPE_6__ {TYPE_1__ main; } ;
typedef TYPE_2__ hid_controller_t ;
struct TYPE_7__ {int button_state; scalar_t__ left_stick_x; scalar_t__ left_stick_y; scalar_t__ right_stick_x; scalar_t__ right_stick_y; } ;
typedef TYPE_3__ hid_controller_state_entry_t ;
struct TYPE_8__ {TYPE_2__* controllers; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__*** VAR_4 ;
 TYPE_4__* FUNC_0 () ;
 int* VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
   int16_t VAR_6, VAR_7, VAR_8, VAR_9;
   hid_controller_t *VAR_10 = FUNC_0()->controllers;
   hid_controller_t *VAR_11 = &VAR_10[0];
   hid_controller_state_entry_t VAR_12 = VAR_11->main.entries[VAR_11->main.latest_idx];
   hid_controller_state_entry_t VAR_13 = (VAR_11+8)->main.entries[(VAR_11+8)->main.latest_idx];
   VAR_5[0] = VAR_12.button_state | VAR_13;

   VAR_6 = VAR_12.left_stick_x;
   VAR_7 = VAR_12.left_stick_y;
   VAR_8 = VAR_12.right_stick_x;
   VAR_9 = VAR_12.right_stick_y;

   if (VAR_13 != 0 || VAR_13 != 0)
   {

    VAR_6 = VAR_13;
    VAR_7 = VAR_13;
   }

   if (VAR_13 != 0 || VAR_13 != 0)
   {

    VAR_8 = VAR_13;
    VAR_9 = VAR_13;
   }

   VAR_4[0][VAR_2]
      [VAR_0] = VAR_6;
   VAR_4[0][VAR_2]
      [VAR_1] = -VAR_7;
   VAR_4[0][VAR_3]
      [VAR_0] = VAR_8;
   VAR_4[0][VAR_3]
      [VAR_1] = -VAR_9;
}
