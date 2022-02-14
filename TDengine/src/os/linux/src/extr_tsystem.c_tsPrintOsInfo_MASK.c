
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int machine; int version; int release; int nodename; int sysname; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct utsname*) ;

void FUNC_2() {
  FUNC_0(" os pageSize:            %ld(KB)", VAR_2);
  FUNC_0(" os openMax:             %ld", VAR_1);
  FUNC_0(" os streamMax:           %ld", VAR_3);
  FUNC_0(" os numOfCores:          %d", VAR_0);
  FUNC_0(" os totalDisk:           %f(GB)", VAR_4);
  FUNC_0(" os totalMemory:         %d(MB)", VAR_5);

  struct utsname VAR_6;
  if (FUNC_1(&VAR_6)) {
    FUNC_0(" can't fetch os info");
    return;
  }
  FUNC_0(" os sysname:             %s", VAR_6.sysname);
  FUNC_0(" os nodename:            %s", VAR_6.nodename);
  FUNC_0(" os release:             %s", VAR_6.release);
  FUNC_0(" os version:             %s", VAR_6.version);
  FUNC_0(" os machine:             %s", VAR_6.machine);
}
