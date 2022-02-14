
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PicoVideo {size_t addr; scalar_t__ pending; } ;
struct TYPE_2__ {unsigned char* vramb; struct PicoVideo video; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static unsigned char FUNC_0(void)
{
  struct PicoVideo *VAR_1 = &VAR_0.video;
  unsigned char VAR_2;

  VAR_2 = VAR_0.vramb[VAR_1->addr];
  VAR_1->addr = (VAR_1->addr + 1) & 0x3fff;
  VAR_1->pending = 0;
  return VAR_2;
}
