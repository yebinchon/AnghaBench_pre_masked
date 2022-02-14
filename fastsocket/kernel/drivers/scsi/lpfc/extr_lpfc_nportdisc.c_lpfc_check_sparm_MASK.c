
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int * wwn; } ;
struct TYPE_12__ {TYPE_5__ u; } ;
struct TYPE_10__ {int bbRcvSizeMsb; int bbRcvSizeLsb; } ;
struct TYPE_9__ {int rcvDataSizeMsb; int rcvDataSizeLsb; scalar_t__ classValid; } ;
struct TYPE_8__ {int rcvDataSizeMsb; int rcvDataSizeLsb; scalar_t__ classValid; } ;
struct TYPE_7__ {int rcvDataSizeMsb; int rcvDataSizeLsb; scalar_t__ classValid; } ;
struct serv_parm {TYPE_6__ nodeName; TYPE_6__ portName; TYPE_4__ cmn; TYPE_3__ cls3; TYPE_2__ cls2; TYPE_1__ cls1; } ;
struct lpfc_vport {struct serv_parm fc_sparam; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_portname; int nlp_nodename; } ;
struct lpfc_name {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *,TYPE_6__*,int) ;

int
FUNC_2(struct lpfc_vport *VAR_5, struct lpfc_nodelist *VAR_6,
   struct serv_parm *VAR_7, uint32_t VAR_8, int VAR_9)
{
 volatile struct serv_parm *VAR_10 = &VAR_5->fc_sparam;
 uint16_t VAR_11, VAR_12 = 0;
 if (VAR_7->cls1.classValid) {
  if (!VAR_9) {
   VAR_11 = ((VAR_10->cls1.rcvDataSizeMsb << 8) |
         VAR_10->cls1.rcvDataSizeLsb);
   VAR_12 = ((VAR_7->cls1.rcvDataSizeMsb << 8) |
         VAR_7->cls1.rcvDataSizeLsb);
   if (!VAR_12)
    goto bad_service_param;
   if (VAR_12 > VAR_11) {
    VAR_7->cls1.rcvDataSizeLsb =
     VAR_10->cls1.rcvDataSizeLsb;
    VAR_7->cls1.rcvDataSizeMsb =
     VAR_10->cls1.rcvDataSizeMsb;
   }
  }
 } else if (VAR_8 == VAR_0)
  goto bad_service_param;
 if (VAR_7->cls2.classValid) {
  if (!VAR_9) {
   VAR_11 = ((VAR_10->cls2.rcvDataSizeMsb << 8) |
         VAR_10->cls2.rcvDataSizeLsb);
   VAR_12 = ((VAR_7->cls2.rcvDataSizeMsb << 8) |
         VAR_7->cls2.rcvDataSizeLsb);
   if (!VAR_12)
    goto bad_service_param;
   if (VAR_12 > VAR_11) {
    VAR_7->cls2.rcvDataSizeLsb =
     VAR_10->cls2.rcvDataSizeLsb;
    VAR_7->cls2.rcvDataSizeMsb =
     VAR_10->cls2.rcvDataSizeMsb;
   }
  }
 } else if (VAR_8 == VAR_1)
  goto bad_service_param;
 if (VAR_7->cls3.classValid) {
  if (!VAR_9) {
   VAR_11 = ((VAR_10->cls3.rcvDataSizeMsb << 8) |
         VAR_10->cls3.rcvDataSizeLsb);
   VAR_12 = ((VAR_7->cls3.rcvDataSizeMsb << 8) |
         VAR_7->cls3.rcvDataSizeLsb);
   if (!VAR_12)
    goto bad_service_param;
   if (VAR_12 > VAR_11) {
    VAR_7->cls3.rcvDataSizeLsb =
     VAR_10->cls3.rcvDataSizeLsb;
    VAR_7->cls3.rcvDataSizeMsb =
     VAR_10->cls3.rcvDataSizeMsb;
   }
  }
 } else if (VAR_8 == VAR_2)
  goto bad_service_param;






 VAR_11 = (VAR_10->cmn.bbRcvSizeMsb << 8) | VAR_10->cmn.bbRcvSizeLsb;
 VAR_12 = (VAR_7->cmn.bbRcvSizeMsb << 8) | VAR_7->cmn.bbRcvSizeLsb;
 if (VAR_12 > VAR_11) {
  VAR_7->cmn.bbRcvSizeLsb = VAR_10->cmn.bbRcvSizeLsb;
  VAR_7->cmn.bbRcvSizeMsb = (VAR_7->cmn.bbRcvSizeMsb & 0xF0) |
           (VAR_10->cmn.bbRcvSizeMsb & 0x0F);
 }

 FUNC_1(&VAR_6->nlp_nodename, &VAR_7->nodeName, sizeof (struct lpfc_name));
 FUNC_1(&VAR_6->nlp_portname, &VAR_7->portName, sizeof (struct lpfc_name));
 return 1;
bad_service_param:
 FUNC_0(VAR_5, VAR_3, VAR_4,
    "0207 Device %x "
    "(%02x:%02x:%02x:%02x:%02x:%02x:%02x:%02x) sent "
    "invalid service parameters.  Ignoring device.\n",
    VAR_6->nlp_DID,
    VAR_7->nodeName.u.wwn[0], VAR_7->nodeName.u.wwn[1],
    VAR_7->nodeName.u.wwn[2], VAR_7->nodeName.u.wwn[3],
    VAR_7->nodeName.u.wwn[4], VAR_7->nodeName.u.wwn[5],
    VAR_7->nodeName.u.wwn[6], VAR_7->nodeName.u.wwn[7]);
 return 0;
}
