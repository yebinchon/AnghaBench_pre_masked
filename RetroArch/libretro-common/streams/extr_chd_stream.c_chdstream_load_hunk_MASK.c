
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ hunknum; scalar_t__ hunkmem; int chd; scalar_t__ swab; } ;
typedef TYPE_1__ chdstream_t ;
typedef scalar_t__ chd_error ;
struct TYPE_5__ {int hunkbytes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(chdstream_t *VAR_1, uint32_t VAR_2)
{
   chd_error VAR_3;
   uint16_t *VAR_4;
   uint32_t VAR_5;
   uint32_t VAR_6;

   if (VAR_2 == VAR_1->hunknum)
      return 1;

   VAR_3 = FUNC_2(VAR_1->chd, VAR_2, VAR_1->hunkmem);
   if (VAR_3 != VAR_0)
      return 0;

   if (VAR_1->swab)
   {
      VAR_6 = FUNC_1(VAR_1->chd)->hunkbytes / 2;
      VAR_4 = (uint16_t*) VAR_1->hunkmem;
      for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5)
         VAR_4[VAR_5] = FUNC_0(VAR_4[VAR_5]);
   }

   VAR_1->hunknum = VAR_2;
   return 1;
}
