
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct IsdnCardState {int lock; } ;






 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct IsdnCardState *VAR_0, int VAR_1, void *VAR_2)
{
 u_long VAR_3;

 switch (VAR_1) {
  case 129:
   return(0);
  case 130:
   FUNC_2(VAR_0);
   return(0);
  case 131:
   FUNC_3(&VAR_0->lock, VAR_3);
   FUNC_0(VAR_0);
   FUNC_1(VAR_0, 3);
   FUNC_4(&VAR_0->lock, VAR_3);
   return(0);
  case 128:
   return(0);
 }
 return(0);
}
