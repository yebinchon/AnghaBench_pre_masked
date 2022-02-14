
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_9)
{
 int VAR_10, VAR_11;


 VAR_10 = FUNC_0(VAR_9, VAR_3, VAR_1);

 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_9->interface) {
 case 129:
  VAR_11 = VAR_7;
  break;
 case 128:
  VAR_11 = VAR_7 | VAR_8;
  break;
 default:
  return -VAR_2;
 }


 VAR_10 = FUNC_0(VAR_9, VAR_6, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_0(VAR_9, VAR_4, VAR_5);

 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_0(VAR_9, VAR_3, VAR_0);

 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
