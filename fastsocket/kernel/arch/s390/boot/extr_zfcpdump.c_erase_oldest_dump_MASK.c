
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* dump_dir; int dump_nr; scalar_t__ parm_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,...) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(void)
{
 int VAR_4;
 char VAR_5[1024] = {};
 char VAR_6[1024] = {};

 VAR_4 = FUNC_3(VAR_3.dump_dir, VAR_0);
 if (VAR_4 < 0) {
  FUNC_1("Internal error: dump number cannot be evaluated\n");
  return -1;
 }
 FUNC_6(VAR_5, "dump.%i", VAR_4);
 if (VAR_4 == VAR_3.dump_nr) {
  FUNC_1("Sorry, cannot delete any more dumps!\n");
  return -1;
 }
 if (VAR_3.parm_mode == VAR_1) {
  FUNC_0("Removing oldest dump: '%s'\n", VAR_5);
 } else {
  while ((FUNC_7(VAR_6, "y") != 0) && (FUNC_7(VAR_6, "n") != 0)) {
   FUNC_0("Remove oldest dump: '%s' (y/n)? ", VAR_5);
   FUNC_4("%s", VAR_6);
  }
  if (FUNC_7(VAR_6, "n") == 0)
   return -1;
 }
 FUNC_6(VAR_5, "%s/dump.%i", VAR_3.dump_dir, VAR_4);
 if (FUNC_9(VAR_5) == -1) {
  FUNC_2("Could not remove dump\n");
  return -1;
 }
 FUNC_8();




 FUNC_5(VAR_2);
 FUNC_0("Dump removed!\n");
 return 0;
}
