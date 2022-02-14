
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;

__attribute__((used)) static unsigned long
FUNC_1(unsigned long VAR_4)
{
 int VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8;

 if (!VAR_3)
  FUNC_0();

 VAR_8 = VAR_0;
 VAR_6 = VAR_4 & 0xfff00000;
 VAR_7 = VAR_4 & 0x000fffff;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5] == VAR_6) {
   VAR_8 = VAR_5 << 20;
   break;
  }
 }
 if (VAR_8 == VAR_0)
  return VAR_8;
 else
  return VAR_8 + VAR_7;
}
