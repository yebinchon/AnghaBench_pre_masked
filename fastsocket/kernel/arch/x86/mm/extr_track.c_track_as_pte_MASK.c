
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_2__ {unsigned long bitcnt; int count; int vector; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static inline void FUNC_3(void *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(*(pte_t *)VAR_1);
 if (VAR_2 >= VAR_0.bitcnt)
  return;

 if (!FUNC_2(VAR_2, VAR_0.vector))
  FUNC_0(&VAR_0.count);
}
