
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int add_wl_cb; int addr_type; int remote_addr; int add_remove; } ;
struct TYPE_5__ {TYPE_1__ white_list; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(tBTA_DM_MSG *VAR_0)
{

    FUNC_0(VAR_0->white_list.add_remove, VAR_0->white_list.remote_addr, VAR_0->white_list.addr_type, VAR_0->white_list.add_wl_cb);

}
