
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_srq {int dev; int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_modify_srq {int limit_max_rqe; int id; } ;
struct ib_srq_attr {int srq_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocrdma_modify_srq*) ;
 struct ocrdma_modify_srq* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct ocrdma_mqe*) ;

int FUNC_3(struct ocrdma_srq *VAR_3, struct ib_srq_attr *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct ocrdma_modify_srq *VAR_6;
 VAR_6 = FUNC_1(VAR_1, sizeof(*VAR_6));
 if (!VAR_6)
  return VAR_5;
 VAR_6->id = VAR_3->id;
 VAR_6->limit_max_rqe |= VAR_4->srq_limit <<
     VAR_2;
 VAR_5 = FUNC_2(VAR_3->dev, (struct ocrdma_mqe *)VAR_6);
 FUNC_0(VAR_6);
 return VAR_5;
}
