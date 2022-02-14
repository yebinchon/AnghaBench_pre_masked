
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpdi_board {int dummy; } ;
struct comedi_device {scalar_t__ board_ptr; } ;



__attribute__((used)) static inline struct hpdi_board *FUNC_0(const struct comedi_device *VAR_0)
{
 return (struct hpdi_board *)VAR_0->board_ptr;
}
