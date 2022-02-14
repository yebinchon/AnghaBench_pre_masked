
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uchar ;
typedef long Rune ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (long*,char*) ;
 char* FUNC_1 (char*,long) ;

char*
FUNC_2(char *VAR_2, long VAR_3)
{
 long VAR_4;
 Rune VAR_5;
 int VAR_6;

 if(VAR_3 < VAR_1)
  return FUNC_1(VAR_2, VAR_3);

 for(;;) {
  VAR_4 = *(uchar*)VAR_2;
  if(VAR_4 < VAR_0) {
   if(VAR_4 == 0)
    return 0;
   if(VAR_4 == VAR_3)
    return VAR_2;
   VAR_2++;
   continue;
  }
  VAR_6 = FUNC_0(&VAR_5, VAR_2);
  if(VAR_5 == VAR_3)
   return VAR_2;
  VAR_2 += VAR_6;
 }
}
