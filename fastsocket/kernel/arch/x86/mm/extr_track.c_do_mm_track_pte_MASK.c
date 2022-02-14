
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_2__ {unsigned long bitcnt; int count; int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,int ) ;

void FUNC_5(void *VAR_2)
{
 pte_t *VAR_3 = (pte_t *)VAR_2;
 unsigned long VAR_4;

 if (!FUNC_2(*VAR_3))
  return;

 if (!(FUNC_3(*VAR_3) & VAR_0))
  return;

 VAR_4 = FUNC_1(*VAR_3);

 if (VAR_4 >= VAR_1.bitcnt)
  return;

 if (!FUNC_4(VAR_4, VAR_1.vector))
  FUNC_0(&VAR_1.count);
}
