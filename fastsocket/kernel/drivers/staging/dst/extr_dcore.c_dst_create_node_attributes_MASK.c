
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_node {TYPE_1__* info; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct dst_node *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3=0; VAR_3<FUNC_0(VAR_0); ++VAR_3) {
  VAR_2 = FUNC_1(&VAR_1->info->device,
    &VAR_0[VAR_3]);
  if (VAR_2)
   goto err_out_remove_all;
 }
 return 0;

err_out_remove_all:
 while (--VAR_3 >= 0)
  FUNC_2(&VAR_1->info->device,
    &VAR_0[VAR_3]);

 return VAR_2;
}
