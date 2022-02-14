
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rx_ring_info {int rbr_table_size; scalar_t__ rbr_index; int * rbr; struct page** rxhash; } ;
struct page {int * mapping; scalar_t__ index; } ;
struct niu {int device; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* unmap_page ) (int ,scalar_t__,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_3, struct rx_ring_info *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct page *VAR_6;

  VAR_6 = VAR_4->rxhash[VAR_5];
  while (VAR_6) {
   struct page *VAR_7 = (struct page *) VAR_6->mapping;
   u64 VAR_8 = VAR_6->index;

   VAR_3->ops->unmap_page(VAR_3->device, VAR_8, VAR_2,
         VAR_0);
   VAR_6->index = 0;
   VAR_6->mapping = ((void*)0);

   FUNC_0(VAR_6);

   VAR_6 = VAR_7;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->rbr_table_size; VAR_5++)
  VAR_4->rbr[VAR_5] = FUNC_1(0);
 VAR_4->rbr_index = 0;
}
