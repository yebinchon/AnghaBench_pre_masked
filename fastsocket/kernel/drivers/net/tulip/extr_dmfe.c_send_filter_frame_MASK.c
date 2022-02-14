
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct tx_desc {void* tdes0; void* tdes1; struct tx_desc* next_tx_desc; scalar_t__ tx_buf_ptr; } ;
struct dmfe_board_info {int cr6_data; int tx_queue_cnt; int tx_packet_cnt; struct tx_desc* tx_insert_ptr; } ;
struct dev_mc_list {scalar_t__ dmi_addr; struct dev_mc_list* next; } ;
struct DEVICE {int trans_start; scalar_t__ base_addr; struct dev_mc_list* mc_list; scalar_t__ dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 void* FUNC_1 (int) ;
 int VAR_1 ;
 struct dmfe_board_info* FUNC_2 (struct DEVICE*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct DEVICE *VAR_2, int VAR_3)
{
 struct dmfe_board_info *VAR_4 = FUNC_2(VAR_2);
 struct dev_mc_list *VAR_5;
 struct tx_desc *VAR_6;
 u16 * VAR_7;
 u32 * VAR_8;
 int VAR_9;

 FUNC_0(0, "send_filter_frame()", 0);

 VAR_6 = VAR_4->tx_insert_ptr;
 VAR_8 = (u32 *) VAR_6->tx_buf_ptr;


 VAR_7 = (u16 *) VAR_2->dev_addr;
 *VAR_8++ = VAR_7[0];
 *VAR_8++ = VAR_7[1];
 *VAR_8++ = VAR_7[2];


 *VAR_8++ = 0xffff;
 *VAR_8++ = 0xffff;
 *VAR_8++ = 0xffff;


 for (VAR_5 = VAR_2->mc_list, VAR_9 = 0; VAR_9 < VAR_3; VAR_9++, VAR_5 = VAR_5->next) {
  VAR_7 = (u16 *) VAR_5->dmi_addr;
  *VAR_8++ = VAR_7[0];
  *VAR_8++ = VAR_7[1];
  *VAR_8++ = VAR_7[2];
 }

 for (; VAR_9<14; VAR_9++) {
  *VAR_8++ = 0xffff;
  *VAR_8++ = 0xffff;
  *VAR_8++ = 0xffff;
 }


 VAR_4->tx_insert_ptr = VAR_6->next_tx_desc;
 VAR_6->tdes1 = FUNC_1(0x890000c0);


 if (!VAR_4->tx_packet_cnt) {

  VAR_4->tx_packet_cnt++;
  VAR_6->tdes0 = FUNC_1(0x80000000);
  FUNC_4(VAR_4->cr6_data | 0x2000, VAR_2->base_addr);
  FUNC_3(0x1, VAR_2->base_addr + VAR_0);
  FUNC_4(VAR_4->cr6_data, VAR_2->base_addr);
  VAR_2->trans_start = VAR_1;
 } else
  VAR_4->tx_queue_cnt++;
}
