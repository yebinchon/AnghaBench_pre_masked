
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint64_t VAR_3, int VAR_4)
{
 volatile char *VAR_5;
 volatile char VAR_6;




 VAR_4 += VAR_3 & VAR_0;
 VAR_3 &= ~VAR_0;
 VAR_5 = (volatile char *)FUNC_0(VAR_3);




 VAR_2;
 while (VAR_4 > 0) {
  VAR_6 += *VAR_5;
  VAR_4 -= VAR_1;
  VAR_5 += VAR_1;
 }
}
