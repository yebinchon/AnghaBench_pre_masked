
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_graph {int dummy; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nouveau_graph* FUNC_0 (void*) ;
 TYPE_1__* FUNC_1 (void*) ;
 int FUNC_2 (struct nouveau_graph*,char*,int ) ;
 int FUNC_3 (struct nouveau_graph*,int ) ;
 int FUNC_4 (struct nouveau_graph*,int ,int,int ) ;

bool
FUNC_5(void *VAR_3)
{
 struct nouveau_graph *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5 = 0xffffffff;

 if (FUNC_1(VAR_3)->card_type == VAR_2)
  VAR_5 &= ~VAR_1;

 if (!FUNC_4(VAR_4, VAR_0, VAR_5, 0)) {
  FUNC_2(VAR_4, "idle timed out with status 0x%08x\n",
    FUNC_3(VAR_4, VAR_0));
  return 0;
 }

 return 1;
}
