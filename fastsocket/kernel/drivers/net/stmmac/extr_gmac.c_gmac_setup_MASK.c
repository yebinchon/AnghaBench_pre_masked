
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int data; int addr; } ;
struct TYPE_4__ {int speed; int duplex; int port; } ;
struct TYPE_6__ {TYPE_2__ mii; TYPE_1__ link; int pmt; } ;
struct mac_device_info {TYPE_3__ hw; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mac_device_info* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (scalar_t__) ;

struct mac_device_info *FUNC_3(unsigned long VAR_9)
{
 struct mac_device_info *VAR_10;
 u32 VAR_11 = FUNC_2(VAR_9 + VAR_6);

 FUNC_1("\tGMAC - user ID: 0x%x, Synopsys ID: 0x%x\n",
        ((VAR_11 & 0x0000ff00) >> 8), (VAR_11 & 0x000000ff));

 VAR_10 = FUNC_0(sizeof(const struct mac_device_info), VAR_0);

 VAR_10->ops = &VAR_8;
 VAR_10->hw.pmt = VAR_7;
 VAR_10->hw.link.port = VAR_3;
 VAR_10->hw.link.duplex = VAR_1;
 VAR_10->hw.link.speed = VAR_2;
 VAR_10->hw.mii.addr = VAR_4;
 VAR_10->hw.mii.data = VAR_5;

 return VAR_10;
}
