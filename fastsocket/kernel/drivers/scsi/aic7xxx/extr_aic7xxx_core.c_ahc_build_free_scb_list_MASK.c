
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahc_softc {int flags; TYPE_1__* scb_data; } ;
struct TYPE_2__ {int maxhscbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct ahc_softc*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct ahc_softc *VAR_11)
{
 int VAR_12;
 int VAR_13;

 VAR_12 = 32;
 if ((VAR_11->flags & VAR_0) != 0)
  VAR_12 = 64;

 for (VAR_13 = 0; VAR_13 < VAR_11->scb_data->maxhscbs; VAR_13++) {
  int VAR_14;

  FUNC_0(VAR_11, VAR_3, VAR_13);






  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
   FUNC_0(VAR_11, VAR_4+VAR_14, 0xFF);


  FUNC_0(VAR_11, VAR_5, 0);


  if ((VAR_11->flags & VAR_1) != 0)
   FUNC_0(VAR_11, VAR_8, VAR_13+1);
  else
   FUNC_0(VAR_11, VAR_8, VAR_6);


  FUNC_0(VAR_11, VAR_10, VAR_6);
  FUNC_0(VAR_11, VAR_9, 0xFF);
  FUNC_0(VAR_11, VAR_7, 0xFF);
 }

 if ((VAR_11->flags & VAR_1) != 0) {

  FUNC_0(VAR_11, VAR_2, 0);
 } else {

  FUNC_0(VAR_11, VAR_2, VAR_6);
 }


 FUNC_0(VAR_11, VAR_3, VAR_13-1);
 FUNC_0(VAR_11, VAR_8, VAR_6);
}
