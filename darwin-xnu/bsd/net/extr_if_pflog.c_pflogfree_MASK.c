
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int * if_softc; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_1)
{
 FUNC_0(&VAR_0, VAR_1->if_softc);
 VAR_1->if_softc = ((void*)0);
 (void) FUNC_1(VAR_1);
}
