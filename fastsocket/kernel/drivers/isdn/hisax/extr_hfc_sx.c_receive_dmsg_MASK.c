
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct IsdnCardState {int HW_Flags; int rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,char*) ;
 struct sk_buff* FUNC_1 (struct IsdnCardState*,int ,int ) ;
 int FUNC_2 (struct IsdnCardState*,int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static
int
FUNC_6(struct IsdnCardState *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5 = 5;

 if (FUNC_5(VAR_1, &VAR_3->HW_Flags)) {
  FUNC_0(VAR_3, "rec_dmsg blocked");
  return (1);
 }

 do {
   VAR_4 = FUNC_1(VAR_3, VAR_2, 0);
   if (VAR_4) {
     FUNC_3(&VAR_3->rq, VAR_4);
     FUNC_2(VAR_3, VAR_0);
   }
 } while (--VAR_5 && VAR_4);

 FUNC_4(VAR_1, &VAR_3->HW_Flags);
 return (1);
}
