
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* bas; } ;
struct bc_state {int fcs; TYPE_3__* cs; int * skb; TYPE_2__ hw; int ignore; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int alignerrs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int *,TYPE_3__*,struct bc_state*) ;
 int FUNC_4 (struct bc_state*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(struct bc_state *VAR_3, unsigned VAR_4)
{
 if (FUNC_6(VAR_3->ignore)) {
  VAR_3->ignore--;
  FUNC_4(VAR_3);
  return;
 }

 FUNC_2(VAR_3->cs->dev, "received partial byte (%d bits)\n", VAR_4);
 VAR_3->hw.bas->alignerrs++;
 FUNC_3(VAR_3->skb, VAR_3->cs, VAR_3);

 if ((VAR_3->skb = FUNC_0(VAR_2 + VAR_0)) != ((void*)0))
  FUNC_5(VAR_3->skb, VAR_0);
 else
  FUNC_1(VAR_3->cs->dev, "could not allocate skb\n");
 VAR_3->fcs = VAR_1;
}
