
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
struct TYPE_5__ {TYPE_1__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_2__ wb; } ;
struct sk_buff {int dummy; } ;
struct page {int _count; } ;
struct ixgbe_rx_buffer {int page_offset; struct page* page; } ;
struct ixgbe_ring {int dummy; } ;
struct TYPE_6__ {int nr_frags; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct page*) ;
 unsigned int FUNC_4 (struct ixgbe_ring*) ;
 unsigned int FUNC_5 (struct ixgbe_ring*) ;
 unsigned int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_9 () ;
 unsigned char* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct sk_buff*,int ,struct page*,int,unsigned int,unsigned int) ;
 int FUNC_15 (struct sk_buff*) ;
 TYPE_3__* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static bool FUNC_18(struct ixgbe_ring *VAR_2,
         struct ixgbe_rx_buffer *VAR_3,
         union ixgbe_adv_rx_desc *VAR_4,
         struct sk_buff *VAR_5)
{
 struct page *VAR_6 = VAR_3->page;
 unsigned int VAR_7 = FUNC_6(VAR_4->wb.upper.length);

 unsigned int VAR_8 = FUNC_4(VAR_2);






 if ((VAR_7 <= VAR_0) && !FUNC_15(VAR_5)) {
  unsigned char *VAR_9 = FUNC_10(VAR_6) + VAR_3->page_offset;

  FUNC_8(FUNC_1(VAR_5, VAR_7), VAR_9, FUNC_0(VAR_7, sizeof(long)));


  if (FUNC_7(FUNC_12(VAR_6) == FUNC_9()))
   return 1;


  FUNC_13(VAR_6);
  return 0;
 }

 FUNC_14(VAR_5, FUNC_16(VAR_5)->nr_frags, VAR_6,
   VAR_3->page_offset, VAR_7, VAR_8);


 if (FUNC_17(FUNC_12(VAR_6) != FUNC_9()))
  return 0;



 if (FUNC_17(FUNC_11(VAR_6) != 1))
  return 0;


 VAR_3->page_offset ^= VAR_8;






 FUNC_2(&VAR_6->_count, 2);
 return 1;
}
