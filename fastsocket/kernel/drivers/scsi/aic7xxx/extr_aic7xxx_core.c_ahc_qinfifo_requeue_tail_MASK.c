
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int u_int ;
struct scb {int dummy; } ;
struct ahc_softc {size_t qinfifonext; int features; int * qinfifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scb* FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,size_t) ;
 scalar_t__ FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,struct scb*,struct scb*) ;

void
FUNC_4(struct ahc_softc *VAR_3, struct scb *VAR_4)
{
 struct scb *VAR_5;

 VAR_5 = ((void*)0);
 if (FUNC_2(VAR_3) != 0) {
  u_int VAR_6;
  uint8_t VAR_7;

  VAR_7 = VAR_3->qinfifonext - 1;
  VAR_6 = VAR_3->qinfifo[VAR_7];
  VAR_5 = FUNC_0(VAR_3, VAR_6);
 }
 FUNC_3(VAR_3, VAR_5, VAR_4);
 if ((VAR_3->features & VAR_0) != 0) {
  FUNC_1(VAR_3, VAR_1, VAR_3->qinfifonext);
 } else {
  FUNC_1(VAR_3, VAR_2, VAR_3->qinfifonext);
 }
}
