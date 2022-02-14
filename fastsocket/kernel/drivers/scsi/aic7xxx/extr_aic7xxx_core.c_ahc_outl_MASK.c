
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct ahc_softc {int dummy; } ;


 int FUNC_0 (struct ahc_softc*,scalar_t__,int) ;

void
FUNC_1(struct ahc_softc *VAR_0, u_int VAR_1, uint32_t VAR_2)
{
 FUNC_0(VAR_0, VAR_1, (VAR_2) & 0xFF);
 FUNC_0(VAR_0, VAR_1+1, ((VAR_2) >> 8) & 0xFF);
 FUNC_0(VAR_0, VAR_1+2, ((VAR_2) >> 16) & 0xFF);
 FUNC_0(VAR_0, VAR_1+3, ((VAR_2) >> 24) & 0xFF);
}
