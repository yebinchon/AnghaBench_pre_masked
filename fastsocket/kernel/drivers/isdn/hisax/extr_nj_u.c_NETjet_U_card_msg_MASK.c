
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct IsdnCardState {int lock; int (* writeisac ) (struct IsdnCardState*,int ,int ) ;} ;






 int VAR_0 ;
 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (struct IsdnCardState*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct IsdnCardState*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct IsdnCardState *VAR_1, int VAR_2, void *VAR_3)
{
 u_long VAR_4;

 switch (VAR_2) {
  case 129:
   FUNC_5(&VAR_1->lock, VAR_4);
   FUNC_4(VAR_1);
   FUNC_6(&VAR_1->lock, VAR_4);
   return(0);
  case 130:
   FUNC_3(VAR_1);
   return(0);
  case 131:
   FUNC_5(&VAR_1->lock, VAR_4);
   FUNC_2(VAR_1);
   FUNC_4(VAR_1);
   FUNC_0(VAR_1);
   FUNC_1(VAR_1);

   VAR_1->writeisac(VAR_1, VAR_0, 0);
   FUNC_6(&VAR_1->lock, VAR_4);
   return(0);
  case 128:
   return(0);
 }
 return(0);
}
