
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct exofs_mountopt {int timeout; int pid; } ;
typedef int str ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_2 (int *,int*) ;
 int FUNC_3 (char*,int *,int) ;
 int FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (struct exofs_mountopt*,int ,int) ;
 int FUNC_6 (char*,int *,int ) ;
 char* FUNC_7 (char**,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(char *VAR_6, struct exofs_mountopt *VAR_7)
{
 char *VAR_8;
 substring_t VAR_9[VAR_4];
 int VAR_10;
 bool VAR_11 = 0;

 FUNC_0("parse_options %s\n", VAR_6);

 FUNC_5(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->timeout = VAR_0;

 while ((VAR_8 = FUNC_7(&VAR_6, ",")) != ((void*)0)) {
  int VAR_12;
  char VAR_13[32];

  if (!*VAR_8)
   continue;

  VAR_12 = FUNC_4(VAR_8, VAR_5, VAR_9);
  switch (VAR_12) {
  case 129:
   if (0 == FUNC_3(VAR_13, &VAR_9[0], sizeof(VAR_13)))
    return -VAR_1;
   VAR_7->pid = FUNC_6(VAR_13, ((void*)0), 0);
   if (VAR_7->pid < VAR_2) {
    FUNC_1("Partition ID must be >= %u",
       VAR_2);
    return -VAR_1;
   }
   VAR_11 = 1;
   break;
  case 128:
   if (FUNC_2(&VAR_9[0], &VAR_10))
    return -VAR_1;
   if (VAR_10 <= 0) {
    FUNC_1("Timout must be > 0");
    return -VAR_1;
   }
   VAR_7->timeout = VAR_10 * VAR_3;
   break;
  }
 }

 if (!VAR_11) {
  FUNC_1("Need to specify the following options:\n");
  FUNC_1("    -o pid=pid_no_to_use\n");
  return -VAR_1;
 }

 return 0;
}
