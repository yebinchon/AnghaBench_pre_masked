
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* invoke_used; } ;
struct TYPE_4__ {TYPE_1__ ni1; } ;
struct PStack {TYPE_2__ prot; } ;



__attribute__((used)) static void FUNC_0(struct PStack *VAR_0, unsigned char VAR_1)
{

  if (!VAR_1) return;

  VAR_0->prot.ni1.invoke_used[VAR_1 >> 3] &= ~(1 << (VAR_1 & 7));
}
