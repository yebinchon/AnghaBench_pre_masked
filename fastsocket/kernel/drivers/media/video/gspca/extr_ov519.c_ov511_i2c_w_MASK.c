
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sd*,int ) ;
 int FUNC_2 (struct sd*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_0(VAR_0, "ov511_i2c_w %02x %02x", VAR_5, VAR_6);


 for (VAR_8 = 6; ; ) {

  FUNC_2(VAR_4, VAR_3, VAR_5);


  FUNC_2(VAR_4, VAR_2, VAR_6);


  FUNC_2(VAR_4, VAR_1, 0x01);

  do {
   VAR_7 = FUNC_1(VAR_4, VAR_1);
  } while (VAR_7 > 0 && ((VAR_7 & 1) == 0));

  if (VAR_7 < 0)
   return;

  if ((VAR_7 & 2) == 0)
   break;
  if (--VAR_8 < 0) {
   FUNC_0(VAR_0, "i2c write retries exhausted");
   return;
  }
 }
}
