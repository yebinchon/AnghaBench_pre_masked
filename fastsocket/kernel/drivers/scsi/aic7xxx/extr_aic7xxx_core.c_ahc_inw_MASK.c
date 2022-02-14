
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ u_int ;
struct ahc_softc {int dummy; } ;


 int FUNC_0 (struct ahc_softc*,scalar_t__) ;

uint16_t
FUNC_1(struct ahc_softc *VAR_0, u_int VAR_1)
{
 uint16_t VAR_2 = FUNC_0(VAR_0, VAR_1+1) << 8;
 return VAR_2 | FUNC_0(VAR_0, VAR_1);
}
