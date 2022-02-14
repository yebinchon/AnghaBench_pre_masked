
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm_rep_msg {int dummy; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct cm_rep_msg*) ;
 int FUNC_1 (struct cm_rep_msg*) ;

__attribute__((used)) static inline __be32 FUNC_2(struct cm_rep_msg *VAR_1, enum ib_qp_type VAR_2)
{
 return (VAR_2 == VAR_0) ?
  FUNC_0(VAR_1) : FUNC_1(VAR_1);
}
