
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct urb {int transfer_flags; scalar_t__ actual_length; scalar_t__ transfer_buffer_length; int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct urb *VAR_11, u32 VAR_12)
{
 if (VAR_12 & VAR_8) {
  if (VAR_12 & VAR_7)
   return FUNC_0(VAR_11->pipe) ? -VAR_1 : -VAR_0;
  else if (VAR_12 & VAR_6)
   return -VAR_2;
  else if (VAR_12 & VAR_9)
   return -VAR_5;
  return -VAR_3;
 }
 if (FUNC_0(VAR_11->pipe)
     && (VAR_11->transfer_flags & VAR_10)
     && VAR_11->actual_length < VAR_11->transfer_buffer_length)
  return -VAR_4;
 return 0;
}
