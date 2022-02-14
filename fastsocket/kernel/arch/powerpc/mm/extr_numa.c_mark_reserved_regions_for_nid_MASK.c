
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pglist_data {unsigned long node_start_pfn; unsigned long node_spanned_pages; } ;
struct node_active_region {unsigned long start_pfn; unsigned long end_pfn; int nid; } ;
struct TYPE_5__ {int cnt; TYPE_1__* region; } ;
struct TYPE_6__ {TYPE_2__ reserved; } ;
struct TYPE_4__ {unsigned long base; unsigned long size; } ;


 int VAR_0 ;
 struct pglist_data* FUNC_0 (int) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,unsigned long,unsigned long,int) ;
 int FUNC_3 (unsigned long,struct node_active_region*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (struct pglist_data*,unsigned long,unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_3)
{
 struct pglist_data *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2.reserved.cnt; VAR_5++) {
  unsigned long VAR_6 = VAR_2.reserved.region[VAR_5].base;
  unsigned long VAR_7 = VAR_2.reserved.region[VAR_5].size;
  unsigned long VAR_8 = VAR_6 >> VAR_1;
  unsigned long VAR_9 = FUNC_1(VAR_6 + VAR_7);
  struct node_active_region VAR_10;
  unsigned long VAR_11 = VAR_4->node_start_pfn +
          VAR_4->node_spanned_pages;
  if (VAR_9 <= VAR_4->node_start_pfn ||
      VAR_8 >= VAR_11)
   continue;

  FUNC_3(VAR_8, &VAR_10);
  while (VAR_8 < VAR_9 &&
   VAR_10.start_pfn < VAR_10.end_pfn) {
   unsigned long VAR_12 = VAR_7;




   if (VAR_9 > VAR_10.end_pfn)
    VAR_12 = (VAR_10.end_pfn << VAR_1)
     - VAR_6;




   if (VAR_10.nid == VAR_3) {
    FUNC_2("reserve_bootmem %lx %lx nid=%d\n",
     VAR_6, VAR_12, VAR_10.nid);
    FUNC_4(FUNC_0(VAR_10.nid),
      VAR_6, VAR_12,
      VAR_0);
   }




   if (VAR_9 <= VAR_10.end_pfn)
    break;






   VAR_8 = VAR_10.end_pfn;
   VAR_6 = VAR_8 << VAR_1;
   VAR_7 = VAR_7 - VAR_12;
   FUNC_3(VAR_8, &VAR_10);
  }
 }
}
