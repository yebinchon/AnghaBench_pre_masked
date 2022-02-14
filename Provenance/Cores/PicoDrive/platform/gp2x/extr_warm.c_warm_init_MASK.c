
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unm ;
struct utsname {char* release; } ;
typedef int buff2 ;
typedef int buff1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct utsname*,int ,int) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,char*,...) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct utsname*) ;
 scalar_t__ VAR_4 ;

int FUNC_8(void)
{
 struct utsname VAR_5;
 char VAR_6[32], VAR_7[128];
 int VAR_8;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_7(&VAR_5);

 if (FUNC_5(VAR_5.release) < 3 || VAR_5.release[1] != '.') {
  FUNC_0(VAR_3, "unexpected version string: %s\n", VAR_5.release);
  goto fail;
 }
 VAR_2 = ((VAR_5.release[0] - '0') << 4) | (VAR_5.release[2] - '0');

 VAR_4 = FUNC_3("/proc/warm", VAR_0);
 if (VAR_4 >= 0)
  return 0;

 FUNC_4(VAR_6, sizeof(VAR_6), "warm_%s.%s", VAR_5.release, VAR_2 >= 0x26 ? "ko" : "o");
 FUNC_4(VAR_7, sizeof(VAR_7), "/sbin/insmod %s verbose=1", VAR_6);


 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 != 0) {
  FUNC_0(VAR_3, "system/insmod failed: %d %d\n", VAR_8, VAR_1);
  if (VAR_2 >= 0x26) {
   VAR_8 = FUNC_1(VAR_6, "verbose=1");
   if (VAR_8 != 0)
    FUNC_0(VAR_3, "manual insmod also failed: %d\n", VAR_8);
  }
 }

 VAR_4 = FUNC_3("/proc/warm", VAR_0);
 if (VAR_4 >= 0)
  return 0;

fail:
 FUNC_0(VAR_3, "wARM: can't init, acting as sys_cacheflush wrapper\n");
 return -1;
}
