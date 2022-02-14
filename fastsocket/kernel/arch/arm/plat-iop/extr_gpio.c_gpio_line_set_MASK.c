
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(int VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(VAR_5);
 if (VAR_4 == VAR_1) {
  *VAR_2 &= ~(1 << VAR_3);
 } else if (VAR_4 == VAR_0) {
  *VAR_2 |= 1 << VAR_3;
 }
 FUNC_0(VAR_5);
}
