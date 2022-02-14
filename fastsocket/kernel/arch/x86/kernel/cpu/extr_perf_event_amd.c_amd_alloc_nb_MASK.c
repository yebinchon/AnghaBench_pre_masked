
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amd_nb {int nb_id; TYPE_1__* event_constraints; } ;
struct TYPE_4__ {int num_counters; } ;
struct TYPE_3__ {int weight; int idxmsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 struct amd_nb* FUNC_2 (int,int,int ) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static struct amd_nb *FUNC_3(int VAR_3)
{
 struct amd_nb *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(struct amd_nb), VAR_0 | VAR_1,
     FUNC_1(VAR_3));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->nb_id = -1;




 for (VAR_5 = 0; VAR_5 < VAR_2.num_counters; VAR_5++) {
  FUNC_0(VAR_5, VAR_4->event_constraints[VAR_5].idxmsk);
  VAR_4->event_constraints[VAR_5].weight = 1;
 }
 return VAR_4;
}
