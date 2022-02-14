
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {scalar_t__ ipath_intconfig; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_interruptconfig; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipath_devdata*,char*) ;
 int FUNC_1 (struct ipath_devdata*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ipath_devdata *VAR_1)
{
 int VAR_2;

 if (VAR_1->ipath_intconfig) {
  FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_interruptconfig,
     VAR_1->ipath_intconfig);
  VAR_2 = 0;
 } else {
  FUNC_0(VAR_1, "No interrupts enabled, couldn't setup "
         "interrupt address\n");
  VAR_2 = -VAR_0;
 }

 return VAR_2;
}
