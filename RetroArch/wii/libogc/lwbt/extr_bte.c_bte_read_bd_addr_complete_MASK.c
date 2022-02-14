
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8_t ;
struct TYPE_2__ {int * addr; } ;
struct hci_pcb {TYPE_1__ bdaddr; } ;
struct bt_state {scalar_t__ usrdata; } ;
struct bd_addr {int * addr; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (struct bt_state*,int ) ;
 int VAR_6 ;

err_t FUNC_2(void *VAR_7,struct hci_pcb *VAR_8,u8_t VAR_9,u8_t VAR_10,u8_t VAR_11)
{
    struct bd_addr *VAR_12;
    struct bt_state *VAR_13 = (struct bt_state*)VAR_7;

    if(!VAR_8) return VAR_0;

    FUNC_0("bte_read_bd_addr_complete(%02x,%p)\n", VAR_11, &VAR_8->bdaddr);

    if(VAR_13==((void*)0)) return VAR_2;

    if(!(VAR_9==VAR_3 && VAR_10==VAR_4)) return FUNC_1(VAR_13,VAR_0);

    if(VAR_11 == VAR_5) {
        VAR_12 = (struct bd_addr *)VAR_13->usrdata;
        if (VAR_12 != ((void*)0)) {
            VAR_12->addr[0] = VAR_8->bdaddr.addr[5];
            VAR_12->addr[1] = VAR_8->bdaddr.addr[4];
            VAR_12->addr[2] = VAR_8->bdaddr.addr[3];
            VAR_12->addr[3] = VAR_8->bdaddr.addr[2];
            VAR_12->addr[4] = VAR_8->bdaddr.addr[1];
            VAR_12->addr[5] = VAR_8->bdaddr.addr[0];
        }
        FUNC_0("bte_read_bd_addr_complete(%02x,%p,%d)\n",VAR_11,VAR_12,VAR_6);
        FUNC_1(VAR_13,VAR_1);
        return VAR_1;
    }

    return FUNC_1(VAR_13,VAR_2);
}
