
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rom; } ;
struct hpsb_host {TYPE_3__* driver; TYPE_2__ csr; } ;
struct TYPE_6__ {int (* devctl ) (struct hpsb_host*,int ,int ) ;int (* set_hw_config_rom ) (struct hpsb_host*,int ) ;} ;
struct TYPE_4__ {int bus_info_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpsb_host*,int ) ;
 int FUNC_1 (struct hpsb_host*,int ,int ) ;

void FUNC_2(struct hpsb_host *VAR_2)
{
 if (VAR_2->driver->set_hw_config_rom)
  VAR_2->driver->set_hw_config_rom(VAR_2,
      VAR_2->csr.rom->bus_info_data);
 VAR_2->driver->devctl(VAR_2, VAR_0, VAR_1);
}
