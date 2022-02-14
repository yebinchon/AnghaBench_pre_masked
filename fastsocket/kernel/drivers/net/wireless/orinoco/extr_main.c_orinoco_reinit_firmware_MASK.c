
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {scalar_t__ do_fw_download; struct hermes hw; } ;
struct TYPE_2__ {int (* init ) (struct hermes*) ;} ;


 int FUNC_0 (struct orinoco_private*) ;
 int FUNC_1 (struct orinoco_private*) ;
 int FUNC_2 (struct hermes*) ;

__attribute__((used)) static int FUNC_3(struct orinoco_private *VAR_0)
{
 struct hermes *VAR_1 = &VAR_0->hw;
 int VAR_2;

 VAR_2 = VAR_1->ops->init(VAR_1);
 if (VAR_0->do_fw_download && !VAR_2) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2)
   VAR_0->do_fw_download = 0;
 }
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0);

 return VAR_2;
}
