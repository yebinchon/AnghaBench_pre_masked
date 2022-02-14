
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int block_data_size; } ;
typedef TYPE_1__ VCOS_BLOCKPOOL_T ;


 int FUNC_0 (void*,int ,int ) ;
 void* FUNC_1 (TYPE_1__*) ;

void *FUNC_2(VCOS_BLOCKPOOL_T *VAR_0)
{
   void* VAR_1 = FUNC_1(VAR_0);
   if (VAR_1)
      FUNC_0(VAR_1, 0, VAR_0->block_data_size);
   return VAR_1;
}
