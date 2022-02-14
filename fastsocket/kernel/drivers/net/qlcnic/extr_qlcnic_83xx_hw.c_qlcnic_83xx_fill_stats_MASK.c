
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int num; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (struct qlcnic_cmd_args*,int *,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static u64 *FUNC_4(struct qlcnic_adapter *VAR_2,
       struct qlcnic_cmd_args *VAR_3, u64 *VAR_4,
       int VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 *VAR_6 = 0;
 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (VAR_7 != VAR_1) {
  FUNC_0(&VAR_2->pdev->dev,
    "Error in get statistics mailbox command\n");
  *VAR_6 = -VAR_0;
  return VAR_4;
 }
 VAR_9 = VAR_3->rsp.num;
 switch (VAR_5) {
 case 130:

  for (VAR_8 = 2; VAR_8 < 28; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);


  for (VAR_8 += 6; VAR_8 < 60; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);


  for (VAR_8 += 6; VAR_8 < 80; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);

  for (; VAR_8 < VAR_9; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);
  break;
 case 129:
  for (VAR_8 = 2; VAR_8 < 8; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);

  for (VAR_8 += 2; VAR_8 < 24; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);

  for (VAR_8 += 2; VAR_8 < VAR_9; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);
  break;
 case 128:
  for (VAR_8 = 2; VAR_8 < 10; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);

  for (VAR_8 += 2; VAR_8 < VAR_9; VAR_8 += 2)
   VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_8);
  break;
 default:
  FUNC_1(&VAR_2->pdev->dev, "Unknown get statistics mode\n");
  *VAR_6 = -VAR_0;
 }
 return VAR_4;
}
