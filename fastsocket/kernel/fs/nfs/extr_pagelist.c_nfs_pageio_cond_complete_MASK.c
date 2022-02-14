
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev; } ;
struct nfs_pageio_descriptor {TYPE_1__ pg_list; } ;
struct nfs_page {scalar_t__ wb_index; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (TYPE_1__*) ;
 struct nfs_page* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_pageio_descriptor*) ;

void FUNC_3(struct nfs_pageio_descriptor *VAR_0, pgoff_t VAR_1)
{
 if (!FUNC_0(&VAR_0->pg_list)) {
  struct nfs_page *VAR_2 = FUNC_1(VAR_0->pg_list.prev);
  if (VAR_1 != VAR_2->wb_index + 1)
   FUNC_2(VAR_0);
 }
}
