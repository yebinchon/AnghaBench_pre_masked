
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* str; struct TYPE_5__* link; } ;
typedef TYPE_1__* List ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 char** VAR_1 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void FUNC_7(char *VAR_2[], List VAR_3, List VAR_4, List VAR_5) {
 int VAR_6, VAR_7;
 List VAR_8[3];

 VAR_8[0] = VAR_3;
 VAR_8[1] = VAR_4;
 VAR_8[2] = VAR_5;
 for (VAR_6 = VAR_7 = 0; VAR_2[VAR_6]; VAR_6++) {
  char *VAR_9 = FUNC_4(VAR_2[VAR_6], '$');
  if (VAR_9 && FUNC_2(VAR_9[1])) {
   int VAR_10 = VAR_9[1] - '0';
   FUNC_1(VAR_10 >=1 && VAR_10 <= 3);
   if ((VAR_4 = VAR_8[VAR_10-1])) {
    VAR_4 = VAR_4->link;
    VAR_1[VAR_7] = FUNC_0(FUNC_5(VAR_2[VAR_6]) + FUNC_5(VAR_4->str) - 1);
    FUNC_6(VAR_1[VAR_7], VAR_2[VAR_6], VAR_9 - VAR_2[VAR_6]);
    VAR_1[VAR_7][VAR_9-VAR_2[VAR_6]] = '\0';
    FUNC_3(VAR_1[VAR_7], VAR_4->str);
    FUNC_3(VAR_1[VAR_7++], VAR_9 + 2);
    while (VAR_4 != VAR_8[VAR_10-1]) {
     VAR_4 = VAR_4->link;
     FUNC_1(VAR_7 < VAR_0);
     VAR_1[VAR_7++] = VAR_4->str;
    };
   }
  } else if (*VAR_2[VAR_6]) {
   FUNC_1(VAR_7 < VAR_0);
   VAR_1[VAR_7++] = VAR_2[VAR_6];
  }
 }
 VAR_1[VAR_7] = ((void*)0);
}
