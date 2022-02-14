
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_page_pool {char* name; char* nrefills; char* nfrees; char* npages; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {struct ttm_page_pool* pools; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

int FUNC_1(struct seq_file *VAR_2, void *VAR_3)
{
 struct ttm_page_pool *VAR_4;
 unsigned VAR_5;
 char *VAR_6[] = {"pool", "refills", "pages freed", "size"};
 if (!VAR_1) {
  FUNC_0(VAR_2, "No pool allocator running.\n");
  return 0;
 }
 FUNC_0(VAR_2, "%6s %12s %13s %8s\n",
   VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3]);
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  VAR_4 = &VAR_1->pools[VAR_5];

  FUNC_0(VAR_2, "%6s %12ld %13ld %8d\n",
    VAR_4->name, VAR_4->nrefills,
    VAR_4->nfrees, VAR_4->npages);
 }
 return 0;
}
