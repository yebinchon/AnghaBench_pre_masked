
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_rpc_server {scalar_t__ flags; int list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct msm_rpc_server*) ;
 scalar_t__ VAR_3 ;

int FUNC_5(struct msm_rpc_server *VAR_4)
{

 VAR_4->flags = 0;
 FUNC_0(&VAR_4->list);

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_4->list, &VAR_1);
 if (VAR_3) {
  FUNC_4(VAR_4);
  VAR_4->flags |= VAR_0;
 }
 FUNC_3(&VAR_2);

 return 0;
}
