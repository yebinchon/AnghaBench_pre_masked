
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_grp {int blkg; } ;
struct throtl_data {TYPE_1__* queue; } ;
struct TYPE_2__ {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct throtl_grp*) ;
 struct throtl_grp* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct throtl_grp*) ;

__attribute__((used)) static struct throtl_grp *FUNC_4(struct throtl_data *VAR_1)
{
 struct throtl_grp *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0, VAR_1->queue->node);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(&VAR_2->blkg);

 if (VAR_3) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 FUNC_3(VAR_2);
 return VAR_2;
}
