
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int current_memory_agp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

void FUNC_4(struct page *VAR_3, int VAR_4)
{
 if (VAR_3 == ((void*)0))
  return;

 if (VAR_4 & VAR_1)
  FUNC_3(VAR_3);

 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_3);
  FUNC_0(VAR_3);
  FUNC_1(&VAR_2->current_memory_agp);
 }
}
