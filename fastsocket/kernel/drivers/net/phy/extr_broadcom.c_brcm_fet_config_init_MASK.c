
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22;


 VAR_20 = FUNC_2(VAR_18, VAR_1, VAR_0);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_19 = FUNC_1(VAR_18, VAR_4);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = VAR_5 |
       VAR_9 |
       VAR_7 |
       VAR_6 |
       VAR_8;

 VAR_20 = FUNC_2(VAR_18, VAR_4, VAR_19);
 if (VAR_20 < 0)
  return VAR_20;


 VAR_22 = FUNC_1(VAR_18, VAR_2);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_19 = VAR_22 | VAR_3;

 VAR_20 = FUNC_2(VAR_18, VAR_2, VAR_19);
 if (VAR_20 < 0)
  return VAR_20;


 VAR_19 = FUNC_1(VAR_18, VAR_13);
 if (VAR_19 < 0) {
  VAR_20 = VAR_19;
  goto done;
 }

 VAR_19 &= ~VAR_10;
 VAR_19 |= VAR_11;

 VAR_20 = FUNC_2(VAR_18, VAR_13, VAR_19);
 if (VAR_20 < 0)
  goto done;


 VAR_20 = FUNC_0(VAR_18, VAR_16,
           VAR_15);
 if (VAR_20 < 0)
  goto done;

 if (VAR_18->dev_flags & VAR_17) {

  VAR_20 = FUNC_0(VAR_18, VAR_14,
            VAR_12);
 }

done:

 VAR_21 = FUNC_2(VAR_18, VAR_2, VAR_22);
 if (!VAR_20)
  VAR_20 = VAR_21;

 return VAR_20;
}
