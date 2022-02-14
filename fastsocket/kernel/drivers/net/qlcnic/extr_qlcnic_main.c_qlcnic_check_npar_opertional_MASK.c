
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_2__* pdev; TYPE_1__* ahw; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_5)
{
 u8 VAR_6 = VAR_3;
 u32 VAR_7;

 if (VAR_5->ahw->op_mode == VAR_4)
  return 0;

 VAR_7 = FUNC_0(VAR_5,
      VAR_1);
 while (VAR_7 != VAR_2 && --VAR_6) {
  FUNC_2(1000);
  VAR_7 = FUNC_0(VAR_5,
       VAR_1);
 }
 if (!VAR_6) {
  FUNC_1(&VAR_5->pdev->dev,
   "Waiting for NPAR state to opertional timeout\n");
  return -VAR_0;
 }
 return 0;
}
