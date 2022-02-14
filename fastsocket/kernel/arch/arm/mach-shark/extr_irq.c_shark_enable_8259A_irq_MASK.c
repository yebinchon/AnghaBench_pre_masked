
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1)
{
 unsigned int VAR_2;
 if (VAR_1<8) {
   VAR_2 = ~(1 << VAR_1);
   VAR_0[0] &= VAR_2;
   FUNC_0(VAR_0[0],0x21);
 } else {
   VAR_2 = ~(1 << (VAR_1-8));
   VAR_0[1] &= VAR_2;
   FUNC_0(VAR_0[1],0xA1);
 }
}
