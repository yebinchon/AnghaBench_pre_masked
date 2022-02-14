
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct IsdnCardState {int debug; scalar_t__ rcvidx; char* dlog; int (* writeW6692 ) (struct IsdnCardState*,int ,int ) ;int (* readW6692fifo ) (struct IsdnCardState*,int *,int) ;int * rcvbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct IsdnCardState*,char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct IsdnCardState*,int ,int ) ;
 int FUNC_4 (struct IsdnCardState*,int *,int) ;
 int FUNC_5 (struct IsdnCardState*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct IsdnCardState *VAR_6, int VAR_7)
{
 u_char *VAR_8;

 if ((VAR_6->debug & VAR_0) && !(VAR_6->debug & VAR_1))
  FUNC_1(VAR_6, "W6692_empty_fifo");

 if ((VAR_6->rcvidx + VAR_7) >= VAR_3) {
  if (VAR_6->debug & VAR_2)
   FUNC_1(VAR_6, "W6692_empty_fifo overrun %d",
    VAR_6->rcvidx + VAR_7);
  VAR_6->writeW6692(VAR_6, VAR_4, VAR_5);
  VAR_6->rcvidx = 0;
  return;
 }
 VAR_8 = VAR_6->rcvbuf + VAR_6->rcvidx;
 VAR_6->rcvidx += VAR_7;
 VAR_6->readW6692fifo(VAR_6, VAR_8, VAR_7);
 VAR_6->writeW6692(VAR_6, VAR_4, VAR_5);
 if (VAR_6->debug & VAR_1) {
  char *VAR_9 = VAR_6->dlog;

  VAR_9 += FUNC_2(VAR_9, "W6692_empty_fifo cnt %d", VAR_7);
  FUNC_0(VAR_9, VAR_8, VAR_7);
  FUNC_1(VAR_6, VAR_6->dlog);
 }
}
