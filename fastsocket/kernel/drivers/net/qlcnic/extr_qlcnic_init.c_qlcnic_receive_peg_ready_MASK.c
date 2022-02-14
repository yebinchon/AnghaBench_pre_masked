
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct qlcnic_adapter *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = VAR_3;

 do {
  VAR_6 = FUNC_0(VAR_5, VAR_4);

  if (VAR_6 == VAR_1)
   return 0;

  FUNC_2(VAR_2);

 } while (--VAR_7);

 if (!VAR_7) {
  FUNC_1(&VAR_5->pdev->dev, "Receive Peg initialization not "
         "complete, state: 0x%x.\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
