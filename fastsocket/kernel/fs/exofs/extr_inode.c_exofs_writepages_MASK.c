
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {long range_start; long range_end; } ;
struct page_collect {int dummy; } ;
struct address_space {long nrpages; TYPE_1__* host; } ;
struct TYPE_2__ {int i_ino; } ;


 int FUNC_0 (char*,int ,long,long,long,long,long) ;
 int FUNC_1 (char*,int) ;
 long VAR_0 ;
 long VAR_1 ;
 int FUNC_2 (struct page_collect*,long,TYPE_1__*) ;
 long FUNC_3 (long,long) ;
 int FUNC_4 (struct address_space*,struct writeback_control*,int ,struct page_collect*) ;
 int FUNC_5 (struct page_collect*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct address_space *VAR_3,
         struct writeback_control *VAR_4)
{
 struct page_collect VAR_5;
 long VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = VAR_4->range_start >> VAR_1;
 VAR_7 = (VAR_4->range_end == VAR_0) ?
   VAR_6 + VAR_3->nrpages :
   VAR_4->range_end >> VAR_1;

 if (VAR_6 || VAR_7)
  VAR_8 = FUNC_3(VAR_7 - VAR_6 + 1, 32L);
 else
  VAR_8 = VAR_3->nrpages;

 FUNC_0("inode(0x%lx) wbc->start=0x%llx wbc->end=0x%llx"
       " m->nrpages=%lu start=0x%lx end=0x%lx\n",
       VAR_3->host->i_ino, VAR_4->range_start, VAR_4->range_end,
       VAR_3->nrpages, VAR_6, VAR_7);

 FUNC_2(&VAR_5, VAR_8, VAR_3->host);

 VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_2, &VAR_5);
 if (VAR_9) {
  FUNC_1("write_cache_pages => %d\n", VAR_9);
  return VAR_9;
 }

 return FUNC_5(&VAR_5);
}
