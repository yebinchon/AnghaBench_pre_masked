
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_srq {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_srq_attr {int dummy; } ;
struct ib_srq {int dummy; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocrdma_srq* FUNC_0 (struct ib_srq*) ;
 int FUNC_1 (struct ocrdma_srq*,struct ib_srq_attr*) ;

int FUNC_2(struct ib_srq *VAR_2,
        struct ib_srq_attr *VAR_3,
        enum ib_srq_attr_mask VAR_4,
        struct ib_udata *VAR_5)
{
 int VAR_6 = 0;
 struct ocrdma_srq *VAR_7;

 VAR_7 = FUNC_0(VAR_2);
 if (VAR_4 & VAR_1)
  VAR_6 = -VAR_0;
 else
  VAR_6 = FUNC_1(VAR_7, VAR_3);
 return VAR_6;
}
