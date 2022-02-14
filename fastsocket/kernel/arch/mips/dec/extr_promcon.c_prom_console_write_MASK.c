
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(struct console *VAR_0, const char *VAR_1,
          unsigned VAR_2)
{
 unsigned VAR_3;




 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (*VAR_1 == 10)
   FUNC_0("%c", 13);
  FUNC_0("%c", *VAR_1++);
 }
}
