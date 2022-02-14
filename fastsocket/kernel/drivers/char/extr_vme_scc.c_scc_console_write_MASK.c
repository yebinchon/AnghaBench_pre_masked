
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void FUNC_3 (struct console *VAR_0, const char *VAR_1, unsigned VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(VAR_3);

 while (VAR_2--)
 {
  if (*VAR_1 == '\n')
   FUNC_2 ('\r');
  FUNC_2 (*VAR_1++);
 }
 FUNC_0(VAR_3);
}
