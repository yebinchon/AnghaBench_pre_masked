
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {int ipath_ibcctrl; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_ibcctrl; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipath_devdata*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ipath_devdata *VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_1->ipath_ibcctrl |= VAR_0;
 else
  VAR_1->ipath_ibcctrl &= ~VAR_0;
 FUNC_0(VAR_1, VAR_1->ipath_kregs->kr_ibcctrl,
    VAR_1->ipath_ibcctrl);
 return 0;
}
