
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ address; } ;
typedef TYPE_3__ bt_bdaddr_t ;
struct TYPE_6__ {int address; } ;
struct TYPE_7__ {TYPE_1__ connected_bda; } ;
struct TYPE_9__ {TYPE_2__ btc_hf_cb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;

__attribute__((used)) static int FUNC_1(bt_bdaddr_t *VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
        if ((FUNC_0(VAR_3->address, VAR_2[VAR_4].btc_hf_cb.connected_bda.address) == 0)
            || VAR_3->address) {
            return VAR_4;
        }
    }
    return VAR_0;
}
