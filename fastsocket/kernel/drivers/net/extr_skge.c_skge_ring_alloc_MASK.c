
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct skge_tx_desc {void* next_offset; } ;
struct skge_ring {int count; struct skge_element* start; struct skge_element* to_clean; struct skge_element* to_use; } ;
struct skge_element {struct skge_element* next; struct skge_tx_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skge_element* FUNC_0 (int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct skge_ring *VAR_2, void *VAR_3, u32 VAR_4)
{
 struct skge_tx_desc *VAR_5;
 struct skge_element *VAR_6;
 int VAR_7;

 VAR_2->start = FUNC_0(VAR_2->count, sizeof(*VAR_6), VAR_1);
 if (!VAR_2->start)
  return -VAR_0;

 for (VAR_7 = 0, VAR_6 = VAR_2->start, VAR_5 = VAR_3; VAR_7 < VAR_2->count; VAR_7++, VAR_6++, VAR_5++) {
  VAR_6->desc = VAR_5;
  if (VAR_7 == VAR_2->count - 1) {
   VAR_6->next = VAR_2->start;
   VAR_5->next_offset = VAR_4;
  } else {
   VAR_6->next = VAR_6 + 1;
   VAR_5->next_offset = VAR_4 + (VAR_7+1) * sizeof(*VAR_5);
  }
 }
 VAR_2->to_use = VAR_2->to_clean = VAR_2->start;

 return 0;
}
