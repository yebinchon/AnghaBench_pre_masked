
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; } ;
typedef scalar_t__ s32 ;
typedef int e1000_rev_polarity ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_14,
    e1000_rev_polarity *VAR_15)
{
 s32 VAR_16;
 u16 VAR_17;

 FUNC_1("e1000_check_polarity");

 if (VAR_14->phy_type == VAR_11) {

  VAR_16 = FUNC_0(VAR_14, VAR_7,
          &VAR_17);
  if (VAR_16)
   return VAR_16;
  *VAR_15 = ((VAR_17 & VAR_8) >>
        VAR_9) ?
      VAR_13 : VAR_12;

 } else if (VAR_14->phy_type == VAR_10) {

  VAR_16 = FUNC_0(VAR_14, VAR_3,
          &VAR_17);
  if (VAR_16)
   return VAR_16;



  if ((VAR_17 & VAR_6) ==
      VAR_5) {


   VAR_16 =
       FUNC_0(VAR_14, VAR_1,
            &VAR_17);
   if (VAR_16)
    return VAR_16;


   *VAR_15 = (VAR_17 & VAR_2) ?
       VAR_13 :
       VAR_12;
  } else {


   *VAR_15 =
       (VAR_17 & VAR_4) ?
       VAR_13 :
       VAR_12;
  }
 }
 return VAR_0;
}
