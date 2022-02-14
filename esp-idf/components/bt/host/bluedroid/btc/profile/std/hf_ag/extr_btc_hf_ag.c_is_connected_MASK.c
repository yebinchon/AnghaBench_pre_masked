
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int address; } ;
typedef TYPE_3__ bt_bdaddr_t ;
struct TYPE_7__ {int address; } ;
struct TYPE_8__ {scalar_t__ connection_state; TYPE_1__ connected_bda; } ;
struct TYPE_10__ {TYPE_2__ btc_hf_cb; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_5__* VAR_4 ;

__attribute__((used)) static BOOLEAN FUNC_2(bt_bdaddr_t *VAR_5)
{
    int VAR_6 = FUNC_1(VAR_5);
    if (((VAR_4[VAR_6].btc_hf_cb.connection_state == VAR_0) ||
            (VAR_4[VAR_6].btc_hf_cb.connection_state == VAR_1)) &&
            ((VAR_5 == ((void*)0)) || (FUNC_0(VAR_5->address,VAR_4[VAR_6].btc_hf_cb.connected_bda.address) == 0))) {
        return VAR_3;
    }
    return VAR_2;
}
