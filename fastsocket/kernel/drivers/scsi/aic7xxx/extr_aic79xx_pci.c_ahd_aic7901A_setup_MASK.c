
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int features; int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*) ;

__attribute__((used)) static int
FUNC_1(struct ahd_softc *VAR_2)
{

 VAR_2->chip = VAR_0;
 VAR_2->features = VAR_1;
 return (FUNC_0(VAR_2));
}
