
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct TYPE_3__ {int wWPAIELen; int abyWPAIE; } ;
struct TYPE_4__ {TYPE_1__ sMgmtObj; } ;
typedef TYPE_1__* PSMgmtObject ;
typedef TYPE_2__* PSDevice ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_2,
     struct iw_request_info *VAR_3,
     struct iw_point *VAR_4,
     char *VAR_5)
{
 PSDevice VAR_6 = (PSDevice)FUNC_1(VAR_2);
 PSMgmtObject VAR_7 = &(VAR_6->sMgmtObj);
 int VAR_8=0;
 int VAR_9 = VAR_4->length;

 VAR_4->length = 0;
 if(VAR_7->wWPAIELen > 0){
  VAR_4->length = VAR_7->wWPAIELen;
  if(VAR_7->wWPAIELen <= VAR_9){
   if(FUNC_0(VAR_5, VAR_7->abyWPAIE, VAR_7->wWPAIELen)){
    VAR_8 = -VAR_1;
   }
  }else
   VAR_8 = -VAR_0;
 }

 return VAR_8;
}
