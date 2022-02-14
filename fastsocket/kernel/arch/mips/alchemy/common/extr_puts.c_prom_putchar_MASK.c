
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char* VAR_4 ;
 int FUNC_0 () ;

void
FUNC_1(const unsigned char VAR_5)
{
 unsigned char VAR_6;
 int VAR_7 = 0;

 do {
  VAR_6 = VAR_4[VAR_0];
  FUNC_0();
  VAR_7++;
  if (VAR_7 > VAR_2)
   break;
 } while (0 == (VAR_6 & VAR_3));

 VAR_4[VAR_1] = VAR_5;
}
