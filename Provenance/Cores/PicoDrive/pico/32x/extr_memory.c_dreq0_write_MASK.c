
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int dmac0_fifo_ptr; int * dmac_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(u16 *VAR_6, u32 VAR_7)
{
  if (!(VAR_6[6 / 2] & VAR_3)) {
    FUNC_1(VAR_1|VAR_2, "DREQ FIFO w16 without 68S?");
    return;
  }
  if (VAR_5.dmac0_fifo_ptr < VAR_0) {
    VAR_5.dmac_fifo[VAR_5.dmac0_fifo_ptr++] = VAR_7;
    if (VAR_5.dmac0_fifo_ptr == VAR_0)
      VAR_6[6 / 2] |= VAR_4;


    VAR_6[0x10 / 2]--;
    if (VAR_6[0x10 / 2] == 0)
      VAR_6[6 / 2] &= ~VAR_3;

    if ((VAR_5.dmac0_fifo_ptr & 3) == 0) {
      FUNC_3(FUNC_0());
      FUNC_2();
    }
  }
  else
    FUNC_1(VAR_1|VAR_2, "DREQ FIFO overflow!");
}
