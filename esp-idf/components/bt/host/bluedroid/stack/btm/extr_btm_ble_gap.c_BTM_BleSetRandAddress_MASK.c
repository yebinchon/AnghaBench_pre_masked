
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_5__ {int exist_addr_bit; int static_rand_addr; int private_addr; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_7__ {TYPE_1__ addr_mgnt_cb; TYPE_2__ inq_var; } ;
struct TYPE_8__ {TYPE_3__ ble_ctr_cb; } ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;
 TYPE_4__ VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;

tBTM_STATUS FUNC_3(BD_ADDR VAR_8)
{
 if (VAR_8 == ((void*)0)) {
  return VAR_5;
    }

    if (!(VAR_7.ble_ctr_cb.inq_var.state == VAR_4 || VAR_7.ble_ctr_cb.inq_var.state == VAR_3 || VAR_7.ble_ctr_cb.inq_var.state == VAR_2)) {
        FUNC_0("Advertising or scaning now, can't set randaddress %d", VAR_7.ble_ctr_cb.inq_var.state);
        return VAR_5;
    }
    FUNC_2(VAR_7.ble_ctr_cb.addr_mgnt_cb.private_addr, VAR_8, VAR_0);
    FUNC_2(VAR_7.ble_ctr_cb.addr_mgnt_cb.static_rand_addr, VAR_8, VAR_0);

    if(FUNC_1(VAR_8)) {
        VAR_7.ble_ctr_cb.addr_mgnt_cb.exist_addr_bit |= VAR_1;
        return VAR_6;
    } else {
        return VAR_5;
    }
}
