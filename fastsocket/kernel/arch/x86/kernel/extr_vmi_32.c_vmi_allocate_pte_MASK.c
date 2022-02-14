
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {int (* allocate_page ) (unsigned long,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ,int ,int ,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mm_struct *VAR_2, unsigned long VAR_3)
{
 VAR_1.allocate_page(VAR_3, VAR_0, 0, 0, 0);
}
