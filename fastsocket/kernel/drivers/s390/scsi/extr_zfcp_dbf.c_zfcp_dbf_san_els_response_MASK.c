
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct zfcp_send_els {TYPE_2__* resp; TYPE_2__* req; TYPE_1__* adapter; int d_id; } ;
struct zfcp_fsf_req {scalar_t__ data; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int scsi_host; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int,struct zfcp_fsf_req*,int ,int ,int ,scalar_t__,int ) ;

void FUNC_3(struct zfcp_fsf_req *VAR_0)
{
 struct zfcp_send_els *VAR_1 = (struct zfcp_send_els *)VAR_0->data;

 FUNC_2("rels", 2, VAR_0, VAR_1->d_id,
          FUNC_0(VAR_1->adapter->scsi_host),
          *(u8 *)FUNC_1(VAR_1->req), FUNC_1(VAR_1->resp),
          VAR_1->resp->length);
}
