
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client_depth; int* tree; } ;
typedef TYPE_1__ KHRN_CACHE_T ;



__attribute__((used)) static void FUNC_0(KHRN_CACHE_T *VAR_0, int VAR_1)
{
   int VAR_2 = VAR_1 + (1 << (VAR_0->client_depth - 1));
   int VAR_3 = 1;

   while (VAR_0->tree[VAR_2] > 0) {
      VAR_2 >>= 1;
      VAR_3++;
   }

   VAR_0->tree[VAR_2] = VAR_3;

   while (VAR_0->tree[VAR_2] == VAR_0->tree[VAR_2 ^ 1]) {
      VAR_2 >>= 1;
      VAR_0->tree[VAR_2] = VAR_0->tree[VAR_2] + 1;
   }

   while (VAR_0->tree[VAR_2] > VAR_0->tree[VAR_2 >> 1]) {
      VAR_0->tree[VAR_2 >> 1] = VAR_0->tree[VAR_2];
      VAR_2 >>= 1;
   }
}
