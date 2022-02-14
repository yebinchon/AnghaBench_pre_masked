
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_trans {struct dst_node* n; } ;
struct dst_node {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dst_trans*) ;
 int FUNC_1 (int ,int ,int ,struct dst_trans*,int ) ;

int FUNC_2(struct dst_trans *VAR_3)
{
 struct dst_node *VAR_4 = VAR_3->n;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->pool,
  VAR_2, VAR_1,
  VAR_3, VAR_0);
 if (VAR_5)
  goto err_out_exit;

 return 0;

err_out_exit:
 FUNC_0(VAR_3);
 return VAR_5;
}
