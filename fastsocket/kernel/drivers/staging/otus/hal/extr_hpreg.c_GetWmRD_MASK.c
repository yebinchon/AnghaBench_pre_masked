
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u64_t ;
typedef scalar_t__ u32_t ;
typedef scalar_t__ u16_t ;
typedef size_t s16_t ;
struct TYPE_8__ {scalar_t__ regDmnEnum; size_t regDmn2GHz; size_t regDmn5GHz; int pscanMask; scalar_t__ flags5GHz; scalar_t__ flags2GHz; } ;
struct TYPE_7__ {scalar_t__ flags; int pscan; } ;
typedef TYPE_1__ REG_DOMAIN ;
typedef TYPE_2__ REG_DMN_PAIR_MAPPING ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*,scalar_t__) ;

u8_t FUNC_3(u16_t VAR_6, u16_t VAR_7, REG_DOMAIN *VAR_8)
{
 s16_t VAR_9, VAR_10, VAR_11;
 u64_t VAR_12=VAR_1;
 REG_DMN_PAIR_MAPPING *VAR_13=((void*)0);

 for (VAR_9=0, VAR_10=0; (VAR_9<FUNC_0(VAR_4))&&(!VAR_10); VAR_9++)
 {
  if (VAR_4[VAR_9].regDmnEnum == VAR_6)
  {
   VAR_13 = &VAR_4[VAR_9];
   VAR_10 = 1;
  }
 }
 if (!VAR_10)
 {
  FUNC_2("Failed to find reg domain pair ", VAR_6);
  return VAR_0;
 }

 if (VAR_7 & VAR_3)
 {
  VAR_11 = VAR_13->regDmn2GHz;
  VAR_12 = VAR_13->flags2GHz;
 }
    else
 {
  VAR_11 = VAR_13->regDmn5GHz;
  VAR_12 = VAR_13->flags5GHz;
 }






 for (VAR_9=0;VAR_9<FUNC_0(VAR_5); VAR_9++)
 {
  if (VAR_5[VAR_9].regDmnEnum == VAR_11)
  {
   if (VAR_8 != ((void*)0))
   {
    FUNC_1((u8_t *)VAR_8, (u8_t *)&VAR_5[VAR_9],
       sizeof(REG_DOMAIN));
   }
  }
 }
 VAR_8->pscan &= VAR_13->pscanMask;
    VAR_8->flags = (u32_t)VAR_12;
 return VAR_2;
}
