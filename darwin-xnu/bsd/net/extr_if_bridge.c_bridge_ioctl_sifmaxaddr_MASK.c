
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_addrmax; int ifbr_ifsname; } ;
struct bridge_softc {int dummy; } ;
struct bridge_iflist {int bif_addrmax; } ;


 int VAR_0 ;
 struct bridge_iflist* FUNC_0 (struct bridge_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(struct bridge_softc *VAR_1, void *VAR_2)
{
 struct ifbreq *VAR_3 = VAR_2;
 struct bridge_iflist *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3->ifbr_ifsname);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_4->bif_addrmax = VAR_3->ifbr_addrmax;
 return (0);
}
