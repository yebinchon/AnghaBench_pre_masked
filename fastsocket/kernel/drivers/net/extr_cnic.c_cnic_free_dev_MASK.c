
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_dev {int netdev; int ref_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cnic_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct cnic_dev *VAR_0)
{
 int VAR_1 = 0;

 while ((FUNC_0(&VAR_0->ref_count) != 0) && VAR_1 < 10) {
  FUNC_3(100);
  VAR_1++;
 }
 if (FUNC_0(&VAR_0->ref_count) != 0)
  FUNC_4(VAR_0->netdev, "Failed waiting for ref count to go to zero\n");

 FUNC_5(VAR_0->netdev, "Removed CNIC device\n");
 FUNC_1(VAR_0->netdev);
 FUNC_2(VAR_0);
}
