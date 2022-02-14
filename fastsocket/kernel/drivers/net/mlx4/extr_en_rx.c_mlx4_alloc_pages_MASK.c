
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _count; } ;
struct mlx4_en_rx_alloc {int size; int offset; int dma; struct page* page; } ;
struct mlx4_en_priv {int ddev; } ;
struct mlx4_en_frag_info {int frag_size; int frag_stride; int frag_align; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct page* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct mlx4_en_priv *VAR_6,
       struct mlx4_en_rx_alloc *VAR_7,
       const struct mlx4_en_frag_info *VAR_8,
       gfp_t VAR_9)
{
 int VAR_10;
 struct page *VAR_11;
 dma_addr_t VAR_12;

 for (VAR_10 = VAR_1; ;) {
  gfp_t VAR_13 = VAR_9;

  if (VAR_10)
   VAR_13 |= VAR_4 | VAR_5;
  VAR_11 = FUNC_0(VAR_13, VAR_10);
  if (FUNC_4(VAR_11))
   break;
  if (--VAR_10 < 0 ||
      ((VAR_2 << VAR_10) < VAR_8->frag_size))
   return -VAR_0;
 }
 VAR_12 = FUNC_2(VAR_6->ddev, VAR_11, 0, VAR_2 << VAR_10,
      VAR_3);
 if (FUNC_3(VAR_6->ddev, VAR_12)) {
  FUNC_5(VAR_11);
  return -VAR_0;
 }
 VAR_7->size = VAR_2 << VAR_10;
 VAR_7->page = VAR_11;
 VAR_7->dma = VAR_12;
 VAR_7->offset = VAR_8->frag_align;



 FUNC_1(&VAR_11->_count, VAR_7->size / VAR_8->frag_stride);
 return 0;
}
