
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct scb {int dummy; } ;
struct ahc_softc {int flags; int features; } ;
struct ahc_dma_seg {int len; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct ahc_softc*,scalar_t__) ;
 int FUNC_1 (int ) ;
 struct scb* FUNC_2 (struct ahc_softc*,int) ;
 int FUNC_3 (struct ahc_softc*,scalar_t__,int) ;
 struct ahc_dma_seg* FUNC_4 (struct scb*,int) ;

__attribute__((used)) static void
FUNC_5(struct ahc_softc *VAR_13)
{
 struct scb *VAR_14;
 struct ahc_dma_seg *VAR_15;
 u_int VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;

 VAR_16 = FUNC_0(VAR_13, VAR_9);
 VAR_14 = FUNC_2(VAR_13, VAR_16);
 VAR_17 = (FUNC_0(VAR_13, VAR_8 + 3) << 24)
       | (FUNC_0(VAR_13, VAR_8 + 2) << 16)
       | (FUNC_0(VAR_13, VAR_8 + 1) << 8)
       | FUNC_0(VAR_13, VAR_8);

 VAR_17 &= VAR_11;
 VAR_15 = FUNC_4(VAR_14, VAR_17);


 VAR_15--;

 VAR_18 = (FUNC_0(VAR_13, VAR_7 + 2) << 16)
       | (FUNC_0(VAR_13, VAR_7 + 1) << 8)
       | FUNC_0(VAR_13, VAR_7);

 VAR_19 = FUNC_1(VAR_15->addr)
  + (FUNC_1(VAR_15->len) & VAR_1)
  - VAR_18;
 if ((VAR_13->flags & VAR_0) != 0) {
  u_int VAR_20;

  VAR_20 = FUNC_0(VAR_13, VAR_3);
  FUNC_3(VAR_13, VAR_3, VAR_20 | VAR_4);
  FUNC_3(VAR_13, VAR_5,
    (FUNC_1(VAR_15->len) >> 24) & VAR_10);
  FUNC_3(VAR_13, VAR_3, VAR_20);
 }
 FUNC_3(VAR_13, VAR_5 + 3, VAR_19 >> 24);
 FUNC_3(VAR_13, VAR_5 + 2, VAR_19 >> 16);
 FUNC_3(VAR_13, VAR_5 + 1, VAR_19 >> 8);
 FUNC_3(VAR_13, VAR_5, VAR_19);
 FUNC_3(VAR_13, VAR_6 + 2, VAR_18 >> 16);
 FUNC_3(VAR_13, VAR_6 + 1, VAR_18 >> 8);
 FUNC_3(VAR_13, VAR_6, VAR_18);
 if ((VAR_13->features & VAR_2) == 0) {
  FUNC_3(VAR_13, VAR_12 + 2, VAR_18 >> 16);
  FUNC_3(VAR_13, VAR_12 + 1, VAR_18 >> 8);
  FUNC_3(VAR_13, VAR_12, VAR_18);
 }
}
