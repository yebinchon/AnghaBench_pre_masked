
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct IsdnCardState {int debug; scalar_t__ rcvidx; char* dlog; int (* writeisac ) (struct IsdnCardState*,int ,int) ;int (* readisacfifo ) (struct IsdnCardState*,int *,int) ;int * rcvbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (struct IsdnCardState*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct IsdnCardState*,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int *,int) ;
 int FUNC_5 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct IsdnCardState *VAR_5, int VAR_6)
{
 u_char *VAR_7;

 if ((VAR_5->debug &VAR_1) && !(VAR_5->debug &VAR_2))
  FUNC_1(VAR_5, "dch_empty_fifo()");


 if ((VAR_5->rcvidx + VAR_6) >= VAR_4) {
  if (VAR_5->debug &VAR_3)
   FUNC_1(VAR_5, "dch_empty_fifo() incoming message too large");
   VAR_5->writeisac(VAR_5, VAR_0, 0x80);
  VAR_5->rcvidx = 0;
  return;
 }

 VAR_7 = VAR_5->rcvbuf + VAR_5->rcvidx;
 VAR_5->rcvidx += VAR_6;

 VAR_5->readisacfifo(VAR_5, VAR_7, VAR_6);
 VAR_5->writeisac(VAR_5, VAR_0, 0x80);

 if (VAR_5->debug &VAR_2) {
  char *VAR_8 = VAR_5->dlog;

  VAR_8 += FUNC_2(VAR_8, "dch_empty_fifo() cnt %d", VAR_6);
  FUNC_0(VAR_8, VAR_7, VAR_6);
  FUNC_1(VAR_5, VAR_5->dlog);
 }
}
