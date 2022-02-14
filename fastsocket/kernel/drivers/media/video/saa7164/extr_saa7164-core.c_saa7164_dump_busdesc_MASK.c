
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmComResBusDescr {int dummy; } ;
struct TYPE_2__ {int ResponseRead; int ResponseWrite; int CommandRead; int CommandWrite; int ResponseRing; int CommandRing; } ;
struct saa7164_dev {TYPE_1__ busdesc; } ;


 int FUNC_0 (int,char*,TYPE_1__*,...) ;

__attribute__((used)) static void FUNC_1(struct saa7164_dev *VAR_0)
{
 FUNC_0(1, "@0x%p busdesc sizeof(struct tmComResBusDescr) = %d bytes\n",
  &VAR_0->busdesc, (u32)sizeof(struct tmComResBusDescr));

 FUNC_0(1, " .CommandRing   = 0x%016Lx\n", VAR_0->busdesc.CommandRing);
 FUNC_0(1, " .ResponseRing  = 0x%016Lx\n", VAR_0->busdesc.ResponseRing);
 FUNC_0(1, " .CommandWrite  = 0x%x\n", VAR_0->busdesc.CommandWrite);
 FUNC_0(1, " .CommandRead   = 0x%x\n", VAR_0->busdesc.CommandRead);
 FUNC_0(1, " .ResponseWrite = 0x%x\n", VAR_0->busdesc.ResponseWrite);
 FUNC_0(1, " .ResponseRead  = 0x%x\n", VAR_0->busdesc.ResponseRead);
}
