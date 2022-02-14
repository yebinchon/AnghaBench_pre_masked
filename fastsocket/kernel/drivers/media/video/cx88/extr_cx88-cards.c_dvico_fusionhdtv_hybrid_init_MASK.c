
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; int member_2; int member_3; int member_4; } ;
typedef TYPE_1__ u8 ;
struct i2c_msg {int addr; int len; TYPE_1__* buf; int flags; } ;
struct cx88_core {int i2c_adap; } ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 int FUNC_2 (struct cx88_core*,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct cx88_core *VAR_0)
{
 struct i2c_msg VAR_1 = { .addr = 0x45, .flags = 0 };
 int VAR_2, VAR_3;
 static u8 VAR_4[13][5] = {
  { 0x10, 0x00, 0x20, 0x01, 0x03 },
  { 0x10, 0x10, 0x01, 0x00, 0x21 },
  { 0x10, 0x10, 0x10, 0x00, 0xCA },
  { 0x10, 0x10, 0x12, 0x00, 0x08 },
  { 0x10, 0x10, 0x13, 0x00, 0x0A },
  { 0x10, 0x10, 0x16, 0x01, 0xC0 },
  { 0x10, 0x10, 0x22, 0x01, 0x3D },
  { 0x10, 0x10, 0x73, 0x01, 0x2E },
  { 0x10, 0x10, 0x72, 0x00, 0xC5 },
  { 0x10, 0x10, 0x71, 0x01, 0x97 },
  { 0x10, 0x10, 0x70, 0x00, 0x0F },
  { 0x10, 0x10, 0xB0, 0x00, 0x01 },
  { 0x03, 0x0C },
 };

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_4); VAR_2++) {
  VAR_1.buf = VAR_4[VAR_2];
  VAR_1.len = (VAR_2 != 12 ? 5 : 2);
  VAR_3 = FUNC_1(&VAR_0->i2c_adap, &VAR_1, 1);
  if (VAR_3 != 1) {
   FUNC_2(VAR_0, "dvico_fusionhdtv_hybrid_init buf %d "
       "failed (err = %d)!\n", VAR_2, VAR_3);
   return;
  }
 }
}
