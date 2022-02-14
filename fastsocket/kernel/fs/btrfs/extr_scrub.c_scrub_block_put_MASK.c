
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_block {int page_count; TYPE_1__* pagev; int ref_count; } ;
struct TYPE_2__ {scalar_t__ page; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct scrub_block*) ;

__attribute__((used)) static void FUNC_3(struct scrub_block *VAR_0)
{
 if (FUNC_1(&VAR_0->ref_count)) {
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->page_count; VAR_1++)
   if (VAR_0->pagev[VAR_1].page)
    FUNC_0(VAR_0->pagev[VAR_1].page);
  FUNC_2(VAR_0);
 }
}
