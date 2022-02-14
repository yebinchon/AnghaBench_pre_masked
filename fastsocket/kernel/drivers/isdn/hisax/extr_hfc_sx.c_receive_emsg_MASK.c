
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct sk_buff {int len; int data; } ;
struct IsdnCardState {int debug; int HW_Flags; scalar_t__* dlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,char*,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (struct IsdnCardState*,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct IsdnCardState*,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct IsdnCardState *VAR_4)
{
 int VAR_5 = 5;
 u_char *VAR_6;
 struct sk_buff *VAR_7;

 if (FUNC_6(VAR_1, &VAR_4->HW_Flags)) {
  FUNC_2(VAR_4, "echo_rec_data blocked");
  return;
 }
 do {
   VAR_7 = FUNC_4(VAR_4, VAR_2, 0);
   if (VAR_7) {
     if (VAR_4->debug & VAR_0) {
       VAR_6 = VAR_4->dlog;
       if ((VAR_7->len) < VAR_3 / 3 - 10) {
  *VAR_6++ = 'E';
  *VAR_6++ = 'C';
  *VAR_6++ = 'H';
  *VAR_6++ = 'O';
  *VAR_6++ = ':';
  VAR_6 += FUNC_1(VAR_6, VAR_7->data, VAR_7->len);
  VAR_6--;
  *VAR_6++ = '\n';
  *VAR_6 = 0;
  FUNC_0(VAR_4, ((void*)0), VAR_4->dlog);
       } else
  FUNC_0(VAR_4, "LogEcho: ", "warning Frame too big (%d)", VAR_7->len);
     }
     FUNC_3(VAR_7);
   }
 } while (--VAR_5 && VAR_7);

 FUNC_5(VAR_1, &VAR_4->HW_Flags);
 return;
}
