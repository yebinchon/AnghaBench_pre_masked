
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {int user; } ;
struct slip_data {int dummy; } ;
struct sk_buff {int len; int data; } ;


 int FUNC_0 (int,int ,int ,struct slip_data*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct sk_buff *VAR_1, struct uml_net_private *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->data, VAR_1->len,
          (struct slip_data *) &VAR_2->user);
}
