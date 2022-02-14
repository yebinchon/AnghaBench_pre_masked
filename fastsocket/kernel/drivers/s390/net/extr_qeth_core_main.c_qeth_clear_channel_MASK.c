
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_channel {scalar_t__ state; int ccwdev; } ;
struct qeth_card {int wait_q; } ;


 struct qeth_card* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct qeth_channel *VAR_7)
{
 unsigned long VAR_8;
 struct qeth_card *VAR_9;
 int VAR_10;

 FUNC_1(VAR_6, 3, "clearch");
 VAR_9 = FUNC_0(VAR_7->ccwdev);
 FUNC_4(FUNC_3(VAR_7->ccwdev), VAR_8);
 VAR_10 = FUNC_2(VAR_7->ccwdev, VAR_4);
 FUNC_5(FUNC_3(VAR_7->ccwdev), VAR_8);

 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_6(VAR_9->wait_q,
   VAR_7->state == VAR_1, VAR_5);
 if (VAR_10 == -VAR_2)
  return VAR_10;
 if (VAR_7->state != VAR_1)
  return -VAR_3;
 VAR_7->state = VAR_0;
 return 0;
}
