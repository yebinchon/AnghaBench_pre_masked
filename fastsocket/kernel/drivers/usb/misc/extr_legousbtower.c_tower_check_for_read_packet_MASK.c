
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lego_usb_tower {scalar_t__ read_buffer_length; scalar_t__ read_packet_length; int read_buffer_lock; scalar_t__ interrupt_in_done; scalar_t__ packet_timeout_jiffies; scalar_t__ read_last_arrival; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (struct lego_usb_tower *VAR_3)
{
 FUNC_0 (&VAR_3->read_buffer_lock);
 if (!VAR_1
     || FUNC_2(VAR_0, VAR_3->read_last_arrival + VAR_3->packet_timeout_jiffies)
     || VAR_3->read_buffer_length == VAR_2) {
  VAR_3->read_packet_length = VAR_3->read_buffer_length;
 }
 VAR_3->interrupt_in_done = 0;
 FUNC_1 (&VAR_3->read_buffer_lock);
}
