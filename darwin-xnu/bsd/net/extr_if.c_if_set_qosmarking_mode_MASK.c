
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct kev_dl_rrc_state {int dummy; } ;
struct ifnet {int if_qosmarking_mode; int if_eflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifnet*,int ,int ,int *,int) ;
 int VAR_5 ;

int
FUNC_1(struct ifnet *VAR_6, u_int32_t VAR_7)
{
 int VAR_8 = 0;
 u_int32_t VAR_9 = VAR_6->if_qosmarking_mode;

 switch (VAR_7) {
  case 128:
   VAR_6->if_qosmarking_mode = 128;
   VAR_6->if_eflags &= ~VAR_1;
   break;
  case 129:
   VAR_6->if_qosmarking_mode = 129;
   VAR_6->if_eflags |= VAR_1;
   if (VAR_5 != 0)
    VAR_6->if_eflags |= VAR_2;
   break;
  default:
   VAR_8 = VAR_0;
   break;
 }
 if (VAR_8 == 0 && VAR_9 != VAR_6->if_qosmarking_mode) {
  FUNC_0(VAR_6, VAR_4, VAR_3,
      ((void*)0), sizeof(struct kev_dl_rrc_state));

 }
 return (VAR_8);
}
