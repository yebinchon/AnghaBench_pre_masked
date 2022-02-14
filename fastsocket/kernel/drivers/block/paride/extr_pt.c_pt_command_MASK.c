
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int name; struct pi_adapter* pi; } ;
struct pi_adapter {int dummy; } ;


 int FUNC_0 (struct pt_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pi_adapter*) ;
 int FUNC_2 (struct pi_adapter*) ;
 int FUNC_3 (struct pi_adapter*,char*,int) ;
 int FUNC_4 (char*,int ,char*) ;
 scalar_t__ FUNC_5 (struct pt_unit*,int,int,char*,char*) ;
 int FUNC_6 (struct pi_adapter*,int) ;
 int FUNC_7 (struct pi_adapter*,int,int) ;

__attribute__((used)) static int FUNC_8(struct pt_unit *VAR_2, char *VAR_3, int VAR_4, char *VAR_5)
{
 struct pi_adapter *VAR_6 = VAR_2->pi;
 FUNC_1(VAR_6);

 FUNC_7(VAR_6, 6, FUNC_0(VAR_2));

 if (FUNC_5(VAR_2, VAR_0 | VAR_1, 0, VAR_5, "before command")) {
  FUNC_2(VAR_6);
  return -1;
 }

 FUNC_7(VAR_6, 4, VAR_4 % 256);
 FUNC_7(VAR_6, 5, VAR_4 / 256);
 FUNC_7(VAR_6, 7, 0xa0);

 if (FUNC_5(VAR_2, VAR_0, VAR_1, VAR_5, "command DRQ")) {
  FUNC_2(VAR_6);
  return -1;
 }

 if (FUNC_6(VAR_6, 2) != 1) {
  FUNC_4("%s: %s: command phase error\n", VAR_2->name, VAR_5);
  FUNC_2(VAR_6);
  return -1;
 }

 FUNC_3(VAR_6, VAR_3, 12);

 return 0;
}
