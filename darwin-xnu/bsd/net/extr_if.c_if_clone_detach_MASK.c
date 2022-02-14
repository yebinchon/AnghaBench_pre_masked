
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {scalar_t__ ifc_softc_size; int ifc_mutex; int ifc_zone; int ifc_units; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct if_clone*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct if_clone *VAR_4)
{
 FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_4->ifc_units, VAR_0);
 if (VAR_4->ifc_softc_size != 0)
  FUNC_3(VAR_4->ifc_zone);

 FUNC_2(&VAR_4->ifc_mutex, VAR_3);
 VAR_1--;
}
