
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_node {TYPE_1__* info; } ;
struct dst_network_ctl {int dummy; } ;
struct dst_ctl {int dummy; } ;
struct TYPE_2__ {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dst_node* FUNC_0 (struct dst_ctl*,int ,int) ;
 int FUNC_1 (struct dst_node*) ;
 int FUNC_2 (struct dst_node*,struct dst_network_ctl*) ;
 int FUNC_3 (struct dst_node*) ;
 int VAR_3 ;
 int FUNC_4 (int *,struct dst_network_ctl*,int) ;

__attribute__((used)) static int FUNC_5(struct dst_node *VAR_4, struct dst_ctl *VAR_5,
  void *VAR_6, unsigned int VAR_7)
{
 int VAR_8;
 struct dst_network_ctl *VAR_9 = VAR_6;

 if (VAR_4)
  return -VAR_0;

 if (VAR_7 != sizeof(struct dst_network_ctl))
  return -VAR_1;

 VAR_4 = FUNC_0(VAR_5, VAR_3, 1);
 if (!VAR_4)
  return -VAR_2;

 FUNC_4(&VAR_4->info->net, VAR_9, sizeof(struct dst_network_ctl));
 VAR_8 = FUNC_2(VAR_4, VAR_9);
 if (VAR_8)
  goto err_out_free;

 FUNC_1(VAR_4);

 return 0;

err_out_free:
 FUNC_3(VAR_4);
 return VAR_8;
}
