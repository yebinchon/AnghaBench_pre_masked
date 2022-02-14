
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long bitcnt; int count; int vector; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (unsigned long,int ) ;

void FUNC_2(void *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = (unsigned long)VAR_2 >> VAR_0;

 if (VAR_3 >= VAR_1.bitcnt)
  return;

 if (!FUNC_1(VAR_3, VAR_1.vector))
  FUNC_0(&VAR_1.count);
}
