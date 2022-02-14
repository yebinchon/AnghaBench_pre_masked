
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_xor_chan {int idx; TYPE_2__* device; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ common; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,char*,int ,int) ;
 int FUNC_3 (struct mv_xor_chan*) ;

__attribute__((used)) static void FUNC_4(struct mv_xor_chan *VAR_1,
      u32 VAR_2)
{
 if (VAR_2 & (1 << 4)) {
      FUNC_1(VAR_1->device->common.dev,
       "ignore this error\n");
      return;
 }

 FUNC_2(VAR_0, VAR_1->device->common.dev,
     "error on chan %d. intr cause 0x%08x.\n",
     VAR_1->idx, VAR_2);

 FUNC_3(VAR_1);
 FUNC_0();
}
