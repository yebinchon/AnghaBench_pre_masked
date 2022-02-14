
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct mi_pc_maint {int dummy; } ;
struct TYPE_11__ {int data_length; int status; TYPE_3__* data; } ;
struct TYPE_14__ {int (* DIRequest ) (TYPE_5__*,int *) ;int Initialized; } ;
struct TYPE_12__ {TYPE_1__ xdi_mbox; TYPE_5__ xdi_adapter; } ;
typedef TYPE_2__ diva_os_xdi_adapter_t ;
struct TYPE_13__ {int command; int rc; int req; } ;
typedef TYPE_3__ diva_get_xlog_t ;
typedef TYPE_3__ byte ;
typedef int ENTITY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_5__*,int *) ;

int FUNC_5(diva_os_xdi_adapter_t * VAR_2)
{
 diva_get_xlog_t *VAR_3;
 byte *VAR_4;

 if (!VAR_2->xdi_adapter.Initialized || !VAR_2->xdi_adapter.DIRequest) {
  return (-1);
 }
 if (!(VAR_4 = FUNC_1(0, sizeof(struct mi_pc_maint)))) {
  return (-1);
 }
 FUNC_3(VAR_4, 0x00, sizeof(struct mi_pc_maint));

 if (!(VAR_3 = FUNC_1(0, sizeof(*VAR_3)))) {
  FUNC_0(0, VAR_4);
  return (-1);
 }
 VAR_3->command = 0x0400;
 VAR_3->req = VAR_1;
 VAR_3->rc = 0x00;

 (*(VAR_2->xdi_adapter.DIRequest)) (&VAR_2->xdi_adapter, (ENTITY *) VAR_3);

 if (!VAR_3->rc || VAR_3->req) {
  FUNC_0(0, VAR_4);
  FUNC_0(0, VAR_3);
  return (-1);
 }

 FUNC_2(VAR_4, &VAR_3->req, sizeof(struct mi_pc_maint));

 FUNC_0(0, VAR_3);

 VAR_2->xdi_mbox.data_length = sizeof(struct mi_pc_maint);
 VAR_2->xdi_mbox.data = VAR_4;
 VAR_2->xdi_mbox.status = VAR_0;

 return (0);
}
