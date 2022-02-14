
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ rnum; int origin; } ;
typedef TYPE_2__ ccv_cache_t ;
struct TYPE_6__ {int off; scalar_t__ sign; int type; } ;
struct TYPE_8__ {TYPE_1__ terminal; } ;
typedef TYPE_3__ ccv_cache_index_t ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,scalar_t__,int ) ;

void* FUNC_2(ccv_cache_t* VAR_0, uint64_t VAR_1, uint8_t* VAR_2)
{
 if (VAR_0->rnum == 0)
  return 0;
 ccv_cache_index_t* VAR_3 = FUNC_1(&VAR_0->origin, VAR_1, 0);
 if (!VAR_3)
  return 0;
 int VAR_4 = VAR_3->terminal.off & 0x1;
 if (!VAR_4)
  return 0;
 if (VAR_3->terminal.sign != VAR_1)
  return 0;
 if (VAR_2)
  *VAR_2 = FUNC_0(VAR_3->terminal.type);
 return (void*)(VAR_3->terminal.off - (VAR_3->terminal.off & 0x3));
}
