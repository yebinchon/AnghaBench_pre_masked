
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct nd_ifinfo {int chlim; scalar_t__ initialized; } ;
struct in6pcb {scalar_t__ in6p_hops; } ;
struct ifnet {int dummy; } ;


 struct nd_ifinfo* FUNC_0 (struct ifnet*) ;
 int VAR_0 ;

int
FUNC_1(struct in6pcb *VAR_1, struct ifnet *VAR_2)
{
 if (VAR_1 && VAR_1->in6p_hops >= 0) {
  return (VAR_1->in6p_hops);
 } else if (((void*)0) != VAR_2) {
  u_int8_t VAR_3;
  struct nd_ifinfo *VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 && VAR_4->initialized) {

   VAR_3 = VAR_4->chlim;
  } else {
   VAR_3 = VAR_0;
  }
  return (VAR_3);
 }

 return (VAR_0);
}
