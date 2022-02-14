
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int l2l1; } ;
struct TYPE_3__ {struct BCState* bcs; int hardware; int bc; } ;
struct PStack {TYPE_2__ l2; TYPE_1__ l1; } ;
struct BCState {struct PStack* st; int channel; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct BCState*) ;
 int FUNC_1 (struct PStack*) ;
 int FUNC_2 (struct PStack*) ;

__attribute__((used)) static int
FUNC_3(struct PStack *VAR_1, struct BCState *VAR_2)
{
 VAR_2->channel = VAR_1->l1.bc;
 if (FUNC_0(VAR_1->l1.hardware, VAR_2)) return (-1);
 VAR_1->l1.bcs = VAR_2;
 VAR_1->l2.l2l1 = VAR_0;
 FUNC_2(VAR_1);
 VAR_2->st = VAR_1;
 FUNC_1(VAR_1);
 return (0);
}
