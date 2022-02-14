
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_pd {int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_dev {int dummy; } ;
struct ocrdma_dealloc_pd {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocrdma_dealloc_pd*) ;
 struct ocrdma_dealloc_pd* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_3(struct ocrdma_dev *VAR_2, struct ocrdma_pd *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct ocrdma_dealloc_pd *VAR_5;

 VAR_5 = FUNC_1(VAR_1, sizeof(*VAR_5));
 if (!VAR_5)
  return VAR_4;
 VAR_5->id = VAR_3->id;
 VAR_4 = FUNC_2(VAR_2, (struct ocrdma_mqe *)VAR_5);
 FUNC_0(VAR_5);
 return VAR_4;
}
