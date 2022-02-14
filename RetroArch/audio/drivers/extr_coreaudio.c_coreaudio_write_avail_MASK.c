
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int buffer; } ;
typedef TYPE_1__ coreaudio_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_0)
{
   size_t VAR_1;
   coreaudio_t *VAR_2 = (coreaudio_t*)VAR_0;

   FUNC_1(VAR_2->lock);
   VAR_1 = FUNC_0(VAR_2->buffer);
   FUNC_2(VAR_2->lock);

   return VAR_1;
}
