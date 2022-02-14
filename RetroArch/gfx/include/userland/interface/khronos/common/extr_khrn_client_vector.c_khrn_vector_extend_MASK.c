
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size; int capacity; void* data; } ;
typedef TYPE_1__ KHRN_VECTOR_T ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,char*) ;
 int FUNC_3 (void*,void*,int) ;

bool FUNC_4(KHRN_VECTOR_T *VAR_0, uint32_t VAR_1)
{
   uint32_t VAR_2 = VAR_0->size + VAR_1;
   if (VAR_2 > VAR_0->capacity) {
      uint32_t VAR_3 = FUNC_0(VAR_0->capacity + (VAR_0->capacity >> 1), VAR_2);
      void *VAR_4 = FUNC_2(VAR_3, "KHRN_VECTOR_T.data");
      if (!VAR_4) {
         VAR_3 = VAR_2;
         VAR_4 = FUNC_2(VAR_3, "KHRN_VECTOR_T.data");
         if (!VAR_4) {
            return 0;
         }
      }
      if (VAR_0->data) {
         FUNC_3(VAR_4, VAR_0->data, VAR_0->size);
         FUNC_1(VAR_0->data);
      }
      VAR_0->data = VAR_4;
      VAR_0->capacity = VAR_3;
   }
   VAR_0->size += VAR_1;
   return 1;
}
