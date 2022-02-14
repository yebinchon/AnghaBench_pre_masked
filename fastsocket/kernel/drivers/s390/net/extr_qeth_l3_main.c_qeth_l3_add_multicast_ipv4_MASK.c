
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dev; } ;
struct in_device {int mc_list_lock; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 struct in_device* FUNC_1 (int ) ;
 int FUNC_2 (struct in_device*) ;
 int FUNC_3 (struct qeth_card*,struct in_device*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct qeth_card *VAR_1)
{
 struct in_device *VAR_2;

 FUNC_0(VAR_0, 4, "chkmcv4");
 VAR_2 = FUNC_1(VAR_1->dev);
 if (VAR_2 == ((void*)0))
  return;
 FUNC_5(&VAR_2->mc_list_lock);
 FUNC_3(VAR_1, VAR_2);
 FUNC_4(VAR_1);
 FUNC_6(&VAR_2->mc_list_lock);
 FUNC_2(VAR_2);
}
