
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct scb {int dummy; } ;
struct ahd_softc {int flags; } ;
struct ahd_dma_seg {int len; int addr; } ;
struct ahd_dma64_seg {int len; int addr; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,scalar_t__) ;
 int FUNC_4 (struct ahd_softc*,scalar_t__) ;
 int FUNC_5 (struct ahd_softc*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct scb* FUNC_8 (struct ahd_softc*,int) ;
 int FUNC_9 (struct ahd_softc*,scalar_t__,int) ;
 int FUNC_10 (struct ahd_softc*,scalar_t__,int) ;
 int FUNC_11 (struct ahd_softc*,struct scb*) ;
 int FUNC_12 (struct ahd_softc*) ;
 int FUNC_13 (struct ahd_softc*,int ,int ) ;
 void* FUNC_14 (struct ahd_softc*,struct scb*,int) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16(struct ahd_softc *VAR_19)
{
 struct scb *VAR_20;
 ahd_mode_state VAR_21;
 u_int VAR_22;
 u_int VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint64_t VAR_26;

 FUNC_0(VAR_19, VAR_1|VAR_2,
    VAR_1|VAR_2);

 VAR_22 = FUNC_2(VAR_19);
 VAR_20 = FUNC_8(VAR_19, VAR_22);





 FUNC_9(VAR_19, VAR_10, VAR_5);
 VAR_23 = 1000;
 while (--VAR_23 && !(FUNC_3(VAR_19, VAR_14) & VAR_11))
  FUNC_1(100);
 if (VAR_23 == 0) {
  FUNC_11(VAR_19, VAR_20);
  FUNC_15("ahd_reinitialize_dataptrs: Forcing FIFO free.\n");
  FUNC_9(VAR_19, VAR_10, VAR_15|VAR_6);
 }
 VAR_21 = FUNC_12(VAR_19);
 FUNC_13(VAR_19, VAR_3, VAR_3);
 FUNC_9(VAR_19, VAR_9,
   FUNC_3(VAR_19, VAR_9)
  | (VAR_21 == 0x11 ? VAR_8 : VAR_7));





 VAR_24 = FUNC_5(VAR_19, VAR_17);
 VAR_24 &= VAR_18;

 VAR_25 = (FUNC_4(VAR_19, VAR_16 + 2) << 16)
       | (FUNC_4(VAR_19, VAR_16 + 1) << 8)
       | FUNC_4(VAR_19, VAR_16);

 if ((VAR_19->flags & VAR_0) != 0) {
  struct ahd_dma64_seg *VAR_27;

  VAR_27 = FUNC_14(VAR_19, VAR_20, VAR_24);


  VAR_27--;

  VAR_26 = FUNC_7(VAR_27->addr)
   + (FUNC_6(VAR_27->len) & VAR_4)
   - VAR_25;
  FUNC_10(VAR_19, VAR_12 + 4, VAR_26 >> 32);
 } else {
  struct ahd_dma_seg *VAR_28;

  VAR_28 = FUNC_14(VAR_19, VAR_20, VAR_24);


  VAR_28--;

  VAR_26 = FUNC_6(VAR_28->addr)
   + (FUNC_6(VAR_28->len) & VAR_4)
   - VAR_25;
  FUNC_9(VAR_19, VAR_12 + 4,
    (FUNC_6(VAR_28->len) & ~VAR_4) >> 24);
 }
 FUNC_10(VAR_19, VAR_12, VAR_26);
 FUNC_9(VAR_19, VAR_13 + 2, VAR_25 >> 16);
 FUNC_9(VAR_19, VAR_13 + 1, VAR_25 >> 8);
 FUNC_9(VAR_19, VAR_13, VAR_25);
}
