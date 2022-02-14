
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scb_tailq {int dummy; } ;
struct scb {int flags; int * io_ctx; } ;
struct ahc_softc {int flags; struct scb_tailq* untagged_queues; } ;
typedef int cam_status ;
typedef int ahc_search_action ;
typedef int * ahc_io_ctx_t ;
struct TYPE_2__ {int tqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 struct scb* FUNC_0 (struct scb_tailq*) ;
 struct scb* FUNC_1 (struct scb*,int ) ;
 int FUNC_2 (struct scb_tailq*,struct scb*,int ) ;
 int FUNC_3 (struct ahc_softc*,struct scb*) ;
 int FUNC_4 (struct scb*) ;
 int FUNC_5 (struct ahc_softc*) ;
 int FUNC_6 (struct scb*) ;
 scalar_t__ FUNC_7 (struct ahc_softc*,struct scb*,int,char,int,int ,int ) ;
 int FUNC_8 (struct ahc_softc*) ;
 int FUNC_9 (struct scb*,int ) ;
 TYPE_1__ VAR_8 ;
 int FUNC_10 (char*) ;

int
FUNC_11(struct ahc_softc *VAR_9, ahc_io_ctx_t VAR_10,
      int VAR_11, char VAR_12, int VAR_13, uint32_t VAR_14,
      ahc_search_action VAR_15)
{
 struct scb *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 if (VAR_15 == 130) {




  FUNC_5(VAR_9);
 }

 VAR_18 = 0;
 VAR_19 = 0;
 if ((VAR_9->flags & VAR_0) == 0) {

  VAR_17 = 16;
  if (VAR_11 != VAR_3) {

   VAR_19 = VAR_11;
   if (VAR_12 == 'B')
    VAR_19 += 8;
   VAR_17 = VAR_19 + 1;
  }
 } else {
  VAR_17 = 0;
 }

 for (; VAR_19 < VAR_17; VAR_19++) {
  struct scb_tailq *VAR_20;
  struct scb *VAR_21;

  VAR_20 = &(VAR_9->untagged_queues[VAR_19]);
  VAR_21 = FUNC_0(VAR_20);
  while (VAR_21 != ((void*)0)) {

   VAR_16 = VAR_21;
   VAR_21 = FUNC_1(VAR_16, VAR_8.tqe);
   if ((VAR_16->flags & VAR_5) != 0)
    continue;

   if (FUNC_7(VAR_9, VAR_16, VAR_11, VAR_12, VAR_13,
       VAR_6, VAR_4) == 0
    || (VAR_10 != ((void*)0) && VAR_10 != VAR_16->io_ctx))
    continue;




   VAR_18++;
   switch (VAR_15) {
   case 130:
   {
    cam_status VAR_22;
    cam_status VAR_23;

    VAR_22 = FUNC_6(VAR_16);
    if (VAR_22 == VAR_2)
     FUNC_9(VAR_16, VAR_14);
    VAR_23 = FUNC_6(VAR_16);
    if (VAR_23 != VAR_1)
     FUNC_4(VAR_16);
    if ((VAR_16->flags & VAR_5) == 0)
     FUNC_10("Inactive SCB in untaggedQ\n");
    FUNC_3(VAR_9, VAR_16);
    break;
   }
   case 128:
    VAR_16->flags &= ~VAR_7;
    FUNC_2(VAR_20, VAR_16, VAR_8.tqe);
    break;
   case 129:
    break;
   }
  }
 }

 if (VAR_15 == 130)
  FUNC_8(VAR_9);
 return (VAR_18);
}
