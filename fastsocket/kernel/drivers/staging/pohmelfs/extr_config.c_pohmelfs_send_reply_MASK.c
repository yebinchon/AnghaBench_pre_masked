
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pohmelfs_ctl {scalar_t__ ack; } ;
struct TYPE_3__ {int len; scalar_t__ ack; } ;
struct pohmelfs_cn_ack {int error; int msg_num; TYPE_1__ msg; TYPE_1__ ctl; } ;
struct cn_msg {scalar_t__ ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (struct pohmelfs_cn_ack*) ;
 struct pohmelfs_cn_ack* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,struct pohmelfs_ctl*,int) ;
 int FUNC_4 (struct pohmelfs_cn_ack*,int ,int) ;

__attribute__((used)) static int FUNC_5(int VAR_3, int VAR_4, int VAR_5, struct cn_msg *VAR_6, struct pohmelfs_ctl *VAR_7)
{
 struct pohmelfs_cn_ack *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct pohmelfs_cn_ack), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_4(VAR_8, 0, sizeof(struct pohmelfs_cn_ack));
 FUNC_3(&VAR_8->msg, VAR_6, sizeof(struct cn_msg));

 if (VAR_5 == VAR_2)
  FUNC_3(&VAR_8->ctl, VAR_7, sizeof(struct pohmelfs_ctl));

 VAR_8->msg.len = sizeof(struct pohmelfs_cn_ack) - sizeof(struct cn_msg);
 VAR_8->msg.ack = VAR_6->ack + 1;
 VAR_8->error = VAR_3;
 VAR_8->msg_num = VAR_4;

 FUNC_0(&VAR_8->msg, 0, VAR_1);
 FUNC_1(VAR_8);
 return 0;
}
