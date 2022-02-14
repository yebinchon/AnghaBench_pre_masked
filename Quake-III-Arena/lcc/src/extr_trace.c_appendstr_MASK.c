
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (int,int ) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_4) {
 do
  if (VAR_3 == VAR_2)
   if (VAR_3) {
    char *VAR_5 = FUNC_0(2*(VAR_2 - VAR_1), VAR_0);
    FUNC_1(VAR_5, VAR_1, VAR_2 - VAR_1);
    VAR_3 = VAR_5 + (VAR_2 - VAR_1);
    VAR_2 = VAR_5 + 2*(VAR_2 - VAR_1);
    VAR_1 = VAR_5;
   } else {
    VAR_3 = VAR_1 = FUNC_0(80, VAR_0);
    VAR_2 = VAR_1 + 80;
   }
 while ((*VAR_3++ = *VAR_4++) != 0);
 VAR_3--;
}
