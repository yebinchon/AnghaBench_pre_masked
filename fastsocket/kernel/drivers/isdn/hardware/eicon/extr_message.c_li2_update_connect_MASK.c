
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef scalar_t__ byte ;
struct TYPE_9__ {int* flag_table; int chflags; } ;
struct TYPE_8__ {int li_base; int manufacturer_features; TYPE_1__* AdvSignalPLCI; int li_pri; TYPE_1__* plci; } ;
struct TYPE_7__ {int li_bchannel_id; scalar_t__ tel; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_23 ;
 TYPE_3__* VAR_24 ;

__attribute__((used)) static void FUNC_1 (dword VAR_25, DIVA_CAPI_ADAPTER *VAR_26, PLCI *VAR_27,
  dword VAR_28, byte VAR_29, dword VAR_30)
{
  word VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
  PLCI *VAR_37;
  DIVA_CAPI_ADAPTER *VAR_38;

  VAR_38 = &(VAR_23[FUNC_0 ((byte)(VAR_28 & 0x7f)) - 1]);
  VAR_37 = &(VAR_38->plci[((VAR_28 >> 8) & 0xff) - 1]);
  VAR_31 = VAR_26->li_base + (VAR_27->li_bchannel_id - 1);
  if (!VAR_26->li_pri && (VAR_27->tel == VAR_0)
   && (VAR_27 == VAR_26->AdvSignalPLCI) && (VAR_25 & VAR_1))
  {
    VAR_32 = VAR_31 + VAR_22;
    VAR_33 = (VAR_26->manufacturer_features & VAR_21) ?
      VAR_26->li_base + VAR_22 + (2 - VAR_27->li_bchannel_id) : VAR_32;
  }
  else
  {
    VAR_32 = VAR_31;
    VAR_33 = VAR_31;
  }
  VAR_34 = VAR_38->li_base + (VAR_37->li_bchannel_id - 1);
  if (!VAR_38->li_pri && (VAR_37->tel == VAR_0)
   && (VAR_37 == VAR_38->AdvSignalPLCI) && (VAR_28 & VAR_1))
  {
    VAR_35 = VAR_34 + VAR_22;
    VAR_36 = (VAR_38->manufacturer_features & VAR_21) ?
      VAR_38->li_base + VAR_22 + (2 - VAR_37->li_bchannel_id) : VAR_35;
  }
  else
  {
    VAR_35 = VAR_34;
    VAR_36 = VAR_34;
  }
  if (VAR_29)
  {
    VAR_24[VAR_34].flag_table[VAR_35] &= ~VAR_19;
    VAR_24[VAR_34].flag_table[VAR_36] &= ~VAR_19;
    VAR_24[VAR_35].flag_table[VAR_34] &= ~VAR_18;
    VAR_24[VAR_36].flag_table[VAR_34] &= ~VAR_18;
    VAR_24[VAR_34].flag_table[VAR_34] &= ~VAR_20;
    VAR_24[VAR_34].chflags &= ~(VAR_15 | VAR_14 | VAR_13);
  }
  VAR_24[VAR_35].flag_table[VAR_32] &= ~(VAR_17 | VAR_16);
  VAR_24[VAR_36].flag_table[VAR_32] &= ~(VAR_17 | VAR_16);
  VAR_24[VAR_35].flag_table[VAR_33] &= ~(VAR_17 | VAR_16);
  VAR_24[VAR_36].flag_table[VAR_33] &= ~(VAR_17 | VAR_16);
  VAR_24[VAR_32].flag_table[VAR_35] &= ~(VAR_17 | VAR_16);
  VAR_24[VAR_32].flag_table[VAR_36] &= ~(VAR_17 | VAR_16);
  VAR_24[VAR_33].flag_table[VAR_35] &= ~(VAR_17 | VAR_16);
  VAR_24[VAR_33].flag_table[VAR_36] &= ~(VAR_17 | VAR_16);
  if (VAR_30 & VAR_2)
  {
    VAR_24[VAR_35].flag_table[VAR_32] |= VAR_17;
    VAR_24[VAR_36].flag_table[VAR_32] |= VAR_17;
    VAR_24[VAR_35].flag_table[VAR_33] |= VAR_17;
    VAR_24[VAR_36].flag_table[VAR_33] |= VAR_17;
  }
  if (VAR_30 & VAR_3)
  {
    VAR_24[VAR_32].flag_table[VAR_35] |= VAR_17;
    VAR_24[VAR_32].flag_table[VAR_36] |= VAR_17;
    VAR_24[VAR_33].flag_table[VAR_35] |= VAR_17;
    VAR_24[VAR_33].flag_table[VAR_36] |= VAR_17;
  }
  if (VAR_30 & VAR_9)
  {
    VAR_24[VAR_34].flag_table[VAR_35] |= VAR_19;
    VAR_24[VAR_34].flag_table[VAR_36] |= VAR_19;
  }
  if (VAR_30 & VAR_7)
  {
    VAR_24[VAR_35].flag_table[VAR_34] |= VAR_18;
    VAR_24[VAR_36].flag_table[VAR_34] |= VAR_18;
  }
  if (VAR_30 & VAR_10)
    VAR_24[VAR_34].chflags |= VAR_15;
  if (VAR_30 & VAR_8)
    VAR_24[VAR_34].chflags |= VAR_14;
  if (VAR_30 & VAR_4)
  {
    VAR_24[VAR_35].flag_table[VAR_35] |= VAR_17;
    VAR_24[VAR_36].flag_table[VAR_35] |= VAR_17;
    VAR_24[VAR_35].flag_table[VAR_36] |= VAR_17;
    VAR_24[VAR_36].flag_table[VAR_36] |= VAR_17;
  }
  if (VAR_30 & VAR_5)
    VAR_24[VAR_34].flag_table[VAR_34] |= VAR_20;
  if (VAR_30 & VAR_6)
    VAR_24[VAR_34].chflags |= VAR_13;
  if (VAR_30 & VAR_11)
    VAR_24[VAR_36].flag_table[VAR_33] |= VAR_20;
  if (VAR_30 & VAR_12)
    VAR_24[VAR_33].flag_table[VAR_36] |= VAR_20;
  if (VAR_32 != VAR_33)
  {
    VAR_24[VAR_32].flag_table[VAR_33] |= VAR_16;
    VAR_24[VAR_33].flag_table[VAR_32] |= VAR_16;
  }
  if (VAR_35 != VAR_36)
  {
    VAR_24[VAR_35].flag_table[VAR_36] |= VAR_16;
    VAR_24[VAR_36].flag_table[VAR_35] |= VAR_16;
  }
}
