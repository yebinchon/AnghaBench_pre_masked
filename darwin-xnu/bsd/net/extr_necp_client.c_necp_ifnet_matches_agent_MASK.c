
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
typedef size_t u_int32_t ;
struct TYPE_2__ {struct ifnet* ifp; } ;
struct ifnet {size_t if_agentcount; TYPE_1__ if_delegated; int * if_agentids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct ifnet *VAR_2, uuid_t *VAR_3, bool VAR_4)
{
 struct ifnet *VAR_5 = VAR_2;

 while (VAR_5 != ((void*)0)) {
  FUNC_1(VAR_5);
  if (VAR_5->if_agentids != ((void*)0)) {
   for (u_int32_t VAR_6 = 0; VAR_6 < VAR_5->if_agentcount; VAR_6++) {
    if (FUNC_2(VAR_5->if_agentids[VAR_6], *VAR_3) == 0) {
     FUNC_0(VAR_5);
     return (VAR_1);
    }
   }
  }
  FUNC_0(VAR_5);

  if (!VAR_4) {
   break;
  }
  VAR_5 = VAR_5->if_delegated.ifp;
 }
 return (VAR_0);
}
