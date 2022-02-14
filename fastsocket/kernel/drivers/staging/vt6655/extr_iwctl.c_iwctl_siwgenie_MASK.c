
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct TYPE_3__ {char wWPAIELen; int abyWPAIE; } ;
struct TYPE_4__ {TYPE_1__ sMgmtObj; } ;
typedef TYPE_1__* PSMgmtObject ;
typedef TYPE_2__* PSDevice ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int ,int ,char) ;
 int FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_4,
     struct iw_request_info *VAR_5,
     struct iw_point *VAR_6,
     char *VAR_7)
{
 PSDevice VAR_8 = (PSDevice)FUNC_2(VAR_4);
 PSMgmtObject VAR_9 = &(VAR_8->sMgmtObj);
 int VAR_10=0;

 if(VAR_6->length){
  if ((VAR_6->length < 2) || (VAR_7[1]+2 != VAR_6->length)) {
   VAR_10 = -VAR_1;
   goto out;
  }
  if(VAR_6->length > VAR_3){
   VAR_10 = -VAR_2;
   goto out;
  }
  FUNC_1(VAR_9->abyWPAIE, 0, VAR_3);
  if(FUNC_0(VAR_9->abyWPAIE, VAR_7, VAR_6->length)){
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_9->wWPAIELen = VAR_6->length;
 }else {
  FUNC_1(VAR_9->abyWPAIE, 0, VAR_3);
  VAR_9->wWPAIELen = 0;
 }

 out:
 return 0;
}
