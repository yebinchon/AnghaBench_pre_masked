
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct PicoVideo {int type; int addr; scalar_t__ pending; } ;
struct TYPE_3__ {int dirtyPal; } ;
struct TYPE_4__ {unsigned char* cram; unsigned char* vramb; TYPE_1__ m; struct PicoVideo video; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned char VAR_1)
{
  struct PicoVideo *VAR_2 = &VAR_0.video;

  if (VAR_2->type == 3) {
    VAR_0.cram[VAR_2->addr & 0x1f] = VAR_1;
    VAR_0.m.dirtyPal = 1;
  } else {
    VAR_0.vramb[VAR_2->addr] = VAR_1;
  }
  VAR_2->addr = (VAR_2->addr + 1) & 0x3fff;

  VAR_2->pending = 0;
}
