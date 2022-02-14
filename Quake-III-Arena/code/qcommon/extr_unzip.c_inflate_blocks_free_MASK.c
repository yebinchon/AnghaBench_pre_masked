
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int z_streamp ;
struct TYPE_5__ {struct TYPE_5__* hufts; struct TYPE_5__* window; } ;
typedef TYPE_1__ inflate_blocks_statef ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

int FUNC_3(inflate_blocks_statef *VAR_2, z_streamp VAR_3)
{
  FUNC_2(VAR_2, VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_2->window);
  FUNC_1(VAR_3, VAR_2->hufts);
  FUNC_1(VAR_3, VAR_2);
  FUNC_0(("inflate:   blocks freed\n"));
  return VAR_1;
}
