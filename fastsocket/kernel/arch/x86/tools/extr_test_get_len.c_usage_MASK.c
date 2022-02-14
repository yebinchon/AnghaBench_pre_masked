
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(VAR_1, "Usage: objdump -d a.out | awk -f distill.awk |"
  " %s [-y|-n] [-v]\n", VAR_0);
 FUNC_1(VAR_1, "\t-y	64bit mode\n");
 FUNC_1(VAR_1, "\t-n	32bit mode\n");
 FUNC_1(VAR_1, "\t-v	verbose mode\n");
 FUNC_0(1);
}
