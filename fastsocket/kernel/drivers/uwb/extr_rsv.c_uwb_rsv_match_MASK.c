
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; TYPE_1__* dev; } ;
struct uwb_rsv {int stream; TYPE_2__ target; TYPE_3__* owner; } ;
struct uwb_ie_drp {int dummy; } ;
struct uwb_dev_addr {int dummy; } ;
struct uwb_dev {int dev_addr; } ;
struct TYPE_6__ {struct uwb_dev_addr dev_addr; } ;
struct TYPE_4__ {struct uwb_dev_addr dev_addr; } ;




 int FUNC_0 (int *,struct uwb_dev_addr*) ;
 int FUNC_1 (struct uwb_ie_drp*) ;
 int FUNC_2 (struct uwb_ie_drp*) ;

__attribute__((used)) static bool FUNC_3(struct uwb_rsv *VAR_0, struct uwb_dev *VAR_1,
     struct uwb_ie_drp *VAR_2)
{
 struct uwb_dev_addr *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);

 if (VAR_0->stream != VAR_4)
  return 0;

 switch (VAR_0->target.type) {
 case 128:
  return VAR_0->stream == VAR_4;
 case 129:
  if (FUNC_1(VAR_2))
   VAR_3 = &VAR_0->owner->dev_addr;
  else
   VAR_3 = &VAR_0->target.dev->dev_addr;
  return FUNC_0(&VAR_1->dev_addr, VAR_3) == 0;
 }
 return 0;
}
