
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2i_hba {int ep_rdwr_lock; } ;
struct bnx2i_endpoint {int link; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct bnx2i_hba *VAR_0,
      struct bnx2i_endpoint *VAR_1)
{
 FUNC_1(&VAR_0->ep_rdwr_lock);
 FUNC_0(&VAR_1->link);
 FUNC_2(&VAR_0->ep_rdwr_lock);
 return 0;
}
