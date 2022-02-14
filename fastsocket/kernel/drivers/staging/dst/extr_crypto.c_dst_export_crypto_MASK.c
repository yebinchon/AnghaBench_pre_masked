
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_node {int pool; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,struct bio*,int ) ;

int FUNC_2(struct dst_node *VAR_3, struct bio *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->pool,
  VAR_2, VAR_1,
  VAR_4, VAR_0);
 if (VAR_5)
  goto err_out_exit;

 return 0;

err_out_exit:
 FUNC_0(VAR_4);
 return VAR_5;
}
