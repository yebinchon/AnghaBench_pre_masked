
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct console *VAR_1, const char *VAR_2,
         unsigned int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 for (VAR_4=0, VAR_5=0; VAR_4<VAR_3; VAR_4++) {
  if (!VAR_2[VAR_4])

   return;
  if (VAR_2[VAR_4] == '\n') {
   do {
    VAR_6 = FUNC_0(VAR_0, &VAR_2[VAR_5], VAR_4-VAR_5);
    if (VAR_6 < 0)
     ;
    VAR_5 += VAR_6;
   } while (VAR_5 < VAR_4);
   while (FUNC_0(VAR_0, "\r", 1) <= 0)
    ;
  }
 }
 if (VAR_5 != VAR_3) {
  do {
   VAR_6 = FUNC_0(VAR_0, &VAR_2[VAR_5], VAR_3-VAR_5);
   if (VAR_6 < 0)
    ;
   VAR_5 += VAR_6;
  } while (VAR_5 < VAR_3);
 }

}
