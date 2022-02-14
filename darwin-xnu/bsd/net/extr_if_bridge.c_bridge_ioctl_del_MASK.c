
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsname; } ;
struct bridge_softc {int dummy; } ;
struct bridge_iflist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bridge_softc*,struct bridge_iflist*,int ) ;
 struct bridge_iflist* FUNC_1 (struct bridge_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct bridge_softc *VAR_1, void *VAR_2)
{
 struct ifbreq *VAR_3 = VAR_2;
 struct bridge_iflist *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3->ifbr_ifsname);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_1, VAR_4, 0);

 return (0);
}
