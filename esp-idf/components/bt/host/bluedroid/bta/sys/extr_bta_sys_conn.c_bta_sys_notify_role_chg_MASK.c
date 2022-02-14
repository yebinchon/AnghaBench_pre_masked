
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {int (* p_role_cb ) (int ,int ,int ,int ) ;} ;
typedef int BD_ADDR_PTR ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(BD_ADDR_PTR VAR_2, UINT8 VAR_3, UINT8 VAR_4)
{
    if (VAR_1.p_role_cb) {
        VAR_1.p_role_cb(VAR_0, VAR_3, VAR_4, VAR_2);
    }
}
