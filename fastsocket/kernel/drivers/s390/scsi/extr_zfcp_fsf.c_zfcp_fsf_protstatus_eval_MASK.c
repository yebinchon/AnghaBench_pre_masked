
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union fsf_prot_status_qual {int link_down_info; int * word; } ;
struct zfcp_fsf_req {int status; struct fsf_qtcb* qtcb; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {TYPE_3__* ccw_device; int status; } ;
struct TYPE_8__ {int prot_status; union fsf_prot_status_qual prot_status_qual; } ;
struct TYPE_5__ {scalar_t__ req_handle; } ;
struct TYPE_6__ {TYPE_1__ support; } ;
struct fsf_qtcb {TYPE_4__ prefix; TYPE_2__ bottom; } ;
struct TYPE_7__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct zfcp_fsf_req*) ;
 int FUNC_3 (struct zfcp_adapter*,int,char*,struct zfcp_fsf_req*) ;
 int FUNC_4 (struct zfcp_adapter*,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_5 (struct zfcp_adapter*,char*,int *,int ,int ) ;
 int FUNC_6 (struct zfcp_fsf_req*,char*,int *) ;
 int FUNC_7 (struct zfcp_adapter*) ;

__attribute__((used)) static void FUNC_8(struct zfcp_fsf_req *VAR_8)
{
 struct zfcp_adapter *VAR_9 = VAR_8->adapter;
 struct fsf_qtcb *VAR_10 = VAR_8->qtcb;
 union fsf_prot_status_qual *VAR_11 = &VAR_10->prefix.prot_status_qual;

 FUNC_2(VAR_8);

 if (VAR_8->status & VAR_6) {
  VAR_8->status |= VAR_7;
  return;
 }

 switch (VAR_10->prefix.prot_status) {
 case 134:
 case 135:
  return;
 case 131:
  FUNC_1(&VAR_9->ccw_device->dev,
   "QTCB version 0x%x not supported by FCP adapter "
   "(0x%x to 0x%x)\n", VAR_0,
   VAR_11->word[0], VAR_11->word[1]);
  FUNC_4(VAR_9, 0, "fspse_1", VAR_8);
  break;
 case 136:
 case 129:
  FUNC_3(VAR_9, 0, "fspse_2", VAR_8);
  VAR_8->status |= VAR_7;
  break;
 case 128:
  FUNC_1(&VAR_9->ccw_device->dev,
   "The QTCB type is not supported by the FCP adapter\n");
  FUNC_4(VAR_9, 0, "fspse_3", VAR_8);
  break;
 case 133:
  FUNC_0(VAR_2,
    &VAR_9->status);
  break;
 case 137:
  FUNC_1(&VAR_9->ccw_device->dev,
   "0x%Lx is an ambiguous request identifier\n",
   (unsigned long long)VAR_10->bottom.support.req_handle);
  FUNC_4(VAR_9, 0, "fspse_4", VAR_8);
  break;
 case 132:
  FUNC_6(VAR_8, "fspse_5",
          &VAR_11->link_down_info);

  FUNC_3(VAR_9, 0, "fspse_6", VAR_8);
  break;
 case 130:

  FUNC_5(VAR_9, "fspse_7", ((void*)0),
            VAR_5,
            VAR_1);
  FUNC_3(VAR_9,
     VAR_3 |
     VAR_4,
     "fspse_8", VAR_8);
  break;
 default:
  FUNC_1(&VAR_9->ccw_device->dev,
   "0x%x is not a valid transfer protocol status\n",
   VAR_10->prefix.prot_status);
  FUNC_7(VAR_9);
  FUNC_4(VAR_9, 0, "fspse_9", VAR_8);
 }
 VAR_8->status |= VAR_7;
}
