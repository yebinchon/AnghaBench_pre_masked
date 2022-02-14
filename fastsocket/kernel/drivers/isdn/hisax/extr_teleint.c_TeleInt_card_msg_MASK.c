
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {int expires; } ;
struct TYPE_4__ {TYPE_3__ timer; } ;
struct TYPE_5__ {TYPE_1__ hfc; } ;
struct IsdnCardState {TYPE_2__ hw; int lock; int (* writeisac ) (struct IsdnCardState*,int ,int) ;} ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int VAR_3 ;
 int FUNC_4 (struct IsdnCardState*) ;
 int FUNC_5 (struct IsdnCardState*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct IsdnCardState*,int ,int) ;
 int FUNC_9 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct IsdnCardState *VAR_4, int VAR_5, void *VAR_6)
{
 u_long VAR_7;
 int VAR_8;

 switch (VAR_5) {
  case 129:
   FUNC_6(&VAR_4->lock, VAR_7);
   FUNC_5(VAR_4);
   FUNC_7(&VAR_4->lock, VAR_7);
   return(0);
  case 130:
   FUNC_4(VAR_4);
   return(0);
  case 131:
   FUNC_6(&VAR_4->lock, VAR_7);
   FUNC_5(VAR_4);
   FUNC_2(VAR_4);
   FUNC_1(VAR_4);
   FUNC_3(VAR_4);

   VAR_4->writeisac(VAR_4, VAR_2, 0);
   VAR_4->writeisac(VAR_4, VAR_1, 0x41);
   FUNC_7(&VAR_4->lock, VAR_7);
   VAR_8 = VAR_0/100;
   if (!VAR_8)
    VAR_8 = 1;
   VAR_4->hw.hfc.timer.expires = VAR_3 + VAR_8;
   FUNC_0(&VAR_4->hw.hfc.timer);
   return(0);
  case 128:
   return(0);
 }
 return(0);
}
