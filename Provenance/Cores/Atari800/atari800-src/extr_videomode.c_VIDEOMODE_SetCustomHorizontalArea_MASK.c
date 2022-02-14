
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 () ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

int FUNC_1(unsigned int VAR_7)
{
 unsigned int VAR_8 = VAR_5;
 unsigned int VAR_9 = VAR_6;
 if (VAR_7 < VAR_4)
  return VAR_0;
 if (VAR_7 > VAR_3)
  VAR_7 = VAR_3;
 if (VAR_7 != VAR_5 || VAR_6 != VAR_2) {
  VAR_5 = VAR_7;
  VAR_6 = VAR_2;
  if (!FUNC_0()) {
   VAR_5 = VAR_8;
   VAR_6 = VAR_9;
   return VAR_0;
  }
 }
 return VAR_1;
}
