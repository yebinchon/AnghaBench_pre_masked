
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_65xx_board {int dummy; } ;
struct comedi_device {struct ni_65xx_board const* board_ptr; } ;



__attribute__((used)) static inline const struct ni_65xx_board *FUNC_0(struct comedi_device *VAR_0)
{
 return VAR_0->board_ptr;
}
