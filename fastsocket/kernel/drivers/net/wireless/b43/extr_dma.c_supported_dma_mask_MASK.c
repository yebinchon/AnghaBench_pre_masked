
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int bus_type; int sdev; int bdev; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct b43_wldev*,scalar_t__) ;
 int FUNC_3 (struct b43_wldev*,scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static u64 FUNC_6(struct b43_wldev *VAR_6)
{
 u32 VAR_7;
 u16 VAR_8;

 switch (VAR_6->dev->bus_type) {
 }

 VAR_8 = FUNC_1(0, 0);
 FUNC_3(VAR_6, VAR_8 + VAR_1, VAR_0);
 VAR_7 = FUNC_2(VAR_6, VAR_8 + VAR_1);
 if (VAR_7 & VAR_0)
  return FUNC_0(32);

 return FUNC_0(30);
}
