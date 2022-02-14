
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct zfcp_unit {int status; TYPE_4__* port; } ;
struct zfcp_fsf_req {int status; TYPE_3__* qtcb; struct zfcp_unit* data; } ;
struct TYPE_10__ {int adapter; } ;
struct TYPE_7__ {int * word; } ;
struct TYPE_8__ {int fsf_status; TYPE_1__ fsf_status_qual; } ;
struct TYPE_9__ {TYPE_2__ header; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_2 (TYPE_4__*,char*,struct zfcp_fsf_req*) ;
 int FUNC_3 (TYPE_4__*,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct zfcp_fsf_req *VAR_2)
{
 struct zfcp_unit *VAR_3 = VAR_2->data;

 if (VAR_2->status & VAR_1)
  return;

 switch (VAR_2->qtcb->header.fsf_status) {
 case 130:
  FUNC_1(VAR_3->port->adapter, 0, "fscuh_1", VAR_2);
  VAR_2->status |= VAR_1;
  break;
 case 132:
  FUNC_3(VAR_3->port, 0, "fscuh_2", VAR_2);
  VAR_2->status |= VAR_1;
  break;
 case 131:
  FUNC_2(VAR_3->port, "fscuh_3", VAR_2);
  VAR_2->status |= VAR_1;
  break;
 case 134:
  switch (VAR_2->qtcb->header.fsf_status_qual.word[0]) {
  case 129:
   FUNC_4(VAR_3->port);

  case 128:
   VAR_2->status |= VAR_1;
   break;
  }
  break;
 case 133:
  FUNC_0(VAR_0, &VAR_3->status);
  break;
 }
}
