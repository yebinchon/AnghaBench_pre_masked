
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct socket {int so_flags; struct flow_divert_pcb* so_fd_pcb; } ;
struct flow_divert_pcb {int control_group_unit; } ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct flow_divert_pcb*,char*,scalar_t__) ;
 int FUNC_1 (int ,struct flow_divert_pcb*,char*) ;
 int FUNC_2 (struct flow_divert_pcb*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int VAR_6 ;
 struct flow_divert_pcb* FUNC_4 (struct socket*) ;
 scalar_t__ FUNC_5 (struct flow_divert_pcb*,int ) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*) ;

errno_t
FUNC_8(struct socket *VAR_7, uint32_t VAR_8)
{
 errno_t VAR_9 = 0;
 struct flow_divert_pcb *VAR_10;

 if (VAR_7->so_flags & VAR_6) {
  return VAR_0;
 }

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10 != ((void*)0)) {
  VAR_9 = FUNC_5(VAR_10, VAR_8);
  if (VAR_9) {
   FUNC_0(VAR_2, VAR_10, "pcb insert failed: %d", VAR_9);
   FUNC_2(VAR_10);
  } else {
   VAR_10->control_group_unit = VAR_8;
   VAR_7->so_fd_pcb = VAR_10;

   if (FUNC_3(VAR_7) == VAR_5) {
    FUNC_6(VAR_7);
   } else if (FUNC_3(VAR_7) == VAR_4) {
    FUNC_7(VAR_7);
   }

   FUNC_1(VAR_3, VAR_10, "Created");
  }
 } else {
  VAR_9 = VAR_1;
 }

 return VAR_9;
}
