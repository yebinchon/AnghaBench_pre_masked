
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mbfc; unsigned long mba; unsigned long mbi; int mme; } ;
struct subchannel {TYPE_2__ config; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct subchannel*) ;
 struct subchannel* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ccw_device *VAR_0, u32 VAR_1, int VAR_2,
       unsigned long VAR_3)
{
 struct subchannel *VAR_4;

 VAR_4 = FUNC_1(VAR_0->dev.parent);

 VAR_4->config.mme = VAR_1;
 VAR_4->config.mbfc = VAR_2;

 if (VAR_2)
  VAR_4->config.mba = VAR_3;
 else
  VAR_4->config.mbi = VAR_3;

 return FUNC_0(VAR_4);
}
