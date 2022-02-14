
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct proc {int dummy; } ;
struct ifnet {int dummy; } ;
struct if_agentidsreq64 {int ifar_uuids; int ifar_count; } ;
struct if_agentidsreq32 {int ifar_uuids; int ifar_count; } ;
struct if_agentidreq {int ifar_uuid; } ;
typedef struct if_agentidsreq64* caddr_t ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct if_agentidsreq64*,struct if_agentidsreq64*,int) ;
 int FUNC_2 (struct ifnet*,int ) ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct ifnet*,int *,int ) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,int) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct proc*) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_11(struct ifnet *VAR_1, u_long VAR_2, caddr_t VAR_3, struct proc *VAR_4)
{
 struct if_agentidreq *VAR_5 = (struct if_agentidreq *)(void *)VAR_3;
 union {
  struct if_agentidsreq32 s32;
  struct if_agentidsreq64 s64;
 } VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_1 != ((void*)0));


 if (!FUNC_6(VAR_1, 1)) {
  return (VAR_0);
 }

 if (VAR_2 == 131 ||
  VAR_2 == 130) {
  FUNC_8(VAR_1);
 } else {
  FUNC_9(VAR_1);
 }

 switch (VAR_2) {
  case 131: {

   if ((VAR_7 = FUNC_10(VAR_4)) != 0) {
    break;
   }
   VAR_7 = FUNC_2(VAR_1, VAR_5->ifar_uuid);
   break;
  }
  case 130: {

   if ((VAR_7 = FUNC_10(VAR_4)) != 0) {
    break;
   }
   VAR_7 = FUNC_3(VAR_1, VAR_5->ifar_uuid);
   break;
  }
  case 129: {
   FUNC_1(VAR_3, &VAR_6.s32, sizeof(VAR_6.s32));
   VAR_7 = FUNC_4(VAR_1, &VAR_6.s32.ifar_count,
       VAR_6.s32.ifar_uuids);
   if (VAR_7 == 0) {
    FUNC_1(&VAR_6.s32, VAR_3, sizeof(VAR_6.s32));
   }
   break;
  }
  case 128: {
   FUNC_1(VAR_3, &VAR_6.s64, sizeof(VAR_6.s64));
   VAR_7 = FUNC_4(VAR_1, &VAR_6.s64.ifar_count,
       VAR_6.s64.ifar_uuids);
   if (VAR_7 == 0) {
    FUNC_1(&VAR_6.s64, VAR_3, sizeof(VAR_6.s64));
   }
   break;
  }
  default:
   FUNC_0(0);

 }

 FUNC_7(VAR_1);
 FUNC_5(VAR_1);

 return (VAR_7);
}
