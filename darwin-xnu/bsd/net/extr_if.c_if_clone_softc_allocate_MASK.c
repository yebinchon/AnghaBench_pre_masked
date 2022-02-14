
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {int ifc_softc_size; int ifc_zone; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 (int ) ;

void *
FUNC_3(const struct if_clone *VAR_0)
{
 void *VAR_1 = ((void*)0);

 FUNC_0(VAR_0 != ((void*)0));

 VAR_1 = FUNC_2(VAR_0->ifc_zone);
 if (VAR_1 != ((void*)0))
  FUNC_1(VAR_1, VAR_0->ifc_softc_size);

 return (VAR_1);
}
