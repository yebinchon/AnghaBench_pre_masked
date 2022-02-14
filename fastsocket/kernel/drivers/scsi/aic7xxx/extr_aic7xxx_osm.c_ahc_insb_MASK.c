
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahc_softc {int dummy; } ;


 int FUNC_0 (struct ahc_softc*,long) ;

void
FUNC_1(struct ahc_softc * VAR_0, long VAR_1, uint8_t *VAR_2, int VAR_3)
{
 int VAR_4;






 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  *VAR_2++ = FUNC_0(VAR_0, VAR_1);
}
