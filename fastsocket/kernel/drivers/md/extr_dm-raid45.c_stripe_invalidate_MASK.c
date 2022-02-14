
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parity; int recover; } ;
struct TYPE_3__ {scalar_t__ flags; } ;
struct stripe {TYPE_2__ idx; TYPE_1__ io; } ;


 int FUNC_0 (struct stripe*) ;

__attribute__((used)) static void FUNC_1(struct stripe *VAR_0)
{
 VAR_0->io.flags = 0;
 VAR_0->idx.parity = VAR_0->idx.recover = -1;
 FUNC_0(VAR_0);
}
