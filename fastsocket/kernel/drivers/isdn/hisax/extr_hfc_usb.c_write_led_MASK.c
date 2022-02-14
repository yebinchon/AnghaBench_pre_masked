
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ old_led_state; } ;
typedef TYPE_1__ hfcusb_data ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(hfcusb_data * VAR_1, __u8 VAR_2)
{
 if (VAR_2 != VAR_1->old_led_state) {
  VAR_1->old_led_state = VAR_2;
  FUNC_0(VAR_1, VAR_0, VAR_2, 1);
 }
}
