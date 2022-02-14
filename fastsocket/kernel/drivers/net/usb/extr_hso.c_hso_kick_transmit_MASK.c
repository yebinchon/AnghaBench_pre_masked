
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hso_serial {int tx_urb_used; int (* write_data ) (struct hso_serial*) ;int serial_lock; scalar_t__ tx_buffer_count; scalar_t__ tx_data_count; int * tx_data; int * tx_buffer; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct hso_serial*) ;

__attribute__((used)) static void FUNC_4(struct hso_serial *VAR_1)
{
 u8 *VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_1->serial_lock, VAR_3);
 if (!VAR_1->tx_buffer_count)
  goto out;

 if (VAR_1->tx_urb_used)
  goto out;


 if (FUNC_0(VAR_1->parent) == -VAR_0)
  goto out;


 VAR_2 = VAR_1->tx_buffer;
 VAR_1->tx_buffer = VAR_1->tx_data;
 VAR_1->tx_data = VAR_2;
 VAR_1->tx_data_count = VAR_1->tx_buffer_count;
 VAR_1->tx_buffer_count = 0;


 if (VAR_2 && VAR_1->write_data) {
  VAR_4 = VAR_1->write_data(VAR_1);
  if (VAR_4 >= 0)
   VAR_1->tx_urb_used = 1;
 }
out:
 FUNC_2(&VAR_1->serial_lock, VAR_3);
}
