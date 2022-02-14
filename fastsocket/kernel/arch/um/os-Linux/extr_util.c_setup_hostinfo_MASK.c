
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* sysname; char* nodename; char* release; char* version; char* machine; } ;


 int FUNC_0 (char*,int,char*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (struct utsname*) ;

void FUNC_2(char *VAR_0, int VAR_1)
{
 struct utsname VAR_2;

 FUNC_1(&VAR_2);
 FUNC_0(VAR_0, VAR_1, "%s %s %s %s %s", VAR_2.sysname, VAR_2.nodename,
   VAR_2.release, VAR_2.version, VAR_2.machine);
}
