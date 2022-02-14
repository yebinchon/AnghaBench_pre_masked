
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bcma_bus {int dummy; } ;
typedef int s32 ;


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
 int FUNC_0 (struct bcma_bus*,int**) ;
 int FUNC_1 (int**) ;

__attribute__((used)) static s32 FUNC_2(struct bcma_bus *VAR_15, u32 **VAR_16,
      u32 VAR_17, u8 VAR_18)
{
 u32 VAR_19, VAR_20, VAR_21, VAR_22 = 0;
 u32 VAR_23;

 u32 VAR_24 = FUNC_0(VAR_15, VAR_16);
 if ((!(VAR_24 & VAR_12)) ||
     ((VAR_24 & VAR_10) != VAR_11) ||
     ((VAR_24 & VAR_9) != VAR_17) ||
     (((VAR_24 & VAR_3) >> VAR_4) != VAR_18)) {
  FUNC_1(VAR_16);
  return -VAR_0;
 }

 VAR_19 = VAR_24 & VAR_1;
 if (VAR_24 & VAR_2)
  VAR_20 = FUNC_0(VAR_15, VAR_16);
 else
  VAR_20 = 0;

 if ((VAR_24 & VAR_5) == VAR_8) {
  VAR_23 = FUNC_0(VAR_15, VAR_16);
  VAR_21 = VAR_23 & VAR_14;
  if (VAR_23 & VAR_13)
   VAR_22 = FUNC_0(VAR_15, VAR_16);
 } else
  VAR_21 = VAR_6 <<
    ((VAR_24 & VAR_5) >> VAR_7);

 return VAR_19;
}
