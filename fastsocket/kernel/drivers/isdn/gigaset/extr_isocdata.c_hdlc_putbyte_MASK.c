
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* bas; } ;
struct bc_state {TYPE_4__* skb; TYPE_3__ hw; TYPE_1__* cs; int fcs; } ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_7__ {int giants; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned char* FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,unsigned char) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(unsigned char VAR_1, struct bc_state *VAR_2)
{
 VAR_2->fcs = FUNC_1(VAR_2->fcs, VAR_1);
 if (FUNC_4(VAR_2->skb == ((void*)0))) {

  return;
 }
 if (FUNC_4(VAR_2->skb->len == VAR_0)) {
  FUNC_3(VAR_2->cs->dev, "received oversized packet discarded\n");
  VAR_2->hw.bas->giants++;
  FUNC_2(VAR_2->skb);
  VAR_2->skb = ((void*)0);
  return;
 }
 *FUNC_0(VAR_2->skb, 1) = VAR_1;
}
