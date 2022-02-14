
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_tranzport {scalar_t__ ring_head; scalar_t__ ring_tail; int interrupt_out_busy; int write_wait; int read_wait; } ;
struct file {struct usb_tranzport* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_4, poll_table * VAR_5)
{
 struct usb_tranzport *VAR_6;
 unsigned int VAR_7 = 0;
 VAR_6 = VAR_4->private_data;
 FUNC_0(VAR_4, &VAR_6->read_wait, VAR_5);
 FUNC_0(VAR_4, &VAR_6->write_wait, VAR_5);
 if (VAR_6->ring_head != VAR_6->ring_tail)
  VAR_7 |= VAR_0 | VAR_2;
 if (!VAR_6->interrupt_out_busy)
  VAR_7 |= VAR_1 | VAR_3;
 return VAR_7;
}
