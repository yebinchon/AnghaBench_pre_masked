
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {int ifc_zone; int ifc_softc_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int ,void*) ;

void
FUNC_3(const struct if_clone *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0) && VAR_1 != ((void*)0));
 FUNC_1(VAR_1, VAR_0->ifc_softc_size);
 FUNC_2(VAR_0->ifc_zone, VAR_1);
}
