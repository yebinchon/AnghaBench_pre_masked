
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int address; } ;
typedef TYPE_3__ bt_bdaddr_t ;
struct TYPE_6__ {int address; } ;
struct TYPE_7__ {scalar_t__ state; TYPE_1__ connected_bda; } ;
struct TYPE_9__ {TYPE_2__ btc_hf_client_cb; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_5__ VAR_4 ;

__attribute__((used)) static BOOLEAN FUNC_1(bt_bdaddr_t *VAR_5)
{
    if (((VAR_4.btc_hf_client_cb.state == VAR_0) ||
            (VAR_4.btc_hf_client_cb.state == VAR_1))&&
        ((VAR_5 == ((void*)0)) || (FUNC_0(VAR_5->address, VAR_4.btc_hf_client_cb.connected_bda.address) == 0)))
        return VAR_3;
    return VAR_2;
}
