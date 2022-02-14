
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int bt_status_t ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {TYPE_1__ btc_hf_client_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,char const*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static bt_status_t FUNC_3(const char *VAR_4)
{
    FUNC_1();

    if (FUNC_2(VAR_4) != 0)
    {
        FUNC_0(VAR_3.btc_hf_client_cb.handle, VAR_0, 0, 0, VAR_4);
    }
    else
    {
        FUNC_0(VAR_3.btc_hf_client_cb.handle, VAR_1, 0, 0, ((void*)0));
    }

    return VAR_2;
}
