
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int next; } ;
struct nfs_pgio_header {unsigned long good_bytes; int (* release ) (struct nfs_pgio_header*) ;int flags; TYPE_1__ pages; } ;
struct nfs_page {scalar_t__ wb_bytes; struct page* wb_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct nfs_page* FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct nfs_pgio_header*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct page*,int ,unsigned long) ;
 int FUNC_8 (struct page*,int,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct nfs_pgio_header *VAR_5)
{
 unsigned long VAR_6 = 0;

 if (FUNC_6(VAR_2, &VAR_5->flags))
  goto out;
 while (!FUNC_1(&VAR_5->pages)) {
  struct nfs_page *VAR_7 = FUNC_2(VAR_5->pages.next);
  struct page *VAR_8 = VAR_7->wb_page;

  if (FUNC_6(VAR_0, &VAR_5->flags)) {
   if (VAR_6 > VAR_5->good_bytes)
    FUNC_7(VAR_8, 0, VAR_4);
   else if (VAR_5->good_bytes - VAR_6 < VAR_4)
    FUNC_8(VAR_8,
     VAR_5->good_bytes & ~VAR_3,
     VAR_4);
  }
  VAR_6 += VAR_7->wb_bytes;
  if (FUNC_6(VAR_1, &VAR_5->flags)) {
   if (VAR_6 <= VAR_5->good_bytes)
    FUNC_0(VAR_8);
  } else
   FUNC_0(VAR_8);
  FUNC_3(VAR_7);
  FUNC_4(VAR_7);
 }
out:
 VAR_5->release(VAR_5);
}
