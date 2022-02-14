
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cn_dev {int cbdev; } ;
struct cb_id {int dummy; } ;


 int VAR_0 ;
 struct cn_dev VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct cb_id*,void (*) (struct cn_msg*,struct netlink_skb_parms*)) ;

int FUNC_1(struct cb_id *VAR_3, char *VAR_4,
      void (*VAR_5)(struct cn_msg *, struct netlink_skb_parms *))
{
 int VAR_6;
 struct cn_dev *VAR_7 = &VAR_1;

 if (!VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_7->cbdev, VAR_4, VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 return 0;
}
