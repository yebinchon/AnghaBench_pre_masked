
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_counter; int r12; scalar_t__ fifo_bytes; int fifo_line_bytes; scalar_t__ fifo_bytes_prev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
  VAR_2.line_counter++;


  if ((VAR_2.r12 & 0x4003) && VAR_2.line_counter - VAR_4 > 200) {
    VAR_4 = VAR_2.line_counter;

    FUNC_1(VAR_0, "irq3");
    FUNC_0(3);
    return;
  }


  if (VAR_2.fifo_bytes > 0)
  {
    VAR_2.fifo_line_bytes += VAR_3;
    if (VAR_2.fifo_line_bytes >= (1<<16)) {
      VAR_2.fifo_bytes -= VAR_2.fifo_line_bytes >> 16;
      VAR_2.fifo_line_bytes &= 0xffff;
      if (VAR_2.fifo_bytes < 0)
        VAR_2.fifo_bytes = 0;
    }
  }
  else
    VAR_2.fifo_line_bytes = 0;


  if (VAR_2.fifo_bytes_prev >= VAR_1 &&
      VAR_2.fifo_bytes < VAR_1) {
    VAR_4 = VAR_2.line_counter;
    FUNC_1(VAR_0, "irq3, fb=%i", VAR_2.fifo_bytes);
    FUNC_0(3);
  }
  VAR_2.fifo_bytes_prev = VAR_2.fifo_bytes;
}
