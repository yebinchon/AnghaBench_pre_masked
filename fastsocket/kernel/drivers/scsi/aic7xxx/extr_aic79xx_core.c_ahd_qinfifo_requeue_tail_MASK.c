
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct scb {int dummy; } ;
struct ahd_softc {size_t* qinfifo; scalar_t__ qinfifonext; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 struct scb* FUNC_1 (struct ahd_softc*,size_t) ;
 scalar_t__ FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,struct scb*,struct scb*) ;
 int FUNC_4 (struct ahd_softc*,int ) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*,scalar_t__) ;
 int FUNC_7 (struct ahd_softc*,int ,int ) ;

void
FUNC_8(struct ahd_softc *VAR_1, struct scb *VAR_2)
{
 struct scb *VAR_3;
 ahd_mode_state VAR_4;

 VAR_4 = FUNC_5(VAR_1);
 FUNC_7(VAR_1, VAR_0, VAR_0);
 VAR_3 = ((void*)0);
 if (FUNC_2(VAR_1) != 0) {
  u_int VAR_5;
  u_int VAR_6;

  VAR_6 = FUNC_0(VAR_1->qinfifonext - 1);
  VAR_5 = VAR_1->qinfifo[VAR_6];
  VAR_3 = FUNC_1(VAR_1, VAR_5);
 }
 FUNC_3(VAR_1, VAR_3, VAR_2);
 FUNC_6(VAR_1, VAR_1->qinfifonext);
 FUNC_4(VAR_1, VAR_4);
}
