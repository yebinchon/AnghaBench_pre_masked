
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pteval_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static pteval_t FUNC_2(pteval_t VAR_5)
{
 if (VAR_5 & VAR_4) {
  unsigned long VAR_6 = (VAR_5 & VAR_3) >> VAR_1;
  pteval_t VAR_7 = VAR_5 & VAR_2;
  unsigned long VAR_8 = FUNC_0(VAR_6);







  if (FUNC_1(VAR_8 == VAR_0)) {
   VAR_8 = 0;
   VAR_7 = 0;
  }

  VAR_5 = ((pteval_t)VAR_8 << VAR_1) | VAR_7;
 }

 return VAR_5;
}
