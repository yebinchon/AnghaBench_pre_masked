
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; void** key; } ;
typedef TYPE_1__ mpc_block ;
typedef int mpc_bits_reader ;


 scalar_t__ FUNC_0 (int *,int*) ;
 void* FUNC_1 (int *,int) ;

int FUNC_2(mpc_bits_reader * VAR_0, mpc_block * VAR_1)
{
 int VAR_2 = 2;

 VAR_1->size = 0;
 VAR_1->key[0] = FUNC_1(VAR_0, 8);
 VAR_1->key[1] = FUNC_1(VAR_0, 8);

 VAR_2 += FUNC_0(VAR_0, &(VAR_1->size));

 if (VAR_1->size >= VAR_2)
  VAR_1->size -= VAR_2;

 return VAR_2;
}
