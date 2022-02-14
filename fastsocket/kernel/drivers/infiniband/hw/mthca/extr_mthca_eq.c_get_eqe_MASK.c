
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mthca_eqe {int dummy; } ;
struct mthca_eq {int nent; TYPE_1__* page_list; } ;
struct TYPE_2__ {struct mthca_eqe* buf; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline struct mthca_eqe *FUNC_0(struct mthca_eq *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4 = (VAR_3 & (VAR_2->nent - 1)) * VAR_0;
 return VAR_2->page_list[VAR_4 / VAR_1].buf + VAR_4 % VAR_1;
}
