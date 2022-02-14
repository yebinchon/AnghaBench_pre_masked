
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned char const*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;

int FUNC_3(int VAR_0, char **VAR_1) {
 unsigned int VAR_2;
 if (VAR_0 != 2) {
  FUNC_1("no string passed as argument\n");
  return -1;
 }
 VAR_2 = FUNC_0((unsigned char const *)VAR_1[1], FUNC_2(VAR_1[1]));
 FUNC_1("0x%x\n", VAR_2);
 return 0;
}
