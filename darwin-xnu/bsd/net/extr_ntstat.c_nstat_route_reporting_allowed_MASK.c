
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct rtentry {struct ifnet* rt_ifp; } ;
struct ifnet {int dummy; } ;
struct TYPE_3__ {int npf_flags; } ;
typedef TYPE_1__ nstat_provider_filter ;
typedef scalar_t__ nstat_provider_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;

__attribute__((used)) static bool
FUNC_1(nstat_provider_cookie_t VAR_1, nstat_provider_filter *VAR_2)
{
 bool VAR_3 = 1;

 if ((VAR_2->npf_flags & VAR_0) != 0)
 {
  struct rtentry *VAR_4 = (struct rtentry*)VAR_1;
  struct ifnet *VAR_5 = VAR_4->rt_ifp;

  if (VAR_5)
  {
   uint16_t VAR_6 = FUNC_0(VAR_5);

   if ((VAR_2->npf_flags & VAR_6) == 0)
   {
    VAR_3 = 0;
   }
  }
 }
 return VAR_3;
}
