
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcq_if {int tif_maxpri; int * tif_ifq; } ;
struct ifnet {int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcq_if*,int ) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct tcq_if*) ;
 int VAR_4 ;
 struct tcq_if* FUNC_4 (int ) ;
 struct tcq_if* FUNC_5 (int ) ;

struct tcq_if *
FUNC_6(struct ifnet *VAR_5, int VAR_6)
{
 struct tcq_if *VAR_7;

 VAR_7 = (VAR_6 == VAR_1) ? FUNC_4(VAR_4) : FUNC_5(VAR_4);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_7, VAR_3);
 VAR_7->tif_maxpri = -1;
 VAR_7->tif_ifq = &VAR_5->if_snd;

 if (VAR_2) {
  FUNC_2(VAR_0, "%s: %s scheduler allocated\n",
      FUNC_1(VAR_5), FUNC_3(VAR_7));
 }

 return (VAR_7);
}
