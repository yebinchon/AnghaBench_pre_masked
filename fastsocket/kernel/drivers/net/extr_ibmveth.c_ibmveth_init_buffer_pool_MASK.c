
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ibmveth_buff_pool {int size; int index; int buff_size; int threshold; int active; } ;



__attribute__((used)) static void FUNC_0(struct ibmveth_buff_pool *VAR_0,
         u32 VAR_1, u32 VAR_2,
         u32 VAR_3, u32 VAR_4)
{
 VAR_0->size = VAR_2;
 VAR_0->index = VAR_1;
 VAR_0->buff_size = VAR_3;
 VAR_0->threshold = VAR_2 * 7 / 8;
 VAR_0->active = VAR_4;
}
