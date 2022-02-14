
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int mpc_uint_t ;
typedef unsigned int mpc_int32_t ;
struct TYPE_3__ {int* buff; int count; } ;
typedef TYPE_1__ mpc_bits_reader ;



mpc_int32_t FUNC_0(mpc_bits_reader * VAR_0, const mpc_uint_t VAR_1)
{
 unsigned int VAR_2 = 0;
 unsigned int VAR_3 = VAR_0->buff[0] & ((1 << VAR_0->count) - 1);

 while( VAR_3 == 0 ) {
  VAR_2 += VAR_0->count;
  VAR_0->buff++;
  VAR_3 = VAR_0->buff[0];
  VAR_0->count = 8;
 }

 while( ((1 << (VAR_0->count - 1)) & VAR_3) == 0 ) {
  VAR_2++;
  VAR_0->count--;
 }
 VAR_0->count--;

 while( VAR_0->count < VAR_1 ) {
  VAR_0->buff++;
  VAR_0->count += 8;
  VAR_3 = (VAR_3 << 8) | VAR_0->buff[0];
 }

 VAR_0->count -= VAR_1;

 return (VAR_2 << VAR_1) | ((VAR_3 >> VAR_0->count) & ((1 << VAR_1) - 1));
}
