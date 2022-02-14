
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_send_els {int handler_data; int (* handler ) (int ) ;int ls_code; int status; struct zfcp_port* port; } ;
struct zfcp_port {int dummy; } ;
struct zfcp_fsf_req {int status; TYPE_1__* qtcb; struct zfcp_send_els* data; } ;
struct TYPE_4__ {int * word; } ;
struct fsf_qtcb_header {int fsf_status; TYPE_2__ fsf_status_qual; } ;
struct TYPE_3__ {struct fsf_qtcb_header header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int FUNC_2 (struct zfcp_port*) ;
 int FUNC_3 (struct zfcp_fsf_req*,struct zfcp_port*) ;
 int FUNC_4 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_5(struct zfcp_fsf_req *VAR_3)
{
 struct zfcp_send_els *VAR_4 = VAR_3->data;
 struct zfcp_port *VAR_5 = VAR_4->port;
 struct fsf_qtcb_header *VAR_6 = &VAR_3->qtcb->header;

 VAR_4->status = -VAR_0;

 if (VAR_3->status & VAR_2)
  goto skip_fsfstatus;

 switch (VAR_6->fsf_status) {
 case 136:
  FUNC_1(VAR_3);
  VAR_4->status = 0;
  break;
 case 131:
  FUNC_4(VAR_3);
  break;
 case 138:
  switch (VAR_6->fsf_status_qual.word[0]){
  case 130:
   if (VAR_5 && (VAR_4->ls_code != VAR_1))
    FUNC_2(VAR_5);

  case 128:
  case 129:
   VAR_3->status |= VAR_2;
   break;
  }
  break;
 case 137:
 case 135:
 case 134:
 case 133:
  break;
 case 139:
  if (VAR_5)
   FUNC_3(VAR_3, VAR_5);
  break;
 case 132:


 default:
  VAR_3->status |= VAR_2;
  break;
 }
skip_fsfstatus:
 if (VAR_4->handler)
  VAR_4->handler(VAR_4->handler_data);
}
