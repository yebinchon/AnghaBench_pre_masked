
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef scalar_t__ byte ;
struct TYPE_9__ {int* flag_table; } ;
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
 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_16 ;
 TYPE_5__* VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_1 (dword VAR_19, DIVA_CAPI_ADAPTER *VAR_20, PLCI *VAR_21,
  dword VAR_22, byte VAR_23, dword VAR_24)
{
  word VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
  PLCI *VAR_32;
  DIVA_CAPI_ADAPTER *VAR_33;

  VAR_33 = &(VAR_16[FUNC_0 ((byte)(VAR_22 & 0x7f)) - 1]);
  VAR_32 = &(VAR_33->plci[((VAR_22 >> 8) & 0xff) - 1]);
  VAR_26 = VAR_20->li_base + (VAR_21->li_bchannel_id - 1);
  if (!VAR_20->li_pri && (VAR_21->tel == VAR_0)
   && (VAR_21 == VAR_20->AdvSignalPLCI) && (VAR_19 & VAR_1))
  {
    VAR_27 = VAR_26 + VAR_15;
    VAR_28 = (VAR_20->manufacturer_features & VAR_14) ?
      VAR_20->li_base + VAR_15 + (2 - VAR_21->li_bchannel_id) : VAR_27;
  }
  else
  {
    VAR_27 = VAR_26;
    VAR_28 = VAR_26;
  }
  VAR_29 = VAR_33->li_base + (VAR_32->li_bchannel_id - 1);
  if (!VAR_33->li_pri && (VAR_32->tel == VAR_0)
   && (VAR_32 == VAR_33->AdvSignalPLCI) && (VAR_22 & VAR_1))
  {
    VAR_30 = VAR_29 + VAR_15;
    VAR_31 = (VAR_33->manufacturer_features & VAR_14) ?
      VAR_33->li_base + VAR_15 + (2 - VAR_32->li_bchannel_id) : VAR_30;
  }
  else
  {
    VAR_30 = VAR_29;
    VAR_31 = VAR_29;
  }
  if (VAR_23)
  {
    VAR_17[VAR_26].flag_table[VAR_27] &= ~VAR_11;
    VAR_17[VAR_26].flag_table[VAR_28] &= ~VAR_11;
    VAR_17[VAR_27].flag_table[VAR_26] &= ~(VAR_2 | VAR_8);
    VAR_17[VAR_28].flag_table[VAR_26] &= ~(VAR_2 | VAR_8);
  }
  VAR_17[VAR_26].flag_table[VAR_30] &= ~VAR_11;
  VAR_17[VAR_26].flag_table[VAR_31] &= ~VAR_11;
  VAR_17[VAR_30].flag_table[VAR_26] &= ~(VAR_2 | VAR_8);
  VAR_17[VAR_31].flag_table[VAR_26] &= ~(VAR_2 | VAR_8);
  if (VAR_27 == VAR_30)
  {
    VAR_17[VAR_27].flag_table[VAR_30] &= ~VAR_5;
    VAR_17[VAR_28].flag_table[VAR_31] &= ~VAR_5;
  }
  else
  {
    if (VAR_17[VAR_27].flag_table[VAR_30] & VAR_5)
    {
      for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++)
      {
        if (VAR_25 != VAR_27)
          VAR_17[VAR_27].flag_table[VAR_25] &= ~VAR_5;
      }
    }
    if (VAR_17[VAR_28].flag_table[VAR_30] & VAR_5)
    {
      for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++)
      {
        if (VAR_25 != VAR_28)
          VAR_17[VAR_28].flag_table[VAR_25] &= ~VAR_5;
      }
    }
    if (VAR_17[VAR_30].flag_table[VAR_27] & VAR_5)
    {
      for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++)
      {
        if (VAR_25 != VAR_27)
          VAR_17[VAR_25].flag_table[VAR_27] &= ~VAR_5;
      }
    }
    if (VAR_17[VAR_30].flag_table[VAR_28] & VAR_5)
    {
      for (VAR_25 = 0; VAR_25 < VAR_18; VAR_25++)
      {
        if (VAR_25 != VAR_28)
          VAR_17[VAR_25].flag_table[VAR_28] &= ~VAR_5;
      }
    }
  }
  if (VAR_24 & VAR_6)
  {
    VAR_17[VAR_30].flag_table[VAR_27] |= VAR_5;
    VAR_17[VAR_31].flag_table[VAR_27] |= VAR_5;
    VAR_17[VAR_30].flag_table[VAR_28] |= VAR_5;
    VAR_17[VAR_31].flag_table[VAR_28] |= VAR_5;
  }
  if (VAR_24 & VAR_7)
  {
    VAR_17[VAR_27].flag_table[VAR_30] |= VAR_5;
    VAR_17[VAR_27].flag_table[VAR_31] |= VAR_5;
    VAR_17[VAR_28].flag_table[VAR_30] |= VAR_5;
    VAR_17[VAR_28].flag_table[VAR_31] |= VAR_5;
  }
  if (VAR_24 & VAR_12)
  {
    VAR_17[VAR_26].flag_table[VAR_27] |= VAR_11;
    VAR_17[VAR_26].flag_table[VAR_28] |= VAR_11;
  }
  if (VAR_24 & VAR_13)
  {
    VAR_17[VAR_26].flag_table[VAR_30] |= VAR_11;
    VAR_17[VAR_26].flag_table[VAR_31] |= VAR_11;
  }
  if (VAR_24 & VAR_3)
  {
    VAR_17[VAR_27].flag_table[VAR_26] |= VAR_2;
    VAR_17[VAR_28].flag_table[VAR_26] |= VAR_2;
  }
  if (VAR_24 & VAR_4)
  {
    VAR_17[VAR_30].flag_table[VAR_26] |= VAR_2;
    VAR_17[VAR_31].flag_table[VAR_26] |= VAR_2;
  }
  if (VAR_24 & VAR_9)
  {
    VAR_17[VAR_27].flag_table[VAR_26] |= VAR_8;
    VAR_17[VAR_28].flag_table[VAR_26] |= VAR_8;
  }
  if (VAR_24 & VAR_10)
  {
    VAR_17[VAR_30].flag_table[VAR_26] |= VAR_8;
    VAR_17[VAR_31].flag_table[VAR_26] |= VAR_8;
  }
  if (VAR_27 != VAR_28)
  {
    VAR_17[VAR_27].flag_table[VAR_28] |= VAR_5;
    VAR_17[VAR_28].flag_table[VAR_27] |= VAR_5;
  }
  if (VAR_30 != VAR_31)
  {
    VAR_17[VAR_30].flag_table[VAR_31] |= VAR_5;
    VAR_17[VAR_31].flag_table[VAR_30] |= VAR_5;
  }
}
