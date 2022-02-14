
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


 int VAR_0 ;
 int FUNC_0 (struct mv_xor_chan*) ;
 int FUNC_1 (struct mv_xor_chan*) ;
 int FUNC_2 (struct mv_xor_chan*) ;
 int FUNC_3 (struct mv_xor_chan*) ;
 int FUNC_4 (struct mv_xor_chan*) ;
 int FUNC_5 (struct mv_xor_chan*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_8(struct mv_xor_chan *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_6(FUNC_1(VAR_1));
 FUNC_7(VAR_0, VAR_1->device->common.dev,
     "config       0x%08x.\n", VAR_2);

 VAR_2 = FUNC_6(FUNC_0(VAR_1));
 FUNC_7(VAR_0, VAR_1->device->common.dev,
     "activation   0x%08x.\n", VAR_2);

 VAR_2 = FUNC_6(FUNC_4(VAR_1));
 FUNC_7(VAR_0, VAR_1->device->common.dev,
     "intr cause   0x%08x.\n", VAR_2);

 VAR_2 = FUNC_6(FUNC_5(VAR_1));
 FUNC_7(VAR_0, VAR_1->device->common.dev,
     "intr mask    0x%08x.\n", VAR_2);

 VAR_2 = FUNC_6(FUNC_3(VAR_1));
 FUNC_7(VAR_0, VAR_1->device->common.dev,
     "error cause  0x%08x.\n", VAR_2);

 VAR_2 = FUNC_6(FUNC_2(VAR_1));
 FUNC_7(VAR_0, VAR_1->device->common.dev,
     "error addr   0x%08x.\n", VAR_2);
}
