
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(char VAR_2)
{
 while ((*VAR_0 & 0x1) == 0)
  FUNC_0();
 if (VAR_2 == '\n') {
  *VAR_1 = '\r';
  while ((*VAR_0 & 0x1) == 0)
   FUNC_0();
 }
 *VAR_1 = VAR_2;
}
