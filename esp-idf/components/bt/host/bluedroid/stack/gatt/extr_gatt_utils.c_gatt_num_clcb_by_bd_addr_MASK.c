
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT8 ;
struct TYPE_6__ {TYPE_2__* clcb; } ;
struct TYPE_5__ {TYPE_1__* p_tcb; scalar_t__ in_use; } ;
struct TYPE_4__ {int peer_bda; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

UINT8 FUNC_1(BD_ADDR VAR_3)
{
    UINT8 VAR_4, VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 ++) {
        if (VAR_2.clcb[VAR_4].in_use && FUNC_0(VAR_2.clcb[VAR_4].p_tcb->peer_bda, VAR_3, VAR_0) == 0) {
            VAR_5 ++;
        }
    }
    return VAR_5;
}
