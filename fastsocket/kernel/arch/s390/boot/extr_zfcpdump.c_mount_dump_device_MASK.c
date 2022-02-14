
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parm_part; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*,char*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_6 (char*,int ,char*,int ,int *) ;
 int FUNC_7 (char*,char*,char*,int ) ;
 int FUNC_8 (int,int *,int ) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_3;
 char VAR_4[16];

 FUNC_1("e2fsck\n");
 FUNC_7(VAR_4, "%s%i", VAR_0, FUNC_2(VAR_2.parm_part));

 VAR_3 = FUNC_5();
 if (VAR_3 < 0) {
  FUNC_0("fork failed\n");
  return -1;
 } else if (VAR_3 == 0) {
  FUNC_3("/bin/e2fsck", "e2fsck", VAR_4, "-y", ((void*)0));
  FUNC_3("/sbin/e2fsck", "e2fsck", VAR_4, "-y", ((void*)0));
  FUNC_4(1);
 } else {
  FUNC_8(VAR_3, ((void*)0), 0);
 }

 FUNC_1("mount\n");
 if (FUNC_6(VAR_4, VAR_1, "ext4", 0, ((void*)0)) == 0)
  return 0;
 if (FUNC_6(VAR_4, VAR_1, "ext3", 0, ((void*)0)) == 0)
  return 0;
 if (FUNC_6(VAR_4, VAR_1, "ext2", 0, ((void*)0)) != 0) {
  FUNC_0("mount failed\n");
  return -1;
 }
 return 0;
}
