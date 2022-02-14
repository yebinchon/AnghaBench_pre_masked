
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_mqe {int dummy; } ;
struct ocrdma_mbx_query_config {int dummy; } ;
struct ocrdma_dev {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocrdma_mqe*) ;
 int FUNC_1 (struct ocrdma_dev*,int *,struct ocrdma_mbx_query_config*) ;
 struct ocrdma_mqe* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct ocrdma_mbx_query_config *VAR_4;
 struct ocrdma_mqe *VAR_5;

 VAR_5 = FUNC_2(VAR_1, sizeof(*VAR_5));
 if (!VAR_5)
  return VAR_3;
 VAR_3 = FUNC_3(VAR_2, (struct ocrdma_mqe *)VAR_5);
 if (VAR_3)
  goto mbx_err;
 VAR_4 = (struct ocrdma_mbx_query_config *)VAR_5;
 FUNC_1(VAR_2, &VAR_2->attr, VAR_4);
mbx_err:
 FUNC_0(VAR_5);
 return VAR_3;
}
