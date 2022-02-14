
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int data; int addr; } ;
struct TYPE_4__ {scalar_t__ speed; int duplex; int port; } ;
struct TYPE_6__ {TYPE_2__ mii; TYPE_1__ link; int pmt; } ;
struct mac_device_info {TYPE_3__ hw; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mac_device_info* FUNC_0 (int,int ) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;

struct mac_device_info *FUNC_2(unsigned long VAR_7)
{
 struct mac_device_info *VAR_8;

 VAR_8 = FUNC_0(sizeof(const struct mac_device_info), VAR_0);

 FUNC_1("\tMAC 10/100\n");

 VAR_8->ops = &VAR_6;
 VAR_8->hw.pmt = VAR_5;
 VAR_8->hw.link.port = VAR_2;
 VAR_8->hw.link.duplex = VAR_1;
 VAR_8->hw.link.speed = 0;
 VAR_8->hw.mii.addr = VAR_3;
 VAR_8->hw.mii.data = VAR_4;

 return VAR_8;
}
