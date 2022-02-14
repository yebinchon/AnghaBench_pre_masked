
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int) ;

__attribute__((used)) static inline u_int
FUNC_5(struct ahd_softc *VAR_2, u_int *VAR_3, u_int VAR_4)
{



 FUNC_0(VAR_2, VAR_0, VAR_0);
 *VAR_3 = FUNC_3(VAR_2);
 FUNC_4(VAR_2, FUNC_1(VAR_4)
       | ((FUNC_2(VAR_4) & 0xC) << 4));






 return (((FUNC_2(VAR_4) & 0x3) << 1) + VAR_1);
}
