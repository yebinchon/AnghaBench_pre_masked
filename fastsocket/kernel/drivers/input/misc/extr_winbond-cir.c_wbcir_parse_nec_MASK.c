
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wbcir_data {int last_scancode; int last_toggle; scalar_t__ irdata_error; int keypressed; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,...) ;
 scalar_t__ FUNC_2 (struct wbcir_data*,int) ;
 int FUNC_3 (struct wbcir_data*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct device *VAR_0, struct wbcir_data *VAR_1)
{
 u8 VAR_2;
 u8 VAR_3;
 u8 VAR_4;
 u8 VAR_5;
 u16 VAR_6;
 u32 VAR_7;


 while (FUNC_2(VAR_1, 1) && !VAR_1->irdata_error)
                  ;


 if (FUNC_2(VAR_1, 4)) {
  FUNC_1(VAR_0, "NEC - Invalid leader space\n");
  return;
 }


 if (FUNC_2(VAR_1, 1)) {
  if (!VAR_1->keypressed) {
   FUNC_1(VAR_0, "NEC - Stray repeat message\n");
   return;
  }

  FUNC_1(VAR_0, "IR-NEC repeat s %u\n",
   (unsigned int)VAR_1->last_scancode);

  FUNC_3(VAR_1, VAR_1->last_scancode, VAR_1->last_toggle);
  return;
 }


 if (FUNC_2(VAR_1, 3)) {
  FUNC_1(VAR_0, "NEC - Invalid leader space\n");
  return;
 }

 VAR_2 = FUNC_0(FUNC_2(VAR_1, 8));
 VAR_3 = FUNC_0(FUNC_2(VAR_1, 8));
 VAR_4 = FUNC_0(FUNC_2(VAR_1, 8));
 VAR_5 = FUNC_0(FUNC_2(VAR_1, 8));


 if (VAR_1->irdata_error) {
  FUNC_1(VAR_0, "NEC - Invalid message\n");
  return;
 }


 if (VAR_4 != ~VAR_5) {
  FUNC_1(VAR_0, "NEC - Command bytes mismatch\n");
  return;
 }


 VAR_6 = VAR_2;
 if (VAR_2 != ~VAR_3)
  VAR_6 |= VAR_3 << 8;

 VAR_7 = VAR_6 << 8 | VAR_4;

 FUNC_1(VAR_0, "IR-NEC ad %u cm %u s %u\n",
  (unsigned int)VAR_6,
  (unsigned int)VAR_4,
  (unsigned int)VAR_7);

 FUNC_3(VAR_1, VAR_7, !VAR_1->last_toggle);
}
