
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahd_softc {scalar_t__ qinfifonext; int qinfifo; } ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ahd_softc*) ;

__attribute__((used)) static int
FUNC_4(struct ahd_softc *VAR_1)
{
 u_int VAR_2;
 u_int VAR_3;
 u_int VAR_4;

 FUNC_0(VAR_1, VAR_0, VAR_0);
 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = FUNC_1(VAR_1->qinfifonext);
 if (VAR_4 >= VAR_3)
  return (VAR_4 - VAR_3);
 else
  return (VAR_4
        + FUNC_2(VAR_1->qinfifo) - VAR_3);
}
