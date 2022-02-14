
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbareq32 {int ifba_vlan; int ifba_dst; } ;
struct bridge_softc {int dummy; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int FUNC_1 (struct bridge_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bridge_softc *VAR_0, void *VAR_1)
{
 struct ifbareq32 *VAR_2 = VAR_1;

 if (!FUNC_0(VAR_0)) {
  return (0);
 }
 return (FUNC_1(VAR_0, VAR_2->ifba_dst, VAR_2->ifba_vlan));
}
