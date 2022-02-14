
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ ptr; scalar_t__ buf; } ;
typedef TYPE_1__ memstream_t ;


 int FUNC_0 (void*,scalar_t__,size_t) ;
 int FUNC_1 (TYPE_1__*) ;

uint64_t FUNC_2(memstream_t *VAR_0, void *VAR_1, uint64_t VAR_2)
{
   uint64_t VAR_3 = 0;

   if (!VAR_0)
      return 0;

   VAR_3 = VAR_0->size - VAR_0->ptr;
   if (VAR_2 > VAR_3)
      VAR_2 = VAR_3;

   FUNC_0(VAR_1, VAR_0->buf + VAR_0->ptr, (size_t)VAR_2);
   VAR_0->ptr += VAR_2;
   FUNC_1(VAR_0);
   return VAR_2;
}
