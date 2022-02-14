
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nvbios_init {int ramcfg; TYPE_2__* bios; } ;
struct TYPE_3__ {int major; } ;
struct TYPE_4__ {TYPE_1__ version; } ;


 int FUNC_0 (struct nvbios_init*,int) ;

__attribute__((used)) static u8
FUNC_1(struct nvbios_init *VAR_0)
{
 if (!VAR_0->ramcfg || VAR_0->bios->version.major < 0x70)
  VAR_0->ramcfg = FUNC_0(VAR_0, 0x101000);
 return (VAR_0->ramcfg & 0x00000003c) >> 2;
}
