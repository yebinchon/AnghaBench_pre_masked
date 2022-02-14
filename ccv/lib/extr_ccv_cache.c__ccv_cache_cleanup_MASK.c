
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int off; } ;
struct TYPE_7__ {int set; int bitmap; } ;
struct TYPE_8__ {TYPE_1__ terminal; TYPE_2__ branch; } ;
typedef TYPE_3__ ccv_cache_index_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ccv_cache_index_t* VAR_0)
{
 int VAR_1 = VAR_0->terminal.off & 0x1;
 if (!VAR_1)
 {
  int VAR_2;
  uint64_t VAR_3 = FUNC_1(VAR_0->branch.bitmap);
  ccv_cache_index_t* VAR_4 = (ccv_cache_index_t*)(VAR_0->branch.set - (VAR_0->branch.set & 0x3));
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  {
   if (!(VAR_4[VAR_2].terminal.off & 0x1))
    FUNC_2(VAR_4 + VAR_2);
  }
  FUNC_0(VAR_4);
 }
}
