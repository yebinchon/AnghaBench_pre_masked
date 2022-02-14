
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void volatile*) ;
 int FUNC_2 (int,void volatile*) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2)
{
 uint32_t VAR_3;
 volatile void *VAR_4;

 if (VAR_1 & (1 << (VAR_2 - VAR_0)))
  VAR_4 = FUNC_0(1);
 else
  VAR_4 = FUNC_0(0);

 VAR_3 = FUNC_1(VAR_4);
 VAR_3 |= 1 << (VAR_2 - VAR_0 + 16);
 FUNC_2(VAR_3, VAR_4);
}
