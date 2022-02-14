
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int HW_Flags; } ;
struct BCState {int channel; struct IsdnCardState* cs; } ;


 int VAR_0 ;
 int FUNC_0 (struct IsdnCardState*,char*,int ) ;
 int FUNC_1 (struct BCState*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct BCState *VAR_1)
{
 struct IsdnCardState *VAR_2 = VAR_1->cs;

 if (!FUNC_3(VAR_0, &VAR_2->HW_Flags)) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_0, &VAR_2->HW_Flags);
 } else
  FUNC_0(VAR_2,"send_data %d blocked", VAR_1->channel);
}
