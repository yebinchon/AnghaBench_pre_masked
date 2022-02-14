
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,void*) ;

int
FUNC_1(uint8_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5 = 0;


 if ((VAR_3 >= 100) || (VAR_4 & ~0xffffffU)) {
  VAR_2 = VAR_0;
  return -1;
 }

 VAR_5 = ((VAR_4 << 8) | VAR_3);

 return (FUNC_0(-1, VAR_1, (void *)(uintptr_t)VAR_5));
}
