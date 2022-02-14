
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_uint_t ;
typedef int mpc_uint32_t ;
typedef int mpc_bits_reader ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *,int) ;

mpc_uint32_t FUNC_1(mpc_bits_reader * VAR_2, mpc_uint_t VAR_3)
{
 mpc_uint32_t VAR_4 = 0;
 if (VAR_3 == 0)
  return 0;
 if (VAR_1[VAR_3 - 1] > 1)
  VAR_4 = FUNC_0(VAR_2, VAR_1[VAR_3 - 1] - 1);
 if (VAR_4 >= VAR_0[VAR_3 - 1])
  VAR_4 = ((VAR_4 << 1) | FUNC_0(VAR_2, 1)) - VAR_0[VAR_3 - 1];
 return VAR_4;
}
