
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t vend_idx; int led_state; } ;
typedef TYPE_1__ hfcusb_data ;
struct TYPE_8__ {scalar_t__ led_scheme; int * led_bits; } ;
typedef TYPE_2__ hfcsusb_vdata ;
struct TYPE_9__ {scalar_t__ driver_info; } ;






 scalar_t__ VAR_0 ;




 TYPE_5__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(hfcusb_data * VAR_2, int VAR_3)
{
 hfcsusb_vdata *VAR_4 =
     (hfcsusb_vdata *) VAR_1[VAR_2->vend_idx].driver_info;


 if (VAR_4->led_scheme == VAR_0)
  return;

 switch (VAR_3) {
  case 130:
   FUNC_0(VAR_2, VAR_4->led_bits[0], 1);
   FUNC_0(VAR_2, VAR_4->led_bits[1], 0);
   FUNC_0(VAR_2, VAR_4->led_bits[2], 0);
   FUNC_0(VAR_2, VAR_4->led_bits[3], 0);
   break;
  case 131:
   FUNC_0(VAR_2, VAR_4->led_bits[0], 0);
   FUNC_0(VAR_2, VAR_4->led_bits[1], 0);
   FUNC_0(VAR_2, VAR_4->led_bits[2], 0);
   FUNC_0(VAR_2, VAR_4->led_bits[3], 0);
   break;
  case 128:
   FUNC_0(VAR_2, VAR_4->led_bits[1], 1);
   break;
  case 129:
   FUNC_0(VAR_2, VAR_4->led_bits[1], 0);
   break;
  case 134:
   FUNC_0(VAR_2, VAR_4->led_bits[2], 1);
   break;
  case 135:
   FUNC_0(VAR_2, VAR_4->led_bits[2], 0);
   break;
  case 132:
   FUNC_0(VAR_2, VAR_4->led_bits[3], 1);
   break;
  case 133:
   FUNC_0(VAR_2, VAR_4->led_bits[3], 0);
   break;
 }
 FUNC_1(VAR_2, VAR_2->led_state);
}
