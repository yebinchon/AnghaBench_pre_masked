
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvbios_init {TYPE_2__* outp; } ;
struct TYPE_3__ {int link; } ;
struct TYPE_4__ {TYPE_1__ sorconf; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline int
FUNC_1(struct nvbios_init *VAR_0)
{
 if (VAR_0->outp)
  return !(VAR_0->outp->sorconf.link & 1);
 FUNC_0("script needs OR link\n");
 return 0;
}
