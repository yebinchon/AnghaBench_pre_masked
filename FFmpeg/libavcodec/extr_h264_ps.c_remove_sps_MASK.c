
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {scalar_t__* sps_list; TYPE_5__** pps_list; } ;
struct TYPE_6__ {int sps_id; } ;
typedef TYPE_1__ PPS ;
typedef TYPE_2__ H264ParamSets ;


 int FUNC_0 (TYPE_5__**) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(H264ParamSets *VAR_0, int VAR_1)
{
    FUNC_1(&VAR_0->sps_list[VAR_1]);
}
