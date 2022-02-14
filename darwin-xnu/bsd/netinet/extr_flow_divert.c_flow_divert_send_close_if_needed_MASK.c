
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flow_divert_pcb {int flags; TYPE_2__* so; } ;
struct TYPE_3__ {scalar_t__ sb_cc; } ;
struct TYPE_4__ {TYPE_1__ so_snd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct flow_divert_pcb*,int) ;
 int FUNC_3 (struct flow_divert_pcb*) ;

__attribute__((used)) static void
FUNC_4(struct flow_divert_pcb *VAR_9)
{
 int VAR_10 = -1;


 if (VAR_9->so->so_snd.sb_cc == 0) {
  if ((VAR_9->flags & (VAR_1|VAR_2)) == VAR_1) {

   VAR_10 = VAR_6;
  }
  if ((VAR_9->flags & (VAR_4|VAR_3)) == VAR_4) {

   if (VAR_10 == VAR_6) {
    VAR_10 = VAR_7;
   } else {
    VAR_10 = VAR_8;
   }
  }
 }

 if (VAR_10 != -1) {
  FUNC_0(VAR_5, VAR_9, "sending close, how = %d", VAR_10);
  if (FUNC_2(VAR_9, VAR_10) != VAR_0) {

   if (VAR_10 != VAR_6) {
    VAR_9->flags |= VAR_3;
   }
   if (VAR_10 != VAR_8) {
    VAR_9->flags |= VAR_2;
   }
  }
 }

 if (FUNC_3(VAR_9) == VAR_7) {
  FUNC_1(VAR_9->so);
 }
}
