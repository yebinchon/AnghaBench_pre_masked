
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iobase; } ;
struct TYPE_4__ {TYPE_1__ w6692; } ;
struct IsdnCardState {int (* writeW6692 ) (struct IsdnCardState*,int ,int) ;int subtyp; TYPE_2__ hw; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct IsdnCardState *VAR_3, int VAR_4, void *VAR_5)
{
 switch (VAR_4) {
  case 129:
   FUNC_2(VAR_3);
   return (0);
  case 130:
   VAR_3->writeW6692(VAR_3, VAR_1, 0xff);
   FUNC_1(VAR_3->hw.w6692.iobase, 256);
   if (VAR_3->subtyp == VAR_0) {
    VAR_3->writeW6692(VAR_3, VAR_2, 0x04);
   }
   return (0);
  case 131:
   FUNC_0(VAR_3, 3);
   return (0);
  case 128:
   return (0);
 }
 return (0);
}
