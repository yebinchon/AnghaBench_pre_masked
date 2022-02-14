
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
struct rx_ring_info {unsigned int rcr_index; size_t* rbr_sizes; int rbr_refill_pending; int * rcr; int rx_dropped; } ;
struct page {size_t index; int * mapping; } ;
struct niu {int device; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* unmap_page ) (int ,size_t,size_t,int ) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct rx_ring_info*,unsigned int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (struct page*) ;
 size_t FUNC_2 (int *) ;
 struct page* FUNC_3 (struct rx_ring_info*,size_t,struct page***) ;
 int FUNC_4 (int ,size_t,size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_7, struct rx_ring_info *VAR_8)
{
 unsigned int VAR_9 = VAR_8->rcr_index;
 int VAR_10 = 0;

 VAR_8->rx_dropped++;
 while (1) {
  struct page *VAR_11, **VAR_12;
  u64 VAR_13, VAR_14;
  u32 VAR_15;

  VAR_10++;

  VAR_14 = FUNC_2(&VAR_8->rcr[VAR_9]);
  VAR_13 = (VAR_14 & VAR_5) <<
   VAR_6;
  VAR_11 = FUNC_3(VAR_8, VAR_13, &VAR_12);

  VAR_15 = VAR_8->rbr_sizes[(VAR_14 & VAR_3) >>
      VAR_4];
  if ((VAR_11->index + VAR_1) - VAR_15 == VAR_13) {
   *VAR_12 = (struct page *) VAR_11->mapping;
   VAR_7->ops->unmap_page(VAR_7->device, VAR_11->index,
         VAR_1, VAR_0);
   VAR_11->index = 0;
   VAR_11->mapping = ((void*)0);
   FUNC_1(VAR_11);
   VAR_8->rbr_refill_pending++;
  }

  VAR_9 = FUNC_0(VAR_8, VAR_9);
  if (!(VAR_14 & VAR_2))
   break;

 }
 VAR_8->rcr_index = VAR_9;

 return VAR_10;
}
