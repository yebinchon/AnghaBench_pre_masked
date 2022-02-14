
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wbcir_data {scalar_t__ irdata_error; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct wbcir_data*,int) ;
 int FUNC_2 (struct wbcir_data*,int) ;
 int FUNC_3 (struct wbcir_data*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct device *VAR_0, struct wbcir_data *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3;
 u8 VAR_4;
 u32 VAR_5;


 if (!FUNC_1(VAR_1, 1)) {
  FUNC_0(VAR_0, "RC5 - Invalid start bit\n");
  return;
 }


 if (!FUNC_2(VAR_1, 1))
  VAR_4 = 0x40;
 else
  VAR_4 = 0x00;

 VAR_2 = FUNC_2(VAR_1, 1);
 VAR_3 = FUNC_2(VAR_1, 5);
 VAR_4 |= FUNC_2(VAR_1, 6);
 VAR_5 = VAR_3 << 7 | VAR_4;


 if (VAR_1->irdata_error) {
  FUNC_0(VAR_0, "RC5 - Invalid message\n");
  return;
 }

 FUNC_0(VAR_0, "IR-RC5 ad %u cm %u t %u s %u\n",
  (unsigned int)VAR_3,
  (unsigned int)VAR_4,
  (unsigned int)VAR_2,
  (unsigned int)VAR_5);

 FUNC_3(VAR_1, VAR_5, VAR_2);
}
