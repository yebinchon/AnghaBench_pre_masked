
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsflags; } ;
struct bridge_softc {int dummy; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int FUNC_1 (struct bridge_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct bridge_softc *VAR_0, void *VAR_1)
{
 struct ifbreq *VAR_2 = VAR_1;

 if (!FUNC_0(VAR_0)) {
  return (0);
 }
 FUNC_1(VAR_0, VAR_2->ifbr_ifsflags);
 return (0);
}
