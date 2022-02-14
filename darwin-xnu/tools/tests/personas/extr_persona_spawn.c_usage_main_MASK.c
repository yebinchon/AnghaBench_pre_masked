
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3, int VAR_4)
{
 const char *VAR_5 = FUNC_0((char *)VAR_3);

 FUNC_2("%s v%d.%d\n", VAR_0, VAR_1, VAR_2);
 FUNC_2("usage: %s [-I id] [-V] [-u uid] [-g gid] [-vw] progname [args...]\n", VAR_5);
 FUNC_2("       Spawn a new process into a new or existing persona.\n");
 if (!VAR_4)
  FUNC_1(1);

 FUNC_2("\t%-10s\tID of the persona\n", "-I id");
 FUNC_2("\t%-10s\tVerify persona parameters against existing persona (given by -I)\n", "-V");
 FUNC_2("\t%-10s\tOverride/verify the user ID of the new process\n", "-u uid");
 FUNC_2("\t%-10s\tOverride/verify the group ID of the new process\n", "-g gid");
 FUNC_2("\t%-15s\tGroups to which the persona will belong\n", "-G {groupspec}");
 FUNC_2("\t%-15s\tgroupspec: G1{,G2,G3...}\n", " ");
 FUNC_2("\t%-10s\tBe verbose\n", "-v");
 FUNC_2("\t%-10s\tDo not wait for the child process\n", "-w");
 FUNC_2("\n");

 FUNC_1(1);
}
