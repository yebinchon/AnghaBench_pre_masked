
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_4__ {int packets; int bytes; } ;
typedef TYPE_1__ c_p_data ;
struct TYPE_5__ {int key_len; } ;
typedef TYPE_2__ TME_DATA ;
typedef int MEM_TYPE ;


 scalar_t__ VAR_0 ;

uint32 FUNC_0(uint8 *VAR_1, uint32 VAR_2, TME_DATA *VAR_3, MEM_TYPE *VAR_4, uint8 *VAR_5)
{

 c_p_data *VAR_6=(c_p_data*)(VAR_1+VAR_3->key_len*4);

 VAR_6->bytes+=VAR_2;
 VAR_6->packets++;

 return VAR_0;

}
