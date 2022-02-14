
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_3)
{
 long VAR_4 = 0;
 long VAR_5 = 0;

 FUNC_1();
 while (VAR_5 == 0) {
  VAR_5 = FUNC_0(VAR_3, VAR_2);
  VAR_5 &= 2;
  if (++VAR_4 >= VAR_1) {
   FUNC_2(&VAR_3->pdev->dev,
    "Timeout reached  waiting for rom done");
   return -VAR_0;
  }
  FUNC_3(1);
 }
 return 0;
}
