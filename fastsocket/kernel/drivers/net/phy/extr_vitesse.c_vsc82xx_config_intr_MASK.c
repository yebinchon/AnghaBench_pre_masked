
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {scalar_t__ interrupts; TYPE_1__* drv; } ;
struct TYPE_2__ {scalar_t__ phy_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_6)
{
 int VAR_7;

 if (VAR_6->interrupts == VAR_5)
  VAR_7 = FUNC_1(VAR_6, VAR_1,
   VAR_6->drv->phy_id == VAR_4 ?
    VAR_2 :
    VAR_0);
 else {




  VAR_7 = FUNC_0(VAR_6, VAR_3);

  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_1(VAR_6, VAR_1, 0);
 }

 return VAR_7;
}
