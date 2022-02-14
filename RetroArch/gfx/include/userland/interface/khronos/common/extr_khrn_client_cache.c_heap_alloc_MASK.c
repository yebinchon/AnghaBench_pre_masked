
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int client_depth; int* tree; } ;
typedef TYPE_1__ KHRN_CACHE_T ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(KHRN_CACHE_T *VAR_0, int VAR_1)
{
   int VAR_2, VAR_3;
   int VAR_4;

   FUNC_1(FUNC_2(VAR_0, VAR_1));

   VAR_2 = 1;
   for (VAR_4 = 0; VAR_4 < VAR_0->client_depth - VAR_1; VAR_4++) {
      VAR_2 <<= 1;
      if (VAR_0->tree[VAR_2 + 1] >= VAR_1 && (VAR_0->tree[VAR_2] < VAR_1 || VAR_0->tree[VAR_2] > VAR_0->tree[VAR_2 + 1]))
         VAR_2++;
   }

   VAR_0->tree[VAR_2] = 0;

   for (VAR_3 = VAR_2; VAR_0->tree[VAR_3 ^ 1] < VAR_0->tree [VAR_3 >> 1]; VAR_3 >>= 1)
      VAR_0->tree[VAR_3 >> 1] = FUNC_0(VAR_0->tree[VAR_3], VAR_0->tree[VAR_3 ^ 1]);

   return VAR_2 * (1 << (VAR_1 - 1)) - (1 << (VAR_0->client_depth - 1));
}
