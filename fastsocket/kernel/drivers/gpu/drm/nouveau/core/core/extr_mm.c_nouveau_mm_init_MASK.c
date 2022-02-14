
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nouveau_mm_node {int fl_entry; int nl_entry; scalar_t__ offset; int length; } ;
struct nouveau_mm {scalar_t__ heap_nodes; int free; int nodes; scalar_t__ block_size; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nouveau_mm_node* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

int
FUNC_6(struct nouveau_mm *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nouveau_mm_node *VAR_6;

 if (VAR_5) {
  FUNC_3(&VAR_2->mutex);
  FUNC_0(&VAR_2->nodes);
  FUNC_0(&VAR_2->free);
  VAR_2->block_size = VAR_5;
  VAR_2->heap_nodes = 0;
 }

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_4) {
  VAR_6->offset = FUNC_5(VAR_3, VAR_2->block_size);
  VAR_6->length = FUNC_4(VAR_3 + VAR_4, VAR_2->block_size);
  VAR_6->length -= VAR_6->offset;
 }

 FUNC_2(&VAR_6->nl_entry, &VAR_2->nodes);
 FUNC_2(&VAR_6->fl_entry, &VAR_2->free);
 VAR_2->heap_nodes++;
 return 0;
}
