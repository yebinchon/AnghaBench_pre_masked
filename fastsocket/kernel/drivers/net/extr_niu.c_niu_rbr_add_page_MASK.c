
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rx_ring_info {int rbr_blocks_per_page; scalar_t__ rbr_block_size; int * rbr; } ;
struct page {int dummy; } ;
struct niu {int device; TYPE_1__* ops; } ;
typedef int gfp_t ;
typedef int __le32 ;
struct TYPE_4__ {int _count; } ;
struct TYPE_3__ {int (* map_page ) (int ,struct page*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 TYPE_2__* FUNC_2 (struct page*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rx_ring_info*,struct page*,int) ;
 int FUNC_5 (int ,struct page*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct niu *VAR_4, struct rx_ring_info *VAR_5,
       gfp_t VAR_6, int VAR_7)
{
 struct page *VAR_8;
 u64 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = VAR_4->ops->map_page(VAR_4->device, VAR_8, 0,
     VAR_2, VAR_0);

 FUNC_4(VAR_5, VAR_8, VAR_9);
 if (VAR_5->rbr_blocks_per_page > 1)
  FUNC_1(VAR_5->rbr_blocks_per_page - 1,
      &FUNC_2(VAR_8)->_count);

 for (VAR_10 = 0; VAR_10 < VAR_5->rbr_blocks_per_page; VAR_10++) {
  __le32 *VAR_11 = &VAR_5->rbr[VAR_7 + VAR_10];

  *VAR_11 = FUNC_3(VAR_9 >> VAR_3);
  VAR_9 += VAR_5->rbr_block_size;
 }

 return 0;
}
