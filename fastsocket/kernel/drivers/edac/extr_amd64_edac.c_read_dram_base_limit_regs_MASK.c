
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct cpuinfo_x86 {int x86; } ;
struct amd64_pvt {TYPE_3__* ranges; struct pci_dev* F1; } ;
struct TYPE_5__ {int lo; int hi; } ;
struct TYPE_4__ {int lo; int hi; } ;
struct TYPE_6__ {TYPE_2__ lim; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 struct cpuinfo_x86 VAR_5 ;
 scalar_t__ FUNC_4 (struct amd64_pvt*,unsigned int) ;
 int FUNC_5 (struct amd64_pvt*,unsigned int) ;
 int FUNC_6 (struct pci_dev*) ;
 struct pci_dev* FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct amd64_pvt *VAR_6, unsigned VAR_7)
{
 struct cpuinfo_x86 *VAR_8 = &VAR_5;
 int VAR_9 = VAR_7 << 3;

 FUNC_3(VAR_6->F1, VAR_1 + VAR_9, &VAR_6->ranges[VAR_7].base.lo);
 FUNC_3(VAR_6->F1, VAR_3 + VAR_9, &VAR_6->ranges[VAR_7].lim.lo);

 if (VAR_8->x86 == 0xf)
  return;

 if (!FUNC_5(VAR_6, VAR_7))
  return;

 FUNC_3(VAR_6->F1, VAR_0 + VAR_9, &VAR_6->ranges[VAR_7].base.hi);
 FUNC_3(VAR_6->F1, VAR_2 + VAR_9, &VAR_6->ranges[VAR_7].lim.hi);


 if (VAR_8->x86 == 0x15) {
  struct pci_dev *VAR_10 = ((void*)0);
  u8 VAR_11 = FUNC_4(VAR_6, VAR_7);
  u32 VAR_12;

  VAR_10 = FUNC_7(0, 0, FUNC_1(0x18 + VAR_11, 1));
  if (FUNC_2(!VAR_10))
   return;

  FUNC_3(VAR_10, VAR_4, &VAR_12);

  VAR_6->ranges[VAR_7].lim.lo &= FUNC_0(0, 15);


  VAR_6->ranges[VAR_7].lim.lo |= ((VAR_12 & 0x1fff) << 3 | 0x7) << 16;

  VAR_6->ranges[VAR_7].lim.hi &= FUNC_0(0, 7);


  VAR_6->ranges[VAR_7].lim.hi |= VAR_12 >> 13;

  FUNC_6(VAR_10);
 }
}
