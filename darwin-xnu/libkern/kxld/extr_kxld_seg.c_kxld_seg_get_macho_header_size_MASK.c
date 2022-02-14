
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct segment_command_64 {int dummy; } ;
struct segment_command {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int nitems; } ;
struct TYPE_6__ {TYPE_1__ sects; } ;
typedef TYPE_2__ KXLDSeg ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (scalar_t__) ;

u_long
FUNC_2(const KXLDSeg *VAR_0, boolean_t VAR_1)
{
    u_long VAR_2 = 0;

    FUNC_0(VAR_0);

    if (VAR_1) {
        VAR_2 += sizeof(struct segment_command);
    } else {
        VAR_2 += sizeof(struct segment_command_64);
    }
    VAR_2 += VAR_0->sects.nitems * FUNC_1(VAR_1);

    return VAR_2;
}
