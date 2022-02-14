
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktable {scalar_t__ pfrkt_larg; } ;
struct pfi_kif {int dummy; } ;
struct pfi_dynaddr {int pfid_iflags; int pfid_net; struct pfr_ktable* pfid_kt; struct pfi_kif* pfid_kif; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pfr_ktable*,struct pfi_kif*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct pfr_ktable*,struct pfi_dynaddr*) ;

void
FUNC_3(struct pfi_dynaddr *VAR_1)
{
 struct pfi_kif *VAR_2;
 struct pfr_ktable *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_1->pfid_kif == ((void*)0) || VAR_1->pfid_kt == ((void*)0))
  FUNC_0("pfi_dynaddr_update");

 VAR_2 = VAR_1->pfid_kif;
 VAR_3 = VAR_1->pfid_kt;

 if (VAR_3->pfrkt_larg != VAR_0) {

  FUNC_1(VAR_3, VAR_2, VAR_1->pfid_net, VAR_1->pfid_iflags);
  VAR_3->pfrkt_larg = VAR_0;
 }
 FUNC_2(VAR_3, VAR_1);
}
