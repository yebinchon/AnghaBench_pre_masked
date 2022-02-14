
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int ** VAR_2 ;
 int FUNC_1 (char*,int,...) ;

void
FUNC_2(void)
{
 int VAR_3, VAR_4;

 FUNC_0();

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  FUNC_1("Port %c\n", 'B'+VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_1("  Pin %d = %d\n", VAR_4, VAR_2[VAR_3][VAR_4]);
 }
}
