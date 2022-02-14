
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flow_divert_pcb {int flags; TYPE_1__* so; } ;
struct TYPE_2__ {int so_snd; } ;
typedef scalar_t__ Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct flow_divert_pcb *VAR_7, int VAR_8, Boolean VAR_9)
{
 if (VAR_8 != VAR_5) {
  VAR_7->flags |= VAR_4;
  if (VAR_9 || !(VAR_7->flags & VAR_0)) {
   VAR_7->flags |= VAR_3;

   FUNC_0(&VAR_7->so->so_snd);
  }
 }
 if (VAR_8 != VAR_6) {
  VAR_7->flags |= VAR_1;
  if (VAR_9 || !(VAR_7->flags & VAR_0)) {
   VAR_7->flags |= VAR_2;
  }
 }
}
