
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;} ;
struct TYPE_3__ {scalar_t__ rcvidx; int * rcvbuf; } ;
struct TYPE_4__ {TYPE_1__ w6692; } ;
struct BCState {int channel; char* blog; TYPE_2__ hw; struct IsdnCardState* cs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,int,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct IsdnCardState*,char*) ;
 int FUNC_3 (char*,char*,int,int) ;
 int FUNC_4 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct BCState *VAR_7, int VAR_8)
{
 u_char *VAR_9;
 struct IsdnCardState *VAR_10 = VAR_7->cs;

 if ((VAR_10->debug & VAR_1) && !(VAR_10->debug & VAR_2))
  FUNC_2(VAR_10, "W6692B_empty_fifo");

 if (VAR_7->hw.w6692.rcvidx + VAR_8 > VAR_0) {
  if (VAR_10->debug & VAR_3)
   FUNC_2(VAR_10, "W6692B_empty_fifo: incoming packet too large");
  VAR_10->BC_Write_Reg(VAR_10, VAR_7->channel, VAR_4, VAR_5 | VAR_6);
  VAR_7->hw.w6692.rcvidx = 0;
  return;
 }
 VAR_9 = VAR_7->hw.w6692.rcvbuf + VAR_7->hw.w6692.rcvidx;
 VAR_7->hw.w6692.rcvidx += VAR_8;
 FUNC_1(VAR_10, VAR_7->channel, VAR_9, VAR_8);
 VAR_10->BC_Write_Reg(VAR_10, VAR_7->channel, VAR_4, VAR_5 | VAR_6);
 if (VAR_10->debug & VAR_2) {
  char *VAR_11 = VAR_7->blog;

  VAR_11 += FUNC_3(VAR_11, "W6692B_empty_fifo %c cnt %d",
        VAR_7->channel + '1', VAR_8);
  FUNC_0(VAR_11, VAR_9, VAR_8);
  FUNC_2(VAR_10, VAR_7->blog);
 }
}
