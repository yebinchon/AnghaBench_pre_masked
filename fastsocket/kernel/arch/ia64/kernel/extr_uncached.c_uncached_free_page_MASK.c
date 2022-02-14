
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gen_pool {int dummy; } ;
struct TYPE_2__ {struct gen_pool* pool; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct gen_pool*,unsigned long,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,unsigned long) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(unsigned long VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3 - VAR_1);
 struct gen_pool *VAR_6 = VAR_2[VAR_5].pool;

 if (FUNC_3(VAR_6 == ((void*)0)))
  return;

 if ((VAR_3 & (0XFUL << 60)) != VAR_1)
  FUNC_2("uncached_free_page invalid address %lx\n", VAR_3);

 FUNC_0(VAR_6, VAR_3, VAR_4 * VAR_0);
}
