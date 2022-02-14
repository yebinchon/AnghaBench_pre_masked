
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct wiiupro {int dummy; } ;
struct TYPE_5__ {int calib_round; int* hatvalue_calib; } ;
struct TYPE_4__ {int b; int a; int y; int x; int l; int r; int zl; int zr; int minus; int plus; int l3; int r3; int left; int right; int up; int down; int home; } ;
struct TYPE_6__ {int* hatvalue; TYPE_1__ btn; } ;
struct hidpad_wiiupro_data {int have_led; TYPE_2__ calib; TYPE_3__ data; } ;


 int FUNC_0 (struct hidpad_wiiupro_data*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      uint8_t *VAR_1, uint16_t VAR_2)
{
   struct hidpad_wiiupro_data *VAR_3 = (struct hidpad_wiiupro_data*)VAR_0;

   if (!VAR_3)
      return;
   VAR_1[0x0C] ^= 0xFF;
   VAR_1[0x0D] ^= 0xFF;
   VAR_1[0x0E] ^= 0xFF;

   FUNC_1(&VAR_3->data, 0, sizeof(struct wiiupro));

   VAR_3->data.btn.b = (VAR_1[0x0D] & 0x40) ? 1 : 0;
   VAR_3->data.btn.a = (VAR_1[0x0D] & 0x10) ? 1 : 0;
   VAR_3->data.btn.y = (VAR_1[0x0D] & 0x20) ? 1 : 0;
   VAR_3->data.btn.x = (VAR_1[0x0D] & 0x08) ? 1 : 0;
   VAR_3->data.btn.l = (VAR_1[0x0C] & 0x20) ? 1 : 0;
   VAR_3->data.btn.r = (VAR_1[0x0C] & 0x02) ? 1 : 0;
   VAR_3->data.btn.zl = (VAR_1[0x0D] & 0x80) ? 1 : 0;
   VAR_3->data.btn.zr = (VAR_1[0x0D] & 0x04) ? 1 : 0;
   VAR_3->data.btn.minus = (VAR_1[0x0C] & 0x10) ? 1 : 0;
   VAR_3->data.btn.plus = (VAR_1[0x0C] & 0x04) ? 1 : 0;
   VAR_3->data.btn.l3 = (VAR_1[0x0E] & 0x02) ? 1 : 0;
   VAR_3->data.btn.r3 = (VAR_1[0x0E] & 0x01) ? 1 : 0;

   VAR_3->data.btn.left = (VAR_1[0x0D] & 0x02) ? 1 : 0;
   VAR_3->data.btn.right = (VAR_1[0x0C] & 0x80) ? 1 : 0;
   VAR_3->data.btn.up = (VAR_1[0x0D] & 0x01) ? 1 : 0;
   VAR_3->data.btn.down = (VAR_1[0x0C] & 0x40) ? 1 : 0;

   VAR_3->data.btn.home = (VAR_1[0x0C] & 0x8) ? 1 : 0;

   if(VAR_3->calib.calib_round < 5)
   {
       VAR_3->calib.hatvalue_calib[0] = (VAR_1[4] | (VAR_1[4 + 1] << 8));
       VAR_3->calib.hatvalue_calib[1] = (VAR_1[8] | (VAR_1[8 + 1] << 8));
       VAR_3->calib.hatvalue_calib[2] = (VAR_1[6] | (VAR_1[6 + 1] << 8));
       VAR_3->calib.hatvalue_calib[3] = (VAR_1[10] | (VAR_1[10 + 1] << 8));

       VAR_3->calib.calib_round++;
   }
   else
   {
       VAR_3->data.hatvalue[0] = (VAR_1[4] | (VAR_1[4 + 1] << 8))
          - VAR_3->calib.hatvalue_calib[0];
       VAR_3->data.hatvalue[1] = (VAR_1[8] | (VAR_1[8 + 1] << 8))
          - VAR_3->calib.hatvalue_calib[1];
       VAR_3->data.hatvalue[2] = (VAR_1[6] | (VAR_1[6 + 1] << 8))
          - VAR_3->calib.hatvalue_calib[2];
       VAR_3->data.hatvalue[3] = (VAR_1[10] | (VAR_1[10 + 1] << 8))
          - VAR_3->calib.hatvalue_calib[3];
   }
}
