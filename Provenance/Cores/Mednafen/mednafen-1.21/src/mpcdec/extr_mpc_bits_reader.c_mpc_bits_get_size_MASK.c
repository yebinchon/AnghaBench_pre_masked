
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_uint64_t ;
typedef int mpc_bits_reader ;


 unsigned char FUNC_0 (int *,int) ;

unsigned int FUNC_1(mpc_bits_reader * VAR_0, mpc_uint64_t * VAR_1)
{
 unsigned char VAR_2;
 mpc_uint64_t VAR_3 = 0;
 unsigned int VAR_4 = 0;

 do {
  VAR_2 = FUNC_0(VAR_0, 8);
  VAR_3 = (VAR_3 << 7) | (VAR_2 & 0x7F);
  VAR_4++;
 } while((VAR_2 & 0x80));

 *VAR_1 = VAR_3;
 return VAR_4;
}
