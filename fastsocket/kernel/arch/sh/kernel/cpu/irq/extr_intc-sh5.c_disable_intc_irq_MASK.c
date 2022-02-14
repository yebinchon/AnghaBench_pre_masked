
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 if (VAR_2 < 32) {
  VAR_3 = VAR_0;
  VAR_4 = 1 << VAR_2;
 } else {
  VAR_3 = VAR_1;
  VAR_4 = 1 << (VAR_2 - 32);
 }

 FUNC_0(VAR_4, VAR_3);
}
