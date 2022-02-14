
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pteval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static pteval_t FUNC_1(pteval_t VAR_4)
{
 if (VAR_4 & VAR_3) {
  unsigned long VAR_5 = (VAR_4 & VAR_2) >> VAR_0;
  pteval_t VAR_6 = VAR_4 & VAR_1;
  VAR_4 = ((pteval_t)FUNC_0(VAR_5) << VAR_0) | VAR_6;
 }

 return VAR_4;
}
