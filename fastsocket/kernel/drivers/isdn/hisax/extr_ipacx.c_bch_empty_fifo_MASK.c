
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; int (* BC_Write_Reg ) (struct IsdnCardState*,int,int ,int) ;int (* BC_Read_Reg ) (struct IsdnCardState*,int,int ) ;} ;
struct TYPE_3__ {int hscx; scalar_t__ rcvidx; int* rcvbuf; } ;
struct TYPE_4__ {TYPE_1__ hscx; } ;
struct BCState {char* blog; TYPE_2__ hw; struct IsdnCardState* cs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (struct IsdnCardState*,char*) ;
 int FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 (struct IsdnCardState*,int,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int,int ) ;
 int FUNC_5 (struct IsdnCardState*,int,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct BCState *VAR_6, int VAR_7)
{
 u_char *VAR_8, VAR_9;
 struct IsdnCardState *VAR_10;
 int VAR_11;

 VAR_10 = VAR_6->cs;
  VAR_9 = VAR_6->hw.hscx.hscx;
 if ((VAR_10->debug &VAR_3) && !(VAR_10->debug &VAR_4))
  FUNC_1(VAR_10, "bch_empty_fifo()");


 if (VAR_6->hw.hscx.rcvidx + VAR_7 > VAR_0) {
  if (VAR_10->debug &VAR_5)
   FUNC_1(VAR_10, "bch_empty_fifo() incoming packet too large");
   VAR_10->BC_Write_Reg(VAR_10, VAR_9, VAR_1, 0x80);
  VAR_6->hw.hscx.rcvidx = 0;
  return;
 }

 VAR_8 = VAR_6->hw.hscx.rcvbuf + VAR_6->hw.hscx.rcvidx;
 VAR_11 = VAR_7;
 while (VAR_11--) *VAR_8++ = VAR_10->BC_Read_Reg(VAR_10, VAR_9, VAR_2);
 VAR_10->BC_Write_Reg(VAR_10, VAR_9, VAR_1, 0x80);

 VAR_8 = VAR_6->hw.hscx.rcvbuf + VAR_6->hw.hscx.rcvidx;
 VAR_6->hw.hscx.rcvidx += VAR_7;

 if (VAR_10->debug &VAR_4) {
  char *VAR_12 = VAR_6->blog;

  VAR_12 += FUNC_2(VAR_12, "bch_empty_fifo() B-%d cnt %d", VAR_9, VAR_7);
  FUNC_0(VAR_12, VAR_8, VAR_7);
  FUNC_1(VAR_10, VAR_6->blog);
 }
}
