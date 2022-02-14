
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* scr; } ;
typedef TYPE_2__ sync_common_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int scr_offset; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( sync_common_t * VAR_1, int64_t VAR_2 )
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        VAR_1->scr[VAR_3].scr_offset += VAR_2;
    }
}
