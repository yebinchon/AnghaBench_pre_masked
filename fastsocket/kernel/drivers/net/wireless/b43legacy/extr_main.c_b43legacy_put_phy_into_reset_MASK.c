
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_device {int dummy; } ;
struct b43legacy_wldev {struct ssb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ssb_device*,int ) ;
 int FUNC_2 (struct ssb_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct b43legacy_wldev *VAR_4)
{
 struct ssb_device *VAR_5 = VAR_4->dev;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 VAR_6 &= ~VAR_0;
 VAR_6 |= VAR_1;
 VAR_6 |= VAR_3;
 FUNC_2(VAR_5, VAR_2, VAR_6);
 FUNC_0(1);

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_1;
 FUNC_2(VAR_5, VAR_2, VAR_6);
 FUNC_0(1);
}
