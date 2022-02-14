
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
 int FUNC_2 (struct IsdnCardState*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct IsdnCardState*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char*,char,int) ;

__attribute__((used)) static void
FUNC_5(struct BCState *VAR_6, int VAR_7)
{
 u_char *VAR_8;
 struct IsdnCardState *VAR_9 = VAR_6->cs;

 if ((VAR_9->debug & VAR_1) && !(VAR_9->debug & VAR_2))
  FUNC_3(VAR_9, "jade_empty_fifo");

 if (VAR_6->hw.hscx.rcvidx + VAR_7 > VAR_0) {
  if (VAR_9->debug & VAR_3)
   FUNC_3(VAR_9, "jade_empty_fifo: incoming packet too large");
  FUNC_2(VAR_9, VAR_6->hw.hscx.hscx, VAR_5, VAR_4);
  VAR_6->hw.hscx.rcvidx = 0;
  return;
 }
 VAR_8 = VAR_6->hw.hscx.rcvbuf + VAR_6->hw.hscx.rcvidx;
 VAR_6->hw.hscx.rcvidx += VAR_7;
 FUNC_1(VAR_9, VAR_6->hw.hscx.hscx, VAR_8, VAR_7);
 FUNC_2(VAR_9, VAR_6->hw.hscx.hscx, VAR_5, VAR_4);
 if (VAR_9->debug & VAR_2) {
  char *VAR_10 = VAR_6->blog;

  VAR_10 += FUNC_4(VAR_10, "jade_empty_fifo %c cnt %d",
        VAR_6->hw.hscx.hscx ? 'B' : 'A', VAR_7);
  FUNC_0(VAR_10, VAR_8, VAR_7);
  FUNC_3(VAR_9, VAR_6->blog);
 }
}
