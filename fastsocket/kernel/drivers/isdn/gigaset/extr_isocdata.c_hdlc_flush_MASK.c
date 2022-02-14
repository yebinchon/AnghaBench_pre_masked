
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bc_state {int fcs; TYPE_1__* cs; int * skb; int ignore; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static inline void FUNC_5(struct bc_state *VAR_3)
{

 if (FUNC_2(VAR_3->skb != ((void*)0)))
  FUNC_4(VAR_3->skb, 0);
 else if (!VAR_3->ignore) {
  if ((VAR_3->skb = FUNC_0(VAR_2 + VAR_0)) != ((void*)0))
   FUNC_3(VAR_3->skb, VAR_0);
  else
   FUNC_1(VAR_3->cs->dev, "could not allocate skb\n");
 }


 VAR_3->fcs = VAR_1;
}
