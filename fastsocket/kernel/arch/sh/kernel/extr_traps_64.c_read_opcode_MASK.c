
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long*) ;
 int FUNC_1 (int ,unsigned long,int) ;

__attribute__((used)) static int FUNC_2(unsigned long long VAR_2, unsigned long *VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 if ((VAR_2 & 3) == 1) {

  VAR_6 = VAR_2 & ~3;
  if (VAR_4) {
   if (!FUNC_1(VAR_1, VAR_6, sizeof(unsigned long))) {
    VAR_5 = -VAR_0;
   } else {
    VAR_5 = FUNC_0(VAR_7, (unsigned long *)VAR_6);
    *VAR_3 = VAR_7;
   }
   return VAR_5;
  } else {



   *VAR_3 = *(unsigned long *) VAR_6;
   return 0;
  }
 } else if ((VAR_2 & 1) == 0) {




  return -VAR_0;
 } else {

  return -VAR_0;
 }
}
