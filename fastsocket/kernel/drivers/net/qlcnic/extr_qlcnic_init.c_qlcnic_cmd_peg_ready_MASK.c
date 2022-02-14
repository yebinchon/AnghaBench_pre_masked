
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int const) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = VAR_2;

 do {
  VAR_5 = FUNC_0(VAR_4, VAR_3);

  switch (VAR_5) {
  case 129:
  case 130:
   return 0;
  case 128:
   goto out_err;
  default:
   break;
  }

  FUNC_3(VAR_1);

 } while (--VAR_6);

 FUNC_1(VAR_4, VAR_3,
       128);

out_err:
 FUNC_2(&VAR_4->pdev->dev, "Command Peg initialization not "
        "complete, state: 0x%x.\n", VAR_5);
 return -VAR_0;
}
