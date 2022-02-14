
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int advertising; int supported; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int) ;

int FUNC_4(struct phy_device *VAR_10)
{
 u32 VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15 = 0;



 VAR_10->advertising &= VAR_10->supported;
 VAR_11 = VAR_10->advertising;


 VAR_12 = VAR_13 = FUNC_2(VAR_10, VAR_6);

 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 &= ~(VAR_3 | VAR_2 | VAR_5 |
   VAR_4);
 VAR_13 |= FUNC_0(VAR_11);

 if (VAR_13 != VAR_12) {
  VAR_14 = FUNC_3(VAR_10, VAR_6, VAR_13);

  if (VAR_14 < 0)
   return VAR_14;
  VAR_15 = 1;
 }


 if (VAR_10->supported & (VAR_9 |
    VAR_8)) {
  VAR_12 = VAR_13 = FUNC_2(VAR_10, VAR_7);

  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 &= ~(VAR_0 | VAR_1);
  VAR_13 |= FUNC_1(VAR_11);

  if (VAR_13 != VAR_12) {
   VAR_14 = FUNC_3(VAR_10, VAR_7, VAR_13);

   if (VAR_14 < 0)
    return VAR_14;
   VAR_15 = 1;
  }
 }

 return VAR_15;
}
