
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parport_uss720_private {int * reg; } ;
struct TYPE_3__ {int ecr; int ctr; } ;
struct TYPE_4__ {TYPE_1__ pc; } ;
struct parport_state {TYPE_2__ u; } ;
struct parport {struct parport_uss720_private* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct parport*,int,int *,int ) ;
 int FUNC_1 (struct parport*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_1, struct parport_state *VAR_2)
{
 struct parport_uss720_private *VAR_3 = VAR_1->private_data;

 FUNC_1(VAR_1, 2, VAR_2->u.pc.ctr, VAR_0);
 FUNC_1(VAR_1, 6, VAR_2->u.pc.ecr, VAR_0);
 FUNC_0(VAR_1, 2, ((void*)0), VAR_0);
 VAR_3->reg[1] = VAR_2->u.pc.ctr;
 VAR_3->reg[2] = VAR_2->u.pc.ecr;
}
