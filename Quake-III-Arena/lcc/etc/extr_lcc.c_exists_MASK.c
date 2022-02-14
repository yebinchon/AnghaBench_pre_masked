
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; struct TYPE_3__* link; } ;
typedef TYPE_1__* List ;


 scalar_t__ FUNC_0 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,char*,char*,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_3(char *VAR_2) {
 List VAR_3;

 if ( (VAR_2[0] == '/' || VAR_2[0] == '\\' || VAR_2[2] == ':')
 && FUNC_0(VAR_2, 4) == 0)
  return VAR_2;
 if (!(VAR_2[0] == '/' || VAR_2[0] == '\\' || VAR_2[2] == ':')
 && (VAR_3 = VAR_0))
  do {
   VAR_3 = VAR_3->link;
   if (VAR_3->str[0]) {
    char VAR_4[1024];
    FUNC_1(VAR_4, "%s/%s", VAR_3->str, VAR_2);
    if (FUNC_0(VAR_4, 4) == 0)
     return FUNC_2(VAR_4);
   } else if (FUNC_0(VAR_2, 4) == 0)
    return VAR_2;
  } while (VAR_3 != VAR_0);
 if (VAR_1 > 1)
  return VAR_2;
 return 0;
}
