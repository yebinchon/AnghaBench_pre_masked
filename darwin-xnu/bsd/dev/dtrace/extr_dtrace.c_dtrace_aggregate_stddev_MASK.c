
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(uint64_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
#pragma unused(arg)
 int64_t VAR_3 = (int64_t)VAR_1;
 uint64_t VAR_4[2];

 VAR_0[0]++;
 VAR_0[1] += VAR_1;
 if (VAR_3 < 0)
  VAR_3 = -VAR_3;

 FUNC_1((uint64_t)VAR_3, (uint64_t)VAR_3, VAR_4);
 FUNC_0(VAR_0 + 2, VAR_4, VAR_0 + 2);
}
