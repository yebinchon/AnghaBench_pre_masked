
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,int *,int*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(unsigned long *VAR_3, int VAR_4)
{
 if (VAR_4 <= VAR_2) {
  u8 VAR_5, VAR_6;
  u16 VAR_7;

  if (VAR_4 == 1)
   return 0;
  FUNC_0(VAR_4 != 2);
  FUNC_1(VAR_3[0], &VAR_7, &VAR_5);
  FUNC_1(VAR_3[1], &VAR_7, &VAR_6);


  if (VAR_5 == (VAR_1 | VAR_0) &&
      VAR_6 == (VAR_1 | VAR_0))
   return 0;




  if ((VAR_5 == VAR_1 || VAR_5 == VAR_0) &&
      VAR_6 == (VAR_1 | VAR_0))
   return 0;
  if ((VAR_6 == VAR_1 || VAR_6 == VAR_0) &&
      VAR_5 == (VAR_1 | VAR_0))
   return 0;


  if ((VAR_5 == VAR_1 && VAR_6 == VAR_0) ||
      (VAR_5 == VAR_0 && VAR_6 == VAR_1))
   return 0;


 }

 return -1;
}
