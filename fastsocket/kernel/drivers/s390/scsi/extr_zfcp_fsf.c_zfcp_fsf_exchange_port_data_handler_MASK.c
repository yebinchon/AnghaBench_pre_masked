
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {int status; struct fsf_qtcb* qtcb; } ;
struct TYPE_3__ {int link_down_info; } ;
struct TYPE_4__ {int fsf_status; TYPE_1__ fsf_status_qual; } ;
struct fsf_qtcb {TYPE_2__ header; } ;




 int VAR_0 ;
 int FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*,char*,int *) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fsf_req *VAR_1)
{
 struct fsf_qtcb *VAR_2 = VAR_1->qtcb;

 if (VAR_1->status & VAR_0)
  return;

 switch (VAR_2->header.fsf_status) {
 case 128:
  FUNC_0(VAR_1);
  break;
 case 129:
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, "fsepdh1",
   &VAR_2->header.fsf_status_qual.link_down_info);
  break;
 }
}
