
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {int s_li_request; } ;
struct TYPE_3__ {int li_list_mtx; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_2)
{
 FUNC_2(&VAR_1);
 if (!VAR_0) {
  FUNC_3(&VAR_1);
  return;
 }

 FUNC_2(&VAR_0->li_list_mtx);
 FUNC_1(FUNC_0(VAR_2)->s_li_request);
 FUNC_3(&VAR_0->li_list_mtx);
 FUNC_3(&VAR_1);
}
