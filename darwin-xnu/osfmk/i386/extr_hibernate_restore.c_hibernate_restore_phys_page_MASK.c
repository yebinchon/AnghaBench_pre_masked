
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

uintptr_t
FUNC_2(uint64_t VAR_1, uint64_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 (void)VAR_4;
 uint64_t * VAR_5;
 uint64_t * VAR_6;

 if (VAR_1 == 0)
  return (uintptr_t)VAR_2;

 VAR_5 = (uint64_t *)FUNC_1(VAR_0, VAR_2);
 VAR_6 = (uint64_t *) (uintptr_t)VAR_1;

 FUNC_0(VAR_5, VAR_6, VAR_3);

 return (uintptr_t)VAR_5;
}
