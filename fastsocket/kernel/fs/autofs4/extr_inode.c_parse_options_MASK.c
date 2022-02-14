
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
 int FUNC_4 (unsigned int*) ;
 int FUNC_5 (unsigned int*) ;
 int FUNC_6 (unsigned int*) ;
 char* FUNC_7 (char**,char*) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(char *VAR_5, int *VAR_6, uid_t *VAR_7, gid_t *VAR_8,
  pid_t *VAR_9, unsigned int *VAR_10, int *VAR_11, int *VAR_12)
{
 char *VAR_13;
 substring_t VAR_14[VAR_2];
 int VAR_15;

 *VAR_7 = FUNC_1();
 *VAR_8 = FUNC_0();
 *VAR_9 = FUNC_8(VAR_3);

 *VAR_11 = VAR_1;
 *VAR_12 = VAR_0;

 *VAR_6 = -1;

 if (!VAR_5)
  return 1;

 while ((VAR_13 = FUNC_7(&VAR_5, ",")) != ((void*)0)) {
  int VAR_16;
  if (!*VAR_13)
   continue;

  VAR_16 = FUNC_3(VAR_13, VAR_4, VAR_14);
  switch (VAR_16) {
  case 135:
   if (FUNC_2(VAR_14, VAR_6))
    return 1;
   break;
  case 128:
   if (FUNC_2(VAR_14, &VAR_15))
    return 1;
   *VAR_7 = VAR_15;
   break;
  case 134:
   if (FUNC_2(VAR_14, &VAR_15))
    return 1;
   *VAR_8 = VAR_15;
   break;
  case 129:
   if (FUNC_2(VAR_14, &VAR_15))
    return 1;
   *VAR_9 = VAR_15;
   break;
  case 131:
   if (FUNC_2(VAR_14, &VAR_15))
    return 1;
   *VAR_11 = VAR_15;
   break;
  case 132:
   if (FUNC_2(VAR_14, &VAR_15))
    return 1;
   *VAR_12 = VAR_15;
   break;
  case 133:
   FUNC_5(VAR_10);
   break;
  case 136:
   FUNC_4(VAR_10);
   break;
  case 130:
   FUNC_6(VAR_10);
   break;
  default:
   return 1;
  }
 }
 return (*VAR_6 < 0);
}
