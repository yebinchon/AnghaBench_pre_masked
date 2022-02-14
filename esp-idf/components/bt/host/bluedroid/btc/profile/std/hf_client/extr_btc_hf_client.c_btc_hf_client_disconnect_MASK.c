
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int bt_status_t ;
typedef int bt_bdaddr_t ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {TYPE_1__ btc_hf_client_cb; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;

bt_status_t FUNC_3( bt_bdaddr_t *VAR_3 )
{
    FUNC_1();

    if (FUNC_2(VAR_3))
    {
        FUNC_0(VAR_2.btc_hf_client_cb.handle);
        return VAR_1;
    }

    return VAR_0;
}
