
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int member_2; int option_value; int * option_flag; int option_name; int * member_1; } ;
typedef TYPE_1__ IPS_OPTION ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int *,int ) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int ,int ) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_6)
{

 int VAR_7;
 char *VAR_8;
 char *VAR_9;
 IPS_OPTION VAR_10[] = {
  {"noi2o", VAR_3, 0},
  {"nommap", VAR_4, 0},
  {"ioctlsize", VAR_5, VAR_0},
  {"cdboot", VAR_2, 0},
  {"maxcmds", VAR_1, 32},
 };



 while ((VAR_8 = FUNC_5(&VAR_6, ",."))) {
  if (!*VAR_8)
   continue;
  VAR_9 = FUNC_2(VAR_8, ':');
  if (VAR_9)
   *VAR_9++ = '\0';




  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_10); VAR_7++) {
   if (FUNC_4
       (VAR_8, VAR_10[VAR_7].option_name,
        FUNC_3(VAR_10[VAR_7].option_name)) == 0) {
    if (VAR_9)
     *VAR_10[VAR_7].option_flag =
         FUNC_1(VAR_9, ((void*)0), 0);
    else
     *VAR_10[VAR_7].option_flag =
         VAR_10[VAR_7].option_value;
    break;
   }
  }
 }

 return (1);
}
