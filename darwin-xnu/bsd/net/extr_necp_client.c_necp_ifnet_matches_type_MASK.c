
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct TYPE_2__ {struct ifnet* ifp; } ;
struct ifnet {TYPE_1__ if_delegated; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ifnet*,int) ;

__attribute__((used)) static bool
FUNC_1(struct ifnet *VAR_2, u_int8_t VAR_3, bool VAR_4)
{
 struct ifnet *VAR_5 = VAR_2;
 while (VAR_5) {
  if (FUNC_0(VAR_5, VAR_1) == VAR_3) {
   return (VAR_1);
  }
  if (!VAR_4) {
   break;
  }
  VAR_5 = VAR_5->if_delegated.ifp;

 }
 return (VAR_0);
}
