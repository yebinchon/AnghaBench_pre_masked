
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c4iw_dev {int cqidr; } ;
struct c4iw_cq {int dummy; } ;


 struct c4iw_cq* FUNC_0 (int *,int ) ;

__attribute__((used)) static inline struct c4iw_cq *FUNC_1(struct c4iw_dev *VAR_0, u32 VAR_1)
{
 return FUNC_0(&VAR_0->cqidr, VAR_1);
}
