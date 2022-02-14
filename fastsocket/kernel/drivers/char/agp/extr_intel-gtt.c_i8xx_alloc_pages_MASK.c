
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int current_memory_agp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*,int) ;
 TYPE_1__* VAR_2 ;
 struct page* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*,int) ;
 int FUNC_5 (struct page*,int) ;

__attribute__((used)) static struct page *FUNC_6(void)
{
 struct page *VAR_3;

 VAR_3 = FUNC_1(VAR_1 | VAR_0, 2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (FUNC_4(VAR_3, 4) < 0) {
  FUNC_5(VAR_3, 4);
  FUNC_0(VAR_3, 2);
  return ((void*)0);
 }
 FUNC_3(VAR_3);
 FUNC_2(&VAR_2->current_memory_agp);
 return VAR_3;
}
