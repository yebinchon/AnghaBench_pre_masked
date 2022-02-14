
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {scalar_t__ state; int write; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,void*,int) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int) ;
 struct qeth_cmd_buffer* FUNC_3 (int *) ;

int FUNC_4(struct net_device *VAR_5, void *VAR_6, int VAR_7)
{
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_card *VAR_9;
 int VAR_10;

 FUNC_0(VAR_4, 2, "osnsdmc");
 if (!VAR_5)
  return -VAR_2;
 VAR_9 = VAR_5->ml_priv;
 if (!VAR_9)
  return -VAR_2;
 if ((VAR_9->state != VAR_1) &&
     (VAR_9->state != VAR_0))
  return -VAR_2;
 VAR_8 = FUNC_3(&VAR_9->write);
 FUNC_1(VAR_8->data+VAR_3, VAR_6, VAR_7);
 VAR_10 = FUNC_2(VAR_9, VAR_8, VAR_7);
 return VAR_10;
}
