
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_node {int dummy; } ;
struct dst_export_ctl {int dummy; } ;
struct dst_ctl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dst_node* FUNC_0 (struct dst_ctl*,int ,int) ;
 int FUNC_1 (struct dst_node*) ;
 int FUNC_2 (struct dst_node*) ;
 int FUNC_3 (struct dst_node*,struct dst_ctl*,struct dst_export_ctl*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dst_node *VAR_3, struct dst_ctl *VAR_4,
  void *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 struct dst_export_ctl *VAR_8 = VAR_5;

 if (VAR_3)
  return -VAR_0;

 if (VAR_6 != sizeof(struct dst_export_ctl))
  return -VAR_1;

 VAR_3 = FUNC_0(VAR_4, VAR_2, 2);
 if (!VAR_3)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_8);
 if (VAR_7)
  goto err_out_free;

 FUNC_1(VAR_3);

 return 0;

err_out_free:
 FUNC_2(VAR_3);
 return VAR_7;
}
