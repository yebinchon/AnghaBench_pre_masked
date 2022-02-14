
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int id; } ;
struct TYPE_7__ {int capabilities; TYPE_4__* core; } ;
struct bcma_bus {TYPE_1__ chipinfo; TYPE_3__ drv_cc; } ;
struct TYPE_6__ {int rev; } ;
struct TYPE_8__ {TYPE_2__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static bool FUNC_1(struct bcma_bus *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 if (VAR_6->drv_cc.core->id.rev >= 31) {
  if (!(VAR_6->drv_cc.capabilities & VAR_0))
   return 0;

  VAR_8 = FUNC_0(VAR_6->drv_cc.core,
        VAR_4);
  return VAR_8 & VAR_5;
 }


 VAR_7 = FUNC_0(VAR_6->drv_cc.core, VAR_1);
 switch (VAR_6->chipinfo.id) {
 case 129:
  VAR_9 = VAR_2;
  break;

 case 128:
  VAR_9 = VAR_3;
  break;

 default:
  return 1;
 }

 return VAR_7 & VAR_9;
}
