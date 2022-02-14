
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skb_frag_struct {unsigned long page_offset; unsigned long size; } ;
struct sk_buff {unsigned char* data; } ;
struct fc_frame {int dummy; } ;
struct TYPE_2__ {unsigned int nr_frags; struct skb_frag_struct* frags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,unsigned char*,unsigned long) ;
 struct sk_buff* FUNC_1 (struct fc_frame*) ;
 unsigned char* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (unsigned char*,int ) ;
 unsigned long FUNC_4 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_5 (struct skb_frag_struct*) ;
 unsigned long FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;

u32 FUNC_8(struct fc_frame *VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_1(VAR_4);
 struct skb_frag_struct *VAR_6;
 unsigned char *VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 unsigned VAR_12;

 VAR_11 = FUNC_0(~0, VAR_5->data, FUNC_6(VAR_5));

 for (VAR_12 = 0; VAR_12 < FUNC_7(VAR_5)->nr_frags; VAR_12++) {
  VAR_6 = &FUNC_7(VAR_5)->frags[VAR_12];
  VAR_8 = VAR_6->page_offset;
  VAR_9 = VAR_6->size;
  while (VAR_9 > 0) {
   VAR_10 = FUNC_4(VAR_9, VAR_3 - (VAR_8 & ~VAR_1));
   VAR_7 = FUNC_2(
    FUNC_5(VAR_6) + (VAR_8 >> VAR_2),
    VAR_0);
   VAR_11 = FUNC_0(VAR_11, VAR_7 + (VAR_8 & ~VAR_1), VAR_10);
   FUNC_3(VAR_7, VAR_0);
   VAR_8 += VAR_10;
   VAR_9 -= VAR_10;
  }
 }
 return VAR_11;
}
