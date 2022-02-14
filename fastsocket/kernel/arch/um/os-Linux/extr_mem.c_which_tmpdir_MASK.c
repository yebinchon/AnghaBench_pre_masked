
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int ,char) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_4, VAR_5;
 char VAR_6[128] = { '\0' };

 if (VAR_1)
  return;

 VAR_1 = 1;

 FUNC_4("Checking for tmpfs mount on /dev/shm...");

 VAR_4 = FUNC_3("/proc/mounts", VAR_0);
 if (VAR_4 < 0) {
  FUNC_4("failed to open /proc/mounts, errno = %d\n", VAR_3);
  return;
 }

 while (1) {
  VAR_5 = FUNC_2(VAR_4, VAR_6, FUNC_0(VAR_6), ' ');
  if (VAR_5 != 1)
   break;

  if (!FUNC_6(VAR_6, "/dev/shm", FUNC_5("/dev/shm")))
   goto found;

  VAR_5 = FUNC_2(VAR_4, VAR_6, FUNC_0(VAR_6), '\n');
  if (VAR_5 != 1)
   break;
 }

err:
 if (VAR_5 == 0)
  FUNC_4("nothing mounted on /dev/shm\n");
 else if (VAR_5 < 0)
  FUNC_4("read returned errno %d\n", -VAR_5);

out:
 FUNC_1(VAR_4);

 return;

found:
 VAR_5 = FUNC_2(VAR_4, VAR_6, FUNC_0(VAR_6), ' ');
 if (VAR_5 != 1)
  goto err;

 if (FUNC_6(VAR_6, "tmpfs", FUNC_5("tmpfs"))) {
  FUNC_4("not tmpfs\n");
  goto out;
 }

 FUNC_4("OK\n");
 VAR_2 = "/dev/shm";
 goto out;
}
