
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cqe {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_fw6_msg {int * data; } ;
struct c4iw_dev {int dummy; } ;


 int FUNC_0 (struct c4iw_dev*,struct t4_cqe*) ;
 struct cpl_fw6_msg* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct c4iw_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct cpl_fw6_msg *VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_0, (struct t4_cqe *)&VAR_2->data[0]);
 return 0;
}
