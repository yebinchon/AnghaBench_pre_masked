
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int substring_t ;
typedef int pid_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (char*,int ,int *) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(char *VAR_4, int *VAR_5, uid_t *VAR_6, gid_t *VAR_7,
  pid_t *VAR_8, int *VAR_9, int *VAR_10)
{
 char *VAR_11;
 substring_t VAR_12[VAR_1];
 int VAR_13;

 *VAR_6 = FUNC_1();
 *VAR_7 = FUNC_0();
 *VAR_8 = FUNC_5(VAR_3);

 *VAR_9 = *VAR_10 = VAR_0;

 *VAR_5 = -1;

 if (!VAR_4)
  return 1;

 while ((VAR_11 = FUNC_4(&VAR_4, ",")) != ((void*)0)) {
  int VAR_14;
  if (!*VAR_11)
   continue;

  VAR_14 = FUNC_3(VAR_11, VAR_2, VAR_12);
  switch (VAR_14) {
  case 133:
   if (FUNC_2(&VAR_12[0], &VAR_13))
    return 1;
   *VAR_5 = VAR_13;
   break;
  case 128:
   if (FUNC_2(&VAR_12[0], &VAR_13))
    return 1;
   *VAR_6 = VAR_13;
   break;
  case 132:
   if (FUNC_2(&VAR_12[0], &VAR_13))
    return 1;
   *VAR_7 = VAR_13;
   break;
  case 129:
   if (FUNC_2(&VAR_12[0], &VAR_13))
    return 1;
   *VAR_8 = VAR_13;
   break;
  case 130:
   if (FUNC_2(&VAR_12[0], &VAR_13))
    return 1;
   *VAR_9 = VAR_13;
   break;
  case 131:
   if (FUNC_2(&VAR_12[0], &VAR_13))
    return 1;
   *VAR_10 = VAR_13;
   break;
  default:
   return 1;
  }
 }
 return (*VAR_5 < 0);
}
