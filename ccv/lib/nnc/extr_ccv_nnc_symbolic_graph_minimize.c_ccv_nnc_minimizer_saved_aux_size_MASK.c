
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ccv_nnc_cmd_t ;


 scalar_t__ FUNC_0 (int const,int,int,int*,int,int*,int) ;

int FUNC_1(const ccv_nnc_cmd_t VAR_0)
{
 int VAR_1, VAR_2 = -1;
 uint64_t VAR_3 = 0x1;
 uint64_t VAR_4 = 0x0;
 for (VAR_1 = 0; VAR_1 < 62 && VAR_2 < 0; VAR_1++)
 {
  VAR_3 |= ((uint64_t)1 << (VAR_1 + 1));
  VAR_4 |= ((uint64_t)1 << VAR_1);
  if (FUNC_0(VAR_0, VAR_1 + 2, VAR_1 + 1, &VAR_3, 1, &VAR_4, 1))
   VAR_2 = VAR_1;
 }
 return VAR_2;
}
