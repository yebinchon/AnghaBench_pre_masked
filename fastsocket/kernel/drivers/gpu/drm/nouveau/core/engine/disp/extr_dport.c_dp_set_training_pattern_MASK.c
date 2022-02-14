
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dp_state {int aux; int head; int outp; int disp; TYPE_1__* func; } ;
struct TYPE_2__ {int (* pattern ) (int ,int ,int ,int ) ;} ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct dp_state *VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 FUNC_0("training pattern %d\n", VAR_3);
 VAR_2->func->pattern(VAR_2->disp, VAR_2->outp, VAR_2->head, VAR_3);

 FUNC_1(VAR_2->aux, VAR_0, &VAR_4, 1);
 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_3;
 FUNC_2(VAR_2->aux, VAR_0, &VAR_4, 1);
}
