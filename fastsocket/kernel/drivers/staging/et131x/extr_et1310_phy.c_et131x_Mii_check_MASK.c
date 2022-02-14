
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int TransPhyComaModeOnBoot; } ;
struct et131x_adapter {scalar_t__ MediaState; int Flags; int RegistryPhyLoopbk; scalar_t__ linkspeed; int RegistryPhyComa; int AiForceDpx; int RegistryJumboPacket; TYPE_3__ PoMgmt; void* duplex_mode; int netdev; int Lock; TYPE_1__* pdev; } ;
struct TYPE_8__ {scalar_t__ auto_neg_complete; scalar_t__ link_status; } ;
struct TYPE_10__ {TYPE_2__ bits; } ;
struct TYPE_7__ {int dev; } ;
typedef TYPE_4__ MI_BMSR_t ;


 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*,int,int,int) ;
 int FUNC_3 (struct et131x_adapter*,int *,void**,void**,void**,void**,void**,void**) ;
 int FUNC_4 (struct et131x_adapter*) ;
 int FUNC_5 (struct et131x_adapter*,int,int*) ;
 int FUNC_6 (struct et131x_adapter*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (struct et131x_adapter*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct et131x_adapter*) ;
 int FUNC_10 (struct et131x_adapter*) ;
 int FUNC_11 (struct et131x_adapter*) ;
 int FUNC_12 (struct et131x_adapter*) ;
 int FUNC_13 (struct et131x_adapter*) ;
 int VAR_4 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

void FUNC_18(struct et131x_adapter *VAR_5,
        MI_BMSR_t VAR_6, MI_BMSR_t VAR_7)
{
 uint8_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 unsigned long VAR_15;

 if (VAR_7.bits.link_status) {
  if (VAR_6.bits.link_status) {
   VAR_5->PoMgmt.TransPhyComaModeOnBoot = 20;




   FUNC_16(&VAR_5->Lock, VAR_15);

   VAR_5->MediaState = VAR_0;
   VAR_5->Flags &= ~VAR_4;

   FUNC_17(&VAR_5->Lock, VAR_15);


   if (VAR_5->RegistryPhyLoopbk == 0)
    FUNC_15(VAR_5->netdev);
  } else {
   FUNC_8(&VAR_5->pdev->dev,
       "Link down - cable problem ?\n");

   if (VAR_5->linkspeed == VAR_3) {




    uint16_t VAR_16;

    FUNC_5(VAR_5, 0x12, &VAR_16);
    FUNC_6(VAR_5, 0x12, VAR_16 | 0x4);
    FUNC_6(VAR_5, 0x10, VAR_16 | 0x8402);
    FUNC_6(VAR_5, 0x11, VAR_16 | 511);
    FUNC_6(VAR_5, 0x12, VAR_16);
   }







   if (!(VAR_5->Flags & VAR_4) ||
     (VAR_5->MediaState == VAR_1)) {
    FUNC_16(&VAR_5->Lock, VAR_15);
    VAR_5->MediaState =
        VAR_1;
    FUNC_17(&VAR_5->Lock,
             VAR_15);




    if (VAR_5->RegistryPhyLoopbk == 0)
     FUNC_14(VAR_5->netdev);
   }

   VAR_5->linkspeed = 0;
   VAR_5->duplex_mode = 0;


   FUNC_10(VAR_5);


   FUNC_11(VAR_5);


   FUNC_12(VAR_5);







   FUNC_13(VAR_5);


   FUNC_9(VAR_5);




   if (VAR_5->RegistryPhyComa == 1)
    FUNC_4(VAR_5);
  }
 }

 if (VAR_7.bits.auto_neg_complete ||
     (VAR_5->AiForceDpx == 3 && VAR_7.bits.link_status)) {
  if (VAR_6.bits.auto_neg_complete || VAR_5->AiForceDpx == 3) {
   FUNC_3(VAR_5,
          &VAR_8, &VAR_9,
          &VAR_10, &VAR_11, &VAR_12,
          &VAR_13, &VAR_14);

   VAR_5->linkspeed = VAR_10;
   VAR_5->duplex_mode = VAR_11;

   VAR_5->PoMgmt.TransPhyComaModeOnBoot = 20;

   if (VAR_5->linkspeed == VAR_3) {





    uint16_t VAR_17;

    FUNC_5(VAR_5, 0x12, &VAR_17);
    FUNC_6(VAR_5, 0x12, VAR_17 | 0x4);
    FUNC_6(VAR_5, 0x10, VAR_17 | 0x8402);
    FUNC_6(VAR_5, 0x11, VAR_17 | 511);
    FUNC_6(VAR_5, 0x12, VAR_17);
   }

   FUNC_0(VAR_5);

   if (VAR_5->linkspeed == VAR_2 &&
     VAR_5->RegistryJumboPacket > 2048)
    FUNC_2(VAR_5, 0x16, 0xcfff,
           0x2000);

   FUNC_7(VAR_5);
   FUNC_1(VAR_5);
  }
 }
}
