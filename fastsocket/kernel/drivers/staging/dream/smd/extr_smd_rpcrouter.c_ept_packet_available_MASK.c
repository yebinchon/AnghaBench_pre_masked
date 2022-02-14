
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_rpc_endpoint {int read_q_lock; int read_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct msm_rpc_endpoint *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;
 FUNC_1(&VAR_0->read_q_lock, VAR_1);
 VAR_2 = !FUNC_0(&VAR_0->read_q);
 FUNC_2(&VAR_0->read_q_lock, VAR_1);
 return VAR_2;
}
