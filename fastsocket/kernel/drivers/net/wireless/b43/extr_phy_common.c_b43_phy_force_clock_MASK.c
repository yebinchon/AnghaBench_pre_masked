
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct b43_wldev {TYPE_1__* dev; TYPE_2__ phy; } ;
struct TYPE_3__ {int bus_type; int sdev; int bdev; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(struct b43_wldev *VAR_6, bool VAR_7)
{
 u32 VAR_8;

 FUNC_0(VAR_6->phy.type != VAR_1 &&
  VAR_6->phy.type != VAR_0);

 switch (VAR_6->dev->bus_type) {
 }
}
