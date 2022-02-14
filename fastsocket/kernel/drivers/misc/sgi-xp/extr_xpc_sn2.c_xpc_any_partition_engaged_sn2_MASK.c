
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amo {int variable; } ;
struct TYPE_2__ {struct amo* amos_page; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_2(void)
{
 struct amo *VAR_3 = VAR_2->amos_page +
     VAR_1;


 return FUNC_0(FUNC_1((u64)&VAR_3->variable), VAR_0) != 0;
}
