
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld_usb {scalar_t__ ring_head; scalar_t__ ring_tail; int interrupt_out_busy; int write_wait; int read_wait; int intf; } ;
struct file {struct ld_usb* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_6, poll_table *VAR_7)
{
 struct ld_usb *VAR_8;
 unsigned int VAR_9 = 0;

 VAR_8 = VAR_6->private_data;

 if (!VAR_8->intf)
  return VAR_0 | VAR_1;

 FUNC_0(VAR_6, &VAR_8->read_wait, VAR_7);
 FUNC_0(VAR_6, &VAR_8->write_wait, VAR_7);

 if (VAR_8->ring_head != VAR_8->ring_tail)
  VAR_9 |= VAR_2 | VAR_4;
 if (!VAR_8->interrupt_out_busy)
  VAR_9 |= VAR_3 | VAR_5;

 return VAR_9;
}
