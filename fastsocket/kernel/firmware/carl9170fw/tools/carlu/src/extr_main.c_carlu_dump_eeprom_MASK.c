
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct carlu {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct carlu*) ;
 int FUNC_1 (struct carlu*) ;
 int FUNC_2 (struct carlu*,int ,int,int **) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct carlu*) ;
 struct carlu* FUNC_6 () ;
 int FUNC_7 (int ,char*,int *,int) ;

__attribute__((used)) static int FUNC_8(void)
{
 struct carlu *VAR_3 = ((void*)0);
 uint8_t VAR_4[8192] = { 0 };
 int VAR_5;

 VAR_5 = FUNC_4();
 if (VAR_5)
  goto out;

 VAR_3 = FUNC_6();
 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3);
  goto out;
 }

 VAR_5 = FUNC_2(VAR_3, 0, sizeof(VAR_4), &VAR_4);
 if (VAR_5)
  goto out_close;

 FUNC_7(VAR_2, "EEPROM:", VAR_4, sizeof(VAR_4));

out_close:
 FUNC_5(VAR_3);

out:
 FUNC_3();
 return VAR_5 ? VAR_0 : VAR_1;
}
