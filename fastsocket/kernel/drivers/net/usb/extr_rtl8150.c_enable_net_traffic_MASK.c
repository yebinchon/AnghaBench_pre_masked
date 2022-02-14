
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int flags; int rx_creg; TYPE_1__* udev; } ;
typedef TYPE_2__ rtl8150_t ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int,int*) ;

__attribute__((used)) static int FUNC_6(rtl8150_t * VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8, VAR_9;

 if (!FUNC_3(VAR_5)) {
  FUNC_1(&VAR_5->udev->dev, "device reset failed\n");
 }

 VAR_8 = 0x9e;
 VAR_5->rx_creg = FUNC_0(VAR_8);
 VAR_7 = 0xd8;
 VAR_6 = 0x0c;
 if (!(VAR_8 & 0x80))
  FUNC_4(VAR_3, &VAR_5->flags);
 FUNC_5(VAR_5, VAR_2, 1, &VAR_8);
 FUNC_5(VAR_5, VAR_4, 1, &VAR_7);
 FUNC_5(VAR_5, VAR_0, 1, &VAR_6);
 FUNC_2(VAR_5, VAR_1, 1, &VAR_9);

 return 0;
}
