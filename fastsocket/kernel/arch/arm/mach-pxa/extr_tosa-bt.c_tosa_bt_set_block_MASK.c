
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, bool VAR_1)
{
 FUNC_0("BT_RADIO going: %s\n", VAR_1 ? "off" : "on");

 if (!VAR_1) {
  FUNC_0("TOSA_BT: going ON\n");
  FUNC_2(VAR_0);
 } else {
  FUNC_0("TOSA_BT: going OFF\n");
  FUNC_1(VAR_0);
 }

 return 0;
}
