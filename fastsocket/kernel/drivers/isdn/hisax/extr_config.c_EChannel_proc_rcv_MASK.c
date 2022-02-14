
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct sk_buff {int len; int data; } ;
struct hisax_d_if {int erq; struct IsdnCardState* cs; } ;
struct IsdnCardState {int debug; scalar_t__* dlog; } ;


 int VAR_0 ;
 int FUNC_0 (struct IsdnCardState*,char*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hisax_d_if *VAR_2)
{
 struct IsdnCardState *VAR_3 = VAR_2->cs;
 u_char *VAR_4;
 struct sk_buff *VAR_5;

 while ((VAR_5 = FUNC_3(&VAR_2->erq)) != ((void*)0)) {
  if (VAR_3->debug & VAR_0) {
   VAR_4 = VAR_3->dlog;
   if ((VAR_5->len) < VAR_1 / 3 - 10) {
    *VAR_4++ = 'E';
    *VAR_4++ = 'C';
    *VAR_4++ = 'H';
    *VAR_4++ = 'O';
    *VAR_4++ = ':';
    VAR_4 += FUNC_1(VAR_4, VAR_5->data, VAR_5->len);
    VAR_4--;
    *VAR_4++ = '\n';
    *VAR_4 = 0;
    FUNC_0(VAR_3, ((void*)0), VAR_3->dlog);
   } else
    FUNC_0(VAR_3, "LogEcho: ",
      "warning Frame too big (%d)",
      VAR_5->len);
  }
  FUNC_2(VAR_5);
 }
}
