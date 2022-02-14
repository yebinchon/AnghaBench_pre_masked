
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_rx_desc_packet_split {int dummy; } e1000_rx_desc_packet_split ;
struct e1000_ring {int count; int size; struct e1000_buffer* buffer_info; int * rx_skb_top; scalar_t__ next_to_use; scalar_t__ next_to_clean; struct e1000_adapter* adapter; } ;
struct e1000_ps_page {int dummy; } ;
struct e1000_buffer {int ps_pages; } ;
struct e1000_adapter {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct e1000_adapter*,struct e1000_ring*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct e1000_buffer*) ;
 struct e1000_buffer* FUNC_6 (int) ;

int FUNC_7(struct e1000_ring *VAR_3)
{
 struct e1000_adapter *VAR_4 = VAR_3->adapter;
 struct e1000_buffer *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9 = -VAR_0;

 VAR_7 = sizeof(struct e1000_buffer) * VAR_3->count;
 VAR_3->buffer_info = FUNC_6(VAR_7);
 if (!VAR_3->buffer_info)
  goto err;

 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++) {
  VAR_5 = &VAR_3->buffer_info[VAR_6];
  VAR_5->ps_pages = FUNC_3(VAR_2,
      sizeof(struct e1000_ps_page),
      VAR_1);
  if (!VAR_5->ps_pages)
   goto err_pages;
 }

 VAR_8 = sizeof(union e1000_rx_desc_packet_split);


 VAR_3->size = VAR_3->count * VAR_8;
 VAR_3->size = FUNC_0(VAR_3->size, 4096);

 VAR_9 = FUNC_1(VAR_4, VAR_3);
 if (VAR_9)
  goto err_pages;

 VAR_3->next_to_clean = 0;
 VAR_3->next_to_use = 0;
 VAR_3->rx_skb_top = ((void*)0);

 return 0;

err_pages:
 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++) {
  VAR_5 = &VAR_3->buffer_info[VAR_6];
  FUNC_4(VAR_5->ps_pages);
 }
err:
 FUNC_5(VAR_3->buffer_info);
 FUNC_2("Unable to allocate memory for the receive descriptor ring\n");
 return VAR_9;
}
