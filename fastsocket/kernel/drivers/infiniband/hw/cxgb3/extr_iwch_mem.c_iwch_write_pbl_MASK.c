
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pbl_addr; } ;
struct iwch_mr {TYPE_2__ attr; TYPE_1__* rhp; } ;
typedef int __be64 ;
struct TYPE_3__ {int rdev; } ;


 int FUNC_0 (int *,int *,scalar_t__,int) ;

int FUNC_1(struct iwch_mr *VAR_0, __be64 *VAR_1, int VAR_2, int VAR_3)
{
 return FUNC_0(&VAR_0->rhp->rdev, VAR_1,
         VAR_0->attr.pbl_addr + (VAR_3 << 3), VAR_2);
}
