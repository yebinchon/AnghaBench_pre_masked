
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct __mem {int size; int addr; } ;
struct TYPE_4__ {struct __mem mem; } ;
struct qlcnic_dump_entry {TYPE_1__ region; } ;
struct qlcnic_adapter {TYPE_3__* ahw; TYPE_2__* pdev; } ;
typedef int __le32 ;
struct TYPE_6__ {int mem_lock; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct qlcnic_adapter*,int ) ;
 int FUNC_7 (struct qlcnic_adapter*,int ,int) ;
 int * VAR_7 ;

__attribute__((used)) static u32 FUNC_8(struct qlcnic_adapter *VAR_8,
         struct qlcnic_dump_entry *VAR_9, __le32 *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 int VAR_15, VAR_16;
 struct __mem *VAR_17 = &VAR_9->region.mem;

 VAR_16 = VAR_17->size;
 VAR_11 = VAR_17->addr;

 if ((VAR_11 & 0xf) || (VAR_16%16)) {
  FUNC_2(&VAR_8->pdev->dev,
    "Unaligned memory addr:0x%x size:0x%x\n",
    VAR_11, VAR_16);
  return -VAR_0;
 }

 FUNC_3(&VAR_8->ahw->mem_lock);

 while (VAR_16 != 0) {
  FUNC_7(VAR_8, VAR_3, VAR_11);
  FUNC_7(VAR_8, VAR_2, 0);
  FUNC_7(VAR_8, VAR_4, VAR_5);

  for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
   VAR_13 = FUNC_6(VAR_8, VAR_4);
   if (!(VAR_13 & VAR_6))
    break;
  }
  if (VAR_15 == VAR_1) {
   if (FUNC_5()) {
    FUNC_1(&VAR_8->pdev->dev,
     "failed to read through agent\n");
    VAR_14 = -VAR_0;
    goto out;
   }
  }
  for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
   VAR_12 = FUNC_6(VAR_8, VAR_7[VAR_15]);
   *VAR_10++ = FUNC_0(VAR_12);
  }
  VAR_11 += 16;
  VAR_16 -= 16;
  VAR_14 += 16;
 }
out:
 FUNC_4(&VAR_8->ahw->mem_lock);
 return VAR_17->size;
}
