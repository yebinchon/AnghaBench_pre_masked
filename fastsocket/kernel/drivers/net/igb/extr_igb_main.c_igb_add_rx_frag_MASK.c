
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ upper; } ;
union e1000_adv_rx_desc {TYPE_2__ wb; } ;
struct sk_buff {int dummy; } ;
struct page {int _count; } ;
struct igb_rx_buffer {int page_offset; struct page* page; } ;
struct igb_ring {int q_vector; } ;
struct TYPE_6__ {int nr_frags; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,unsigned char*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (union e1000_adv_rx_desc*,int ) ;
 unsigned int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,unsigned char*,int ) ;
 scalar_t__ FUNC_10 () ;
 unsigned char* FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct sk_buff*,int ,struct page*,int,unsigned int,int) ;
 int FUNC_16 (struct sk_buff*) ;
 TYPE_3__* FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static bool FUNC_19(struct igb_ring *VAR_5,
       struct igb_rx_buffer *VAR_6,
       union e1000_adv_rx_desc *VAR_7,
       struct sk_buff *VAR_8)
{
 struct page *VAR_9 = VAR_6->page;
 unsigned int VAR_10 = FUNC_7(VAR_7->wb.upper.length);

 if ((VAR_10 <= VAR_2) && !FUNC_16(VAR_8)) {
  unsigned char *VAR_11 = FUNC_11(VAR_9) + VAR_6->page_offset;

  if (FUNC_6(VAR_7, VAR_0)) {
   FUNC_5(VAR_5->q_vector, VAR_11, VAR_8);
   VAR_11 += VAR_3;
   VAR_10 -= VAR_3;
  }

  FUNC_9(FUNC_2(VAR_8, VAR_10), VAR_11, FUNC_0(VAR_10, sizeof(long)));


  if (FUNC_8(FUNC_13(VAR_9) == FUNC_10()))
   return 1;


  FUNC_14(VAR_9);
  return 0;
 }

 FUNC_15(VAR_8, FUNC_17(VAR_8)->nr_frags, VAR_9,
   VAR_6->page_offset, VAR_10, VAR_1);


 if (FUNC_18(FUNC_13(VAR_9) != FUNC_10()))
  return 0;



 if (FUNC_18(FUNC_12(VAR_9) != 1))
  return 0;


 VAR_6->page_offset ^= VAR_1;






 FUNC_3(&VAR_9->_count, 2);
 return 1;
}
