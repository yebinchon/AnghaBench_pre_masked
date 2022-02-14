
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvbios_init {int execute; int offset; int crtc; int outp; int bios; int subdev; } ;
struct TYPE_2__ {int * script; } ;
struct dp_state {TYPE_1__ info; int head; int outp; int disp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvbios_init*) ;

__attribute__((used)) static void
FUNC_3(struct dp_state *VAR_0)
{
 struct nvbios_init VAR_1 = {
  .subdev = FUNC_1(VAR_0->disp),
  .bios = FUNC_0(VAR_0->disp),
  .outp = VAR_0->outp,
  .crtc = VAR_0->head,
  .execute = 1,
 };


 VAR_1.offset = VAR_0->info.script[1],
 FUNC_2(&VAR_1);
}
