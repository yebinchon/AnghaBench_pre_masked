
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int dev_softc; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int,char*) ;

__attribute__((used)) static int
FUNC_2(struct ahc_softc *VAR_2, resource_size_t *VAR_3)
{
 if (VAR_1 == 0)
  return (VAR_0);

 *VAR_3 = FUNC_0(VAR_2->dev_softc, 0);
 if (*VAR_3 == 0)
  return (VAR_0);
 if (!FUNC_1(*VAR_3, 256, "aic7xxx"))
  return (VAR_0);
 return (0);
}
