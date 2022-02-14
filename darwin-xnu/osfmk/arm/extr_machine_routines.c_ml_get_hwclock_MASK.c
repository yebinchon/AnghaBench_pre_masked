
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int) ;

uint64_t
FUNC_2(void)
{
 uint64_t VAR_1 = 0;
 uint64_t VAR_2 = 0;
 uint64_t VAR_3 = 0;

 FUNC_0(VAR_0);

 do {
  VAR_1 = FUNC_1(15, 0, 14) >> 32;
  VAR_3 = FUNC_1(15, 0, 14) & 0xFFFFFFFFULL;
  VAR_2 = FUNC_1(15, 0, 14) >> 32;
 } while (VAR_1 != VAR_2);

 return (VAR_1 << 32) | (VAR_3);
}
