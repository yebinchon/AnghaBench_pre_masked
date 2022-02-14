
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_channel {scalar_t__ state; int ccwdev; } ;
struct qeth_card {int wait_q; } ;


 struct qeth_card* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct qeth_channel *VAR_6)
{
 unsigned long VAR_7;
 struct qeth_card *VAR_8;
 int VAR_9;

 FUNC_1(VAR_5, 3, "haltch");
 VAR_8 = FUNC_0(VAR_6->ccwdev);
 FUNC_4(FUNC_3(VAR_6->ccwdev), VAR_7);
 VAR_9 = FUNC_2(VAR_6->ccwdev, VAR_3);
 FUNC_5(FUNC_3(VAR_6->ccwdev), VAR_7);

 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_6(VAR_8->wait_q,
   VAR_6->state == VAR_0, VAR_4);
 if (VAR_9 == -VAR_1)
  return VAR_9;
 if (VAR_6->state != VAR_0)
  return -VAR_2;
 return 0;
}
