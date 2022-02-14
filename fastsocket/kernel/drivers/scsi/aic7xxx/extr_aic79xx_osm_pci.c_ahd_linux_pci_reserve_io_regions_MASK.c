
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int dev_softc; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int,char*) ;

__attribute__((used)) static int
FUNC_3(struct ahd_softc *VAR_1, resource_size_t *VAR_2,
     resource_size_t *VAR_3)
{
 *VAR_2 = FUNC_0(VAR_1->dev_softc, 0);





 *VAR_3 = FUNC_0(VAR_1->dev_softc, 3);
 if (*VAR_2 == 0 || *VAR_3 == 0)
  return (VAR_0);
 if (!FUNC_2(*VAR_2, 256, "aic79xx"))
  return (VAR_0);
 if (!FUNC_2(*VAR_3, 256, "aic79xx")) {
  FUNC_1(*VAR_2, 256);
  return (VAR_0);
 }
 return (0);
}
