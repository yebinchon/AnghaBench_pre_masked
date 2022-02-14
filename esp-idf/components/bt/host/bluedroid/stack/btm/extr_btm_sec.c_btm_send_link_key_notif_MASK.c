
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int link_key_type; int link_key; int sec_bd_name; int dev_class; int bd_addr; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
struct TYPE_5__ {int (* p_link_key_callback ) (int ,int ,int ,int ,int ) ;} ;
struct TYPE_7__ {TYPE_1__ api; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1 (tBTM_SEC_DEV_REC *VAR_1)
{
    if (VAR_0.api.p_link_key_callback) {
        (*VAR_0.api.p_link_key_callback) (VAR_1->bd_addr, VAR_1->dev_class,
                                           VAR_1->sec_bd_name, VAR_1->link_key,
                                           VAR_1->link_key_type);
    }
}
