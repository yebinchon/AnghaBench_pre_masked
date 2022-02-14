
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {int nr_segments; scalar_t__ start; TYPE_1__* segment; } ;
struct TYPE_2__ {scalar_t__ memsz; scalar_t__ mem; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct kimage *VAR_0)
{
        int VAR_1;
 FUNC_0("kexec information\n");
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_segments; VAR_1++) {
         FUNC_0("  segment[%d]: 0x%08x - 0x%08x (0x%08x)\n",
         VAR_1,
         (unsigned int)VAR_0->segment[VAR_1].mem,
         (unsigned int)VAR_0->segment[VAR_1].mem +
         VAR_0->segment[VAR_1].memsz,
         (unsigned int)VAR_0->segment[VAR_1].memsz);
 }
 FUNC_0("  start     : 0x%08x\n\n", (unsigned int)VAR_0->start);
}
