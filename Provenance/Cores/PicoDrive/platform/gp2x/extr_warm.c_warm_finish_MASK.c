
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unm ;
struct utsname {char* release; } ;
typedef int name ;
typedef int cmd ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct utsname*,int ,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct utsname*) ;
 int VAR_3 ;

void FUNC_8(void)
{
 char VAR_4[32], VAR_5[64];
 int VAR_6;

 if (VAR_3 < 0)
  return;

 FUNC_0(VAR_3);
 VAR_3 = -1;

 if (VAR_1 < 0x26) {
  struct utsname VAR_7;
  FUNC_3(&VAR_7, 0, sizeof(VAR_7));
  FUNC_7(&VAR_7);
  FUNC_4(VAR_4, sizeof(VAR_4), "warm_%s", VAR_7.release);
 }
 else
  FUNC_5(VAR_4, "warm");

 FUNC_4(VAR_5, sizeof(VAR_5), "/sbin/rmmod %s", VAR_4);
 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6 != 0) {
  FUNC_1(VAR_2, "system/rmmod failed: %d %d\n", VAR_6, VAR_0);
  FUNC_2(VAR_4);
 }
}
