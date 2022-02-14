
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcma_device {int dummy; } ;
struct TYPE_2__ {struct bcma_device* core; } ;
struct bcma_bus {TYPE_1__ drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct bcma_bus *VAR_5)
{
 struct bcma_device *VAR_6 = VAR_5->drv_cc.core;
 u32 VAR_7;


 if ((FUNC_0(VAR_6, VAR_2) & VAR_3) == 0)
  return 0;


 VAR_7 = (FUNC_0(VAR_6, VAR_0) & VAR_1);
 return VAR_4 + (VAR_7 >> 3);
}
