
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ number_of_packets; scalar_t__ transfer_buffer_length; scalar_t__ actual_length; int pipe; } ;
struct r8a66597_td {scalar_t__ iso_cnt; scalar_t__ zero_packet; scalar_t__ short_packet; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct r8a66597_td *VAR_0, struct urb *VAR_1)
{
 if (FUNC_0(VAR_1->pipe)) {
  if (VAR_1->number_of_packets == VAR_0->iso_cnt)
   return 1;
 }


 if ((VAR_1->transfer_buffer_length <= VAR_1->actual_length) ||
     (VAR_0->short_packet) || (VAR_0->zero_packet))
  return 1;

 return 0;
}
