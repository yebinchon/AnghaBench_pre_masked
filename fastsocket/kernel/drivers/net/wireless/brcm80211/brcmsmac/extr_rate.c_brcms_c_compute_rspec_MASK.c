
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ofdm_phy_hdr {int * rlpt; } ;
struct d11rxhdr {int RxChan; int PhyRxStatus_0; } ;
struct cck_phy_hdr {int signal; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

u32 FUNC_3(struct d11rxhdr *VAR_16, u8 *VAR_17)
{
 int VAR_18;
 u32 VAR_19 = VAR_2 << VAR_11;

 VAR_18 =
     ((VAR_16->RxChan & VAR_14) >> VAR_15);

 if ((VAR_18 == VAR_7) || (VAR_18 == VAR_8) ||
     (VAR_18 == VAR_6) || (VAR_18 == VAR_5)) {
  switch (VAR_16->PhyRxStatus_0 & VAR_9) {
  case 131:
   VAR_19 =
    FUNC_0(
    ((struct cck_phy_hdr *) VAR_17)->signal);
   break;
  case 130:
   VAR_19 =
       FUNC_1(
    ((struct ofdm_phy_hdr *) VAR_17)->rlpt[0]);
   break;
  case 129:
   VAR_19 = (VAR_17[0] & VAR_1) | VAR_12;
   if (VAR_17[0] & VAR_0) {

    VAR_19 &= ~VAR_10;
    VAR_19 |= (VAR_3 << VAR_11);
   }
   break;
  case 128:

  default:

   break;
  }
  if (FUNC_2(VAR_17[3]))
   VAR_19 |= VAR_13;
 } else
     if ((VAR_18 == VAR_4) || (VAR_16->PhyRxStatus_0 & 130))
  VAR_19 = FUNC_1(
    ((struct ofdm_phy_hdr *) VAR_17)->rlpt[0]);
 else
  VAR_19 = FUNC_0(
    ((struct cck_phy_hdr *) VAR_17)->signal);

 return VAR_19;
}
