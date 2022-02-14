
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {int portnum; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_3 (struct qlcnic_adapter*,scalar_t__,int ) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (int) ;

int
FUNC_6(struct qlcnic_adapter *VAR_2, int VAR_3, u32 VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;

 while (!VAR_5) {
  VAR_5 = FUNC_2(VAR_2, FUNC_1(FUNC_0(VAR_3)));
  if (VAR_5 == 1)
   break;
  if (++VAR_6 >= VAR_1) {
   FUNC_4(&VAR_2->pdev->dev,
    "Failed to acquire sem=%d lock; holdby=%d\n",
    VAR_3, VAR_4 ? FUNC_2(VAR_2, VAR_4) : -1);
   return -VAR_0;
  }
  FUNC_5(1);
 }

 if (VAR_4)
  FUNC_3(VAR_2, VAR_4, VAR_2->portnum);

 return 0;
}
