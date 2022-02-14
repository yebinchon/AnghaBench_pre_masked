
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
typedef int uid_t ;
struct TYPE_5__ {char* from; } ;
typedef TYPE_1__ substring_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (char*,int ,TYPE_1__*) ;
 int FUNC_3 (char*,char**,int ) ;
 char* FUNC_4 (char**,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(char *VAR_5, uid_t *VAR_6, gid_t *VAR_7, umode_t *VAR_8,
        int *VAR_9, int *VAR_10, int *VAR_11, int *VAR_12, int *VAR_13,
        int *VAR_14, int *VAR_15)
{
 char *VAR_16;
 int VAR_17;

 if (!VAR_5)
  return 1;



 while ((VAR_16 = FUNC_4(&VAR_5, ",")) != ((void*)0)) {
  substring_t VAR_18[VAR_3];
  int VAR_19;
  if (!*VAR_16)
   continue;

  VAR_19 = FUNC_2(VAR_16, VAR_4, VAR_18);
  switch (VAR_19) {
  case 131:
   return 2;
  case 129:
   if (FUNC_0(VAR_18, &VAR_17))
    return 0;
   *VAR_6 = VAR_17;
   break;
  case 132:
   if (FUNC_0(VAR_18, &VAR_17))
    return 0;
   *VAR_7 = VAR_17;
   break;
  case 128:
   if (FUNC_1(VAR_18, &VAR_17))
    return 0;
   *VAR_8 = VAR_17;
   break;
  case 148:
   *VAR_9 = 1;
   break;
  case 149:
   *VAR_9 = 0;
   break;
  case 140:
   *VAR_10 = VAR_1;
   break;
  case 139:
   *VAR_10 = VAR_2;
   break;
  case 141:
   *VAR_10 = VAR_0;
   break;
  case 147:
   *VAR_12 = 0;
   break;
  case 146:
   *VAR_12 = 1;
   break;
  case 145:
   *VAR_12 = 2;
   break;
  case 135:
   *VAR_13 = 0;
   break;
  case 133:
   *VAR_13 = 1;
   break;
  case 134:
   *VAR_13 = 2;
   break;
  case 138:
   *VAR_11 = 0;
   break;
  case 137:
   *VAR_11 = 1;
   break;
  case 136:
   *VAR_11 = 2;
   break;
  case 142:
   *VAR_14 = 0;
   break;
  case 143:
   *VAR_14 = 1;
   break;
  case 144:
   *VAR_14 = 2;
   break;
  case 130:
  {
   int VAR_20 = 1;
   char *VAR_21 = VAR_18[0].from;
   if (!VAR_21 || !*VAR_21)
    return 0;
   if (*VAR_21 == '-') VAR_20 = -1;
   if (*VAR_21 == '+' || *VAR_21 == '-') VAR_21++;
   *VAR_15 = FUNC_3(VAR_21, &VAR_21, 0) * VAR_20;
   if (*VAR_21)
    return 0;
   break;
  }
  default:
   return 0;
  }
 }
 return 1;
}
