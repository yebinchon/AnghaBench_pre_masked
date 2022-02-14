
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_collect {int expected_pages; int pg_first; TYPE_1__* inode; scalar_t__ length; scalar_t__ nr_pages; int * bio; } ;
struct TYPE_2__ {int i_ino; } ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct page_collect *VAR_0)
{
 VAR_0->expected_pages -= FUNC_1(VAR_0->nr_pages, VAR_0->expected_pages);

 VAR_0->bio = ((void*)0);
 VAR_0->nr_pages = 0;
 VAR_0->length = 0;
 VAR_0->pg_first = -1;
 FUNC_0("_pcol_reset ino=0x%lx expected_pages=%u\n",
       VAR_0->inode->i_ino, VAR_0->expected_pages);




 if (!VAR_0->expected_pages)
  VAR_0->expected_pages = 128;
}
