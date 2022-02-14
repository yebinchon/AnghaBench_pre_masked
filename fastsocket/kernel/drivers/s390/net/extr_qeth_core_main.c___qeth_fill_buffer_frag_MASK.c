
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skb_frag_struct {unsigned long page_offset; int size; int page; } ;
struct sk_buff {int len; int data_len; char* data; } ;
struct qdio_buffer {TYPE_1__* element; } ;
struct TYPE_4__ {int nr_frags; struct skb_frag_struct* frags; } ;
struct TYPE_3__ {char* addr; int length; void* eflags; } ;


 unsigned long VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_4,
  struct qdio_buffer *VAR_5, int VAR_6,
  int *VAR_7)
{
 struct skb_frag_struct *VAR_8;
 int VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_1(VAR_4)->nr_frags;
 VAR_11 = *VAR_7;
 VAR_13 = 0;

 if (VAR_6)
  VAR_5->element[VAR_11].eflags =
   VAR_3;
 else
  VAR_5->element[VAR_11].eflags =
   VAR_1;
 VAR_13 = VAR_4->len - VAR_4->data_len;
 if (VAR_13) {
  VAR_5->element[VAR_11].addr = VAR_4->data;
  VAR_5->element[VAR_11].length = VAR_13;
  VAR_11++;
 }
 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_8 = &FUNC_1(VAR_4)->frags[VAR_12];
  VAR_10 = (FUNC_0(VAR_8->page) << VAR_0) +
   VAR_8->page_offset;
  VAR_5->element[VAR_11].addr = (char *)VAR_10;
  VAR_5->element[VAR_11].length = VAR_8->size;
  if (VAR_12 < (VAR_9 - 1))
   VAR_5->element[VAR_11].eflags =
    VAR_3;
  else
   VAR_5->element[VAR_11].eflags =
    VAR_2;
  VAR_11++;
 }
 *VAR_7 = VAR_11;
}
