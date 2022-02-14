
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct amo {int variable; } ;
struct TYPE_2__ {struct amo* amos_page; } ;


 int FUNC_0 (short) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_3(short VAR_3)
{
 struct amo *VAR_4 = VAR_2->amos_page +
     VAR_1;


 return (FUNC_1(FUNC_2((u64)&VAR_4->variable), VAR_0) &
  FUNC_0(VAR_3)) != 0;
}
