
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(pmd_t *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;

 VAR_5 &= VAR_0;
 VAR_6 = VAR_5 + VAR_2;
 while (VAR_5 < VAR_6) {
  FUNC_1(VAR_4++, FUNC_0(VAR_5 | VAR_3));
  VAR_5 += VAR_1;
 }
}
