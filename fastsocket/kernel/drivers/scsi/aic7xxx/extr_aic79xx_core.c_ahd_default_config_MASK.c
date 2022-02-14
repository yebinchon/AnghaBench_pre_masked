
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct ahd_tmode_tstate {int discenable; int tagenable; } ;
struct ahd_softc {int our_id; int user_discenable; int user_tagenable; int features; } ;
struct TYPE_6__ {int protocol_version; int transport_version; } ;
struct TYPE_5__ {int protocol_version; int transport_version; } ;
struct TYPE_4__ {int protocol_version; int transport_version; int ppr_options; int width; int offset; int period; } ;
struct ahd_initiator_tinfo {TYPE_3__ curr; TYPE_2__ goal; TYPE_1__ user; } ;
struct ahd_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * FUNC_0 (struct ahd_softc*,int,char) ;
 int FUNC_1 (struct ahd_devinfo*,int,int,int ,char,int ) ;
 struct ahd_initiator_tinfo* FUNC_2 (struct ahd_softc*,char,int,int,struct ahd_tmode_tstate**) ;
 char* FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,struct ahd_devinfo*,int ,int ,int ,int,int ) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,int ,int,int ) ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(struct ahd_softc *VAR_20)
{
 int VAR_21;

 VAR_20->our_id = 7;






 if (FUNC_0(VAR_20, VAR_20->our_id, 'A') == ((void*)0)) {
  FUNC_6("%s: unable to allocate ahd_tmode_tstate.  "
         "Failing attach\n", FUNC_3(VAR_20));
  return (VAR_7);
 }

 for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
  struct ahd_devinfo VAR_22;
  struct ahd_initiator_tinfo *VAR_23;
  struct ahd_tmode_tstate *VAR_24;
  uint16_t VAR_25;

  VAR_23 = FUNC_2(VAR_20, 'A', VAR_20->our_id,
         VAR_21, &VAR_24);



  VAR_23->user.protocol_version = 4;
  VAR_23->user.transport_version = 4;

  VAR_25 = 0x01 << VAR_21;
  VAR_20->user_discenable |= VAR_25;
  VAR_24->discenable |= VAR_25;
  VAR_20->user_tagenable |= VAR_25;



  VAR_23->user.period = VAR_2;

  VAR_23->user.offset = VAR_8;
  VAR_23->user.ppr_options = VAR_13
     | VAR_15
     | VAR_10
     | VAR_11
     | VAR_12
     | VAR_9;
  if ((VAR_20->features & VAR_1) != 0)
   VAR_23->user.ppr_options |= VAR_14;

  VAR_23->user.width = VAR_16;





  VAR_23->goal.protocol_version = 2;
  VAR_23->goal.transport_version = 2;
  VAR_23->curr.protocol_version = 2;
  VAR_23->curr.transport_version = 2;
  FUNC_1(&VAR_22, VAR_20->our_id,
        VAR_21, VAR_6,
        'A', VAR_18);
  VAR_24->tagenable &= ~VAR_25;
  FUNC_5(VAR_20, &VAR_22, VAR_17,
         VAR_4|VAR_5, VAR_19);
  FUNC_4(VAR_20, &VAR_22, 0, 0,
                    0, VAR_4|VAR_5,
               VAR_19);
 }
 return (0);
}
