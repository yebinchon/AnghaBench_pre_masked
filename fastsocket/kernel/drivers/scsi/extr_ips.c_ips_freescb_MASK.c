
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; struct TYPE_8__* q_next; int data_len; int data_busaddr; int scsi_cmd; } ;
typedef TYPE_1__ ips_scb_t ;
struct TYPE_9__ {int max_cmds; TYPE_1__* scb_freelist; int pcidev; } ;
typedef TYPE_2__ ips_ha_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(ips_ha_t * VAR_2, ips_scb_t * VAR_3)
{

 FUNC_2("ips_freescb", 1);
 if (VAR_3->flags & VAR_0)
                FUNC_4(VAR_3->scsi_cmd);
 else if (VAR_3->flags & VAR_1)
  FUNC_3(VAR_2->pcidev, VAR_3->data_busaddr, VAR_3->data_len,
     FUNC_1(VAR_3));


 if (FUNC_0(VAR_2, VAR_3) < (VAR_2->max_cmds - 1)) {
  VAR_3->q_next = VAR_2->scb_freelist;
  VAR_2->scb_freelist = VAR_3;
 }
}
