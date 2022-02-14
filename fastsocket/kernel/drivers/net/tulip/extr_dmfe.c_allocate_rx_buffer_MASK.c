
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct rx_desc {struct rx_desc* next_rx_desc; void* rdes0; void* rdes2; struct sk_buff* rx_skb_ptr; } ;
struct dmfe_board_info {scalar_t__ rx_avail_cnt; struct rx_desc* rx_insert_ptr; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct dmfe_board_info *VAR_3)
{
 struct rx_desc *VAR_4;
 struct sk_buff *VAR_5;

 VAR_4 = VAR_3->rx_insert_ptr;

 while(VAR_3->rx_avail_cnt < VAR_2) {
  if ( ( VAR_5 = FUNC_1(VAR_1) ) == ((void*)0) )
   break;
  VAR_4->rx_skb_ptr = VAR_5;
  VAR_4->rdes2 = FUNC_0( FUNC_2(VAR_3->pdev, VAR_5->data,
        VAR_1, VAR_0) );
  FUNC_3();
  VAR_4->rdes0 = FUNC_0(0x80000000);
  VAR_4 = VAR_4->next_rx_desc;
  VAR_3->rx_avail_cnt++;
 }

 VAR_3->rx_insert_ptr = VAR_4;
}
