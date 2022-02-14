
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct IsdnCardState {int debug; } ;
struct TYPE_3__ {scalar_t__ rcvidx; scalar_t__ hscx; int * rcvbuf; } ;
struct TYPE_4__ {TYPE_1__ hscx; } ;
struct BCState {char* blog; TYPE_2__ hw; struct IsdnCardState* cs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,scalar_t__,int *,int) ;
 int FUNC_2 (struct IsdnCardState*,scalar_t__,int) ;
 int FUNC_3 (struct IsdnCardState*,char*) ;
 int FUNC_4 (char*,char*,char,int) ;

__attribute__((used)) static void
FUNC_5(struct BCState *VAR_4, int VAR_5)
{
 u_char *VAR_6;
 struct IsdnCardState *VAR_7 = VAR_4->cs;

 if ((VAR_7->debug & VAR_1) && !(VAR_7->debug & VAR_2))
  FUNC_3(VAR_7, "hscx_empty_fifo");

 if (VAR_4->hw.hscx.rcvidx + VAR_5 > VAR_0) {
  if (VAR_7->debug & VAR_3)
   FUNC_3(VAR_7, "hscx_empty_fifo: incoming packet too large");
  FUNC_2(VAR_7, VAR_4->hw.hscx.hscx, 0x80);
  VAR_4->hw.hscx.rcvidx = 0;
  return;
 }
 VAR_6 = VAR_4->hw.hscx.rcvbuf + VAR_4->hw.hscx.rcvidx;
 VAR_4->hw.hscx.rcvidx += VAR_5;
 FUNC_1(VAR_7, VAR_4->hw.hscx.hscx, VAR_6, VAR_5);
 FUNC_2(VAR_7, VAR_4->hw.hscx.hscx, 0x80);
 if (VAR_7->debug & VAR_2) {
  char *VAR_8 = VAR_4->blog;

  VAR_8 += FUNC_4(VAR_8, "hscx_empty_fifo %c cnt %d",
        VAR_4->hw.hscx.hscx ? 'B' : 'A', VAR_5);
  FUNC_0(VAR_8, VAR_6, VAR_5);
  FUNC_3(VAR_7, VAR_4->blog);
 }
}
