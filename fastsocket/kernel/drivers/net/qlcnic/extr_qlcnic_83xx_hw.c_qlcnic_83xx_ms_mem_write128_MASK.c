
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int mem_lock; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct qlcnic_adapter*,int ) ;
 int FUNC_6 (struct qlcnic_adapter*,int ,int) ;

int FUNC_7(struct qlcnic_adapter *VAR_16, u64 VAR_17,
    u32 *VAR_18, u32 VAR_19)
{
 int VAR_20, VAR_21, VAR_22 = 0;
 u32 VAR_23;


 if (VAR_17 & 0xF)
  return -VAR_0;

 FUNC_2(&VAR_16->ahw->mem_lock);
 FUNC_6(VAR_16, VAR_6, 0);

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++, VAR_17 += 16) {
  if (!((FUNC_0(VAR_17, VAR_4,
         VAR_5)) ||
        (FUNC_0(VAR_17, VAR_2,
         VAR_3)))) {
   FUNC_3(&VAR_16->ahw->mem_lock);
   return -VAR_0;
  }

  FUNC_6(VAR_16, VAR_7, VAR_17);
  FUNC_6(VAR_16, VAR_10,
          *VAR_18++);
  FUNC_6(VAR_16, VAR_9,
          *VAR_18++);
  FUNC_6(VAR_16, VAR_12,
          *VAR_18++);
  FUNC_6(VAR_16, VAR_11,
          *VAR_18++);
  FUNC_6(VAR_16, VAR_8,
          VAR_13);
  FUNC_6(VAR_16, VAR_8,
          VAR_14);

  for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++) {
   VAR_23 = FUNC_5(VAR_16,
          VAR_8);
   if ((VAR_23 & VAR_15) == 0)
    break;
  }


  if (VAR_21 >= VAR_1) {
   if (FUNC_4()) {
    FUNC_1(&VAR_16->pdev->dev,
     "MS memory write failed.\n");
    FUNC_3(&VAR_16->ahw->mem_lock);
    return -VAR_0;
   }
  }
 }

 FUNC_3(&VAR_16->ahw->mem_lock);

 return VAR_22;
}
