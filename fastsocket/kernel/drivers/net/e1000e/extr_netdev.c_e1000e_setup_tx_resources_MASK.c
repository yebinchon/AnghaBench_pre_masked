
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_tx_desc {int dummy; } ;
struct e1000_ring {int count; int size; int buffer_info; scalar_t__ next_to_clean; scalar_t__ next_to_use; struct e1000_adapter* adapter; } ;
struct e1000_buffer {int dummy; } ;
struct e1000_adapter {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct e1000_adapter*,struct e1000_ring*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

int FUNC_5(struct e1000_ring *VAR_1)
{
 struct e1000_adapter *VAR_2 = VAR_1->adapter;
 int VAR_3 = -VAR_0, VAR_4;

 VAR_4 = sizeof(struct e1000_buffer) * VAR_1->count;
 VAR_1->buffer_info = FUNC_4(VAR_4);
 if (!VAR_1->buffer_info)
  goto err;


 VAR_1->size = VAR_1->count * sizeof(struct e1000_tx_desc);
 VAR_1->size = FUNC_0(VAR_1->size, 4096);

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3)
  goto err;

 VAR_1->next_to_use = 0;
 VAR_1->next_to_clean = 0;

 return 0;
err:
 FUNC_3(VAR_1->buffer_info);
 FUNC_2("Unable to allocate memory for the transmit descriptor ring\n");
 return VAR_3;
}
