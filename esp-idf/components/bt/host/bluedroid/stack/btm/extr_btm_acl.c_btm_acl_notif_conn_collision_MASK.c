
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int handle; int transport; int * p_bda; } ;
struct TYPE_6__ {TYPE_1__ conn; int event; } ;
typedef TYPE_2__ tBTM_BL_EVENT_DATA ;
struct TYPE_7__ {int (* p_bl_changed_cb ) (TYPE_2__*) ;} ;
typedef int BOOLEAN ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;

BOOLEAN FUNC_2 (BD_ADDR VAR_6)
{
    tBTM_BL_EVENT_DATA VAR_7;


    if (VAR_5.p_bl_changed_cb) {
        FUNC_0 ("btm_acl_notif_conn_collision: RemBdAddr: %02x%02x%02x%02x%02x%02x\n",
                         VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5]);

        VAR_7.event = VAR_0;
        VAR_7.conn.p_bda = VAR_6;


        VAR_7.conn.transport = VAR_2;
        VAR_7.conn.handle = VAR_1;

        (*VAR_5.p_bl_changed_cb)(&VAR_7);
        return VAR_4;
    } else {
        return VAR_3;
    }
}
