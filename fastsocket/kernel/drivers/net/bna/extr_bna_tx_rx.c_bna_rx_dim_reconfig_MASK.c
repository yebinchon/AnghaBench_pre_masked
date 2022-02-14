
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ** dim_vector; } ;
struct bna {TYPE_1__ rx_mod; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct bna *VAR_2, const u32 VAR_3[][VAR_0])
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_2->rx_mod.dim_vector[VAR_4][VAR_5] = VAR_3[VAR_4][VAR_5];
}
