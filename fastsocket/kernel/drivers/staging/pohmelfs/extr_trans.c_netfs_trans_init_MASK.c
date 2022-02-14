
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_trans_dst {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(void)
{
 int VAR_3 = -VAR_0;

 VAR_1 = FUNC_0("netfs_trans_dst", sizeof(struct netfs_trans_dst),
   0, 0, ((void*)0));
 if (!VAR_1)
  goto err_out_exit;

 VAR_2 = FUNC_2(256, VAR_1);
 if (!VAR_2)
  goto err_out_free;

 return 0;

err_out_free:
 FUNC_1(VAR_1);
err_out_exit:
 return VAR_3;
}
