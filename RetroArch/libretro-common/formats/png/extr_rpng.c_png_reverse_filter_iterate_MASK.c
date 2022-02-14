
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ interlace; } ;
struct TYPE_5__ {scalar_t__ process; TYPE_2__ ihdr; } ;
typedef TYPE_1__ rpng_t ;


 int FUNC_0 (int **,TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int **,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(rpng_t *VAR_0, uint32_t **VAR_1)
{
   if (!VAR_0)
      return 0;

   if (VAR_0->ihdr.interlace && VAR_0->process)
      return FUNC_0(VAR_1, &VAR_0->ihdr, VAR_0->process);

   return FUNC_1(VAR_1, &VAR_0->ihdr, VAR_0->process);
}
