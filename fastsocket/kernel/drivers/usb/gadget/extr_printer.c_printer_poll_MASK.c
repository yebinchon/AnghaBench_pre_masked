
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer_dev {int current_rx_bytes; int lock; int rx_buffers; int tx_reqs; int tx_wait; int rx_wait; int lock_printer_io; } ;
struct file {struct printer_dev* private_data; } ;
typedef int poll_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (struct printer_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_8(struct file *VAR_4, poll_table *VAR_5)
{
 struct printer_dev *VAR_6 = VAR_4->private_data;
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_4(&VAR_6->lock_printer_io);
 FUNC_5(&VAR_6->lock, VAR_7);
 FUNC_3(VAR_6);
 FUNC_7(&VAR_6->lock, VAR_7);
 FUNC_6(&VAR_6->lock_printer_io);

 FUNC_2(VAR_4, &VAR_6->rx_wait, VAR_5);
 FUNC_2(VAR_4, &VAR_6->tx_wait, VAR_5);

 FUNC_5(&VAR_6->lock, VAR_7);
 if (FUNC_0(!FUNC_1(&VAR_6->tx_reqs)))
  VAR_8 |= VAR_1 | VAR_3;

 if (FUNC_0(VAR_6->current_rx_bytes) ||
   FUNC_0(!FUNC_1(&VAR_6->rx_buffers)))
  VAR_8 |= VAR_0 | VAR_2;

 FUNC_7(&VAR_6->lock, VAR_7);

 return VAR_8;
}
