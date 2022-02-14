
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsp_desc {int flags; int len_cq; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(const struct rsp_desc *VAR_2)
{
 __be32 VAR_3 = VAR_2->flags & FUNC_0(VAR_0 | VAR_1);

 return (VAR_3 | VAR_2->len_cq) == 0;
}
