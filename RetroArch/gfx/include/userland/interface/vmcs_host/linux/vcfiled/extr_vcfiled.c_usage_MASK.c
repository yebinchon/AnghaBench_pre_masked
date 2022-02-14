
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const char *VAR_1)
{

   FUNC_0(VAR_0,"usage: %s [-debug] [-foreground] [-root dir] [-lock prefix]\n",
           VAR_1);
   FUNC_0(VAR_0,"  --debug       - debug to stderr rather than syslog\n");
   FUNC_0(VAR_0,"  --foreground  - do not fork, stay in foreground\n");
   FUNC_0(VAR_0,"  --root dir    - chdir to this directory first\n");
   FUNC_0(VAR_0,"  --lock prefix - prefix to append to VCFILED_LOCKFILE\n");
}
