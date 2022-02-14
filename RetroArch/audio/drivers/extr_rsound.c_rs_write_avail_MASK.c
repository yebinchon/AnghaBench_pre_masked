
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rd; int buffer; scalar_t__ has_error; } ;
typedef TYPE_1__ rsd_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_0)
{
   size_t VAR_1;
   rsd_t *VAR_2 = (rsd_t*)VAR_0;

   if (VAR_2->has_error)
      return 0;
   FUNC_1(VAR_2->rd);
   VAR_1 = FUNC_0(VAR_2->buffer);
   FUNC_2(VAR_2->rd);
   return VAR_1;
}
