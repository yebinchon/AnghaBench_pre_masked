
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

__attribute__((used)) static void FUNC_3(const char *VAR_3, const char *VAR_4, int VAR_5)
{
 const char *VAR_6 = FUNC_0((char *)VAR_3);

 if (VAR_4)
  FUNC_2("%s\n\n", VAR_4);

 FUNC_2("%s v%d.%d\n", VAR_0, VAR_1, VAR_2);
 FUNC_2("usage: %s [op] [-v] [-i id] [-t type] [-p pid] [-u uid] [-g gid] [-l login] [-G {groupspec}] [-m gmuid]\n", VAR_6);
 if (!VAR_5)
  FUNC_1(1);

 FUNC_2("\t%-15s\tOne of: create | destroy | lookup | support\n", "[op]");
 FUNC_2("\t%-15s\tBe verbose\n", "-v");

 FUNC_2("\t%-15s\tID of the persona\n", "-i id");
 FUNC_2("\t%-15s\tType of the persona\n", "-t type");
 FUNC_2("\t%-15s\tPID of the process whose persona info to lookup\n", "-p pid");
 FUNC_2("\t%-15s\tUID to use in lookup\n", "-u uid");
 FUNC_2("\t%-15s\tGID of the persona\n", "-g gid");
 FUNC_2("\t%-15s\tLogin name of the persona\n", "-l login");
 FUNC_2("\t%-15s\tGroups to which the persona will belong\n", "-G {groupspec}");
 FUNC_2("\t%-15s\tgroupspec: G1{,G2,G3...}\n", " ");
 FUNC_2("\t%-15s\tUID used for memberd lookup (opt-in to memberd)\n", "-m gmuid");

 FUNC_2("\n");
 FUNC_1(1);
}
