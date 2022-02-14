
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpd_config {int bios_flags; } ;
struct ahd_softc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vpd_config*) ;

int
FUNC_1(struct ahd_softc *VAR_3, struct vpd_config *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 == 0)
  return (VAR_1);
 if ((VAR_4->bios_flags & VAR_2) != 0)
  VAR_3->flags |= VAR_0;
 return (0);
}
