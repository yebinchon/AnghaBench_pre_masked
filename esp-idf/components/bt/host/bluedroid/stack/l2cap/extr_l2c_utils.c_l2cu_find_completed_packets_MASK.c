
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ completed_packets; int handle; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {TYPE_1__* lcb_pool; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

UINT8 FUNC_0(UINT16 *VAR_2, UINT16 *VAR_3)
{
    int VAR_4;
    UINT8 VAR_5 = 0;
    tL2C_LCB *VAR_6 = &VAR_1.lcb_pool[0];

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_6++) {
        if ((VAR_6->in_use) && (VAR_6->completed_packets > 0)) {
            *(VAR_2++) = VAR_6->handle;
            *(VAR_3++) = VAR_6->completed_packets;
            VAR_5++;
            VAR_6->completed_packets = 0;
        }
    }

    return VAR_5;
}
