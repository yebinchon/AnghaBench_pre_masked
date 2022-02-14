
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint64_t
FUNC_1(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = (VAR_0 >> VAR_1) & ((1 << VAR_2) - 1);
 VAR_3 = FUNC_0(VAR_3, VAR_2 - 1);
 VAR_3 = VAR_3 << 2;

 return VAR_3;
}
