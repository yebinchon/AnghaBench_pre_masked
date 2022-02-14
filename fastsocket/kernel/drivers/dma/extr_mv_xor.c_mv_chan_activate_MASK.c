
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_xor_chan {TYPE_2__* device; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ common; } ;


 int FUNC_0 (struct mv_xor_chan*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct mv_xor_chan *VAR_0)
{
 u32 VAR_1;

 FUNC_3(VAR_0->device->common.dev, " activate chan.\n");
 VAR_1 = FUNC_1(FUNC_0(VAR_0));
 VAR_1 |= 0x1;
 FUNC_2(VAR_1, FUNC_0(VAR_0));
}
