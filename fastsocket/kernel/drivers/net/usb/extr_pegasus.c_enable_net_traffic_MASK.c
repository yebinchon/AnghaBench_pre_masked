
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct usb_device {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {size_t dev_index; int eth_regs; int phy; } ;
typedef TYPE_1__ pegasus_t ;
typedef int data ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_8__ {scalar_t__ vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int*,int) ;
 scalar_t__ VAR_9 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*,int ,int,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int*) ;
 TYPE_3__* VAR_10 ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_11, struct usb_device *VAR_12)
{
 __u16 VAR_13;
 __u8 VAR_14[4];
 pegasus_t *VAR_15 = FUNC_1(VAR_11);
 int VAR_16;

 FUNC_2(VAR_15, VAR_15->phy, VAR_4, &VAR_13);
 VAR_14[0] = 0xc9;
 VAR_14[1] = 0;
 if (VAR_13 & (VAR_0 | VAR_2))
  VAR_14[1] |= 0x20;
 if (VAR_13 & (VAR_0 | VAR_1))
  VAR_14[1] |= 0x10;
 if (VAR_9)
  VAR_14[1] = 0;
 VAR_14[2] = (VAR_8 & 1) ? 0x09 : 0x01;

 FUNC_0(VAR_15->eth_regs, VAR_14, sizeof (VAR_14));
 VAR_16 = FUNC_3(VAR_15, VAR_3, 3, VAR_14);

 if (VAR_10[VAR_15->dev_index].vendor == VAR_6 ||
     VAR_10[VAR_15->dev_index].vendor == VAR_7 ||
     VAR_10[VAR_15->dev_index].vendor == VAR_5) {
  u16 VAR_17;
  FUNC_2(VAR_15, 0, 0x1b, &VAR_17);
  FUNC_4(VAR_15, 0, 0x1b, VAR_17 | 4);
 }

 return VAR_16;
}
