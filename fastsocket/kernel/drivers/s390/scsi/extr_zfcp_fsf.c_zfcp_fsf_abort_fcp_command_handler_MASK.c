
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union fsf_status_qual {int * word; } ;
struct zfcp_unit {TYPE_3__* port; } ;
struct zfcp_fsf_req {int status; TYPE_2__* qtcb; struct zfcp_unit* data; } ;
struct TYPE_8__ {int adapter; } ;
struct TYPE_6__ {int fsf_status; union fsf_status_qual fsf_status_qual; } ;
struct TYPE_7__ {TYPE_1__ header; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_1 (TYPE_3__*,char*,struct zfcp_fsf_req*) ;
 int FUNC_2 (TYPE_3__*,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_3 (struct zfcp_unit*,char*,struct zfcp_fsf_req*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct zfcp_fsf_req *VAR_3)
{
 struct zfcp_unit *VAR_4 = VAR_3->data;
 union fsf_status_qual *VAR_5 = &VAR_3->qtcb->header.fsf_status_qual;

 if (VAR_3->status & VAR_2)
  return;

 switch (VAR_3->qtcb->header.fsf_status) {
 case 130:
  if (VAR_5->word[0] == VAR_5->word[1]) {
   FUNC_0(VAR_4->port->adapter, 0,
      "fsafch1", VAR_3);
   VAR_3->status |= VAR_2;
  }
  break;
 case 132:
  if (VAR_5->word[0] == VAR_5->word[1]) {
   FUNC_2(VAR_4->port, 0, "fsafch2", VAR_3);
   VAR_3->status |= VAR_2;
  }
  break;
 case 135:
  VAR_3->status |= VAR_0;
  break;
 case 131:
  FUNC_1(VAR_4->port, "fsafch3", VAR_3);
  VAR_3->status |= VAR_2;
  break;
 case 133:
  FUNC_3(VAR_4, "fsafch4", VAR_3);
  VAR_3->status |= VAR_2;
                break;
 case 136:
  switch (VAR_5->word[0]) {
  case 129:
   FUNC_4(VAR_4->port);

  case 128:
   VAR_3->status |= VAR_2;
   break;
  }
  break;
 case 134:
  VAR_3->status |= VAR_1;
  break;
 }
}
