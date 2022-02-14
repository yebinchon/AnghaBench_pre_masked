
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int unpause; int pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ,int ) ;

void
FUNC_2(struct ahd_softc *VAR_2, int VAR_3)
{
 u_int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_4 &= ~VAR_1;
 VAR_2->pause &= ~VAR_1;
 VAR_2->unpause &= ~VAR_1;
 if (VAR_3) {
  VAR_4 |= VAR_1;
  VAR_2->pause |= VAR_1;
  VAR_2->unpause |= VAR_1;
 }
 FUNC_1(VAR_2, VAR_0, VAR_4);
}
