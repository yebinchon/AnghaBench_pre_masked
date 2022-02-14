
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct IsdnCardState {int lock; int (* writeisac ) (struct IsdnCardState*,int ,int) ;} ;
struct TYPE_4__ {scalar_t__ command; int arg; } ;
typedef TYPE_1__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*,TYPE_1__*) ;
 int FUNC_2 (struct IsdnCardState*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct IsdnCardState*,int ,int) ;
 int FUNC_6 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct IsdnCardState *VAR_6, isdn_ctrl *VAR_7) {
 int VAR_8;
 u_long VAR_9;

 if ((VAR_7->command == VAR_2) && (VAR_7->arg == 9)) {
  VAR_8 = FUNC_1(VAR_6, VAR_7);
  FUNC_3(&VAR_6->lock, VAR_9);
  if (!VAR_8) {
   FUNC_2(VAR_6, VAR_5 | VAR_4 |
    VAR_3);
   FUNC_0(VAR_6);
   VAR_6->writeisac(VAR_6, VAR_1, 0);
   VAR_6->writeisac(VAR_6, VAR_0, 0x41);
  }
  FUNC_4(&VAR_6->lock, VAR_9);
  return(VAR_8);
 }
 return(FUNC_1(VAR_6, VAR_7));
}
