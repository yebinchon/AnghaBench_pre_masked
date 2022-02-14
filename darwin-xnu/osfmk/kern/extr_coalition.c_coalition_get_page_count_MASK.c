
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_3__* coalition_t ;
struct TYPE_8__ {int other; int services; int extensions; int leader; } ;
struct TYPE_7__ {int tasks; } ;
struct TYPE_9__ {int type; TYPE_2__ j; TYPE_1__ r; } ;




 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int const,int*) ;

uint64_t FUNC_4(coalition_t VAR_1, int *VAR_2)
{
 uint64_t VAR_3 = 0;
 int VAR_4 = 0;

 if (VAR_2)
  *VAR_2 = 0;
 if (!VAR_1)
  return VAR_3;

 FUNC_0(VAR_1);

 switch (VAR_1->type) {
 case 128:
  VAR_3 += FUNC_3(&VAR_1->r.tasks, 128, &VAR_4);
  break;
 case 129:
  if (VAR_1->j.leader) {
   VAR_3 += FUNC_2(VAR_1->j.leader);
   VAR_4 = 1;
  }
  VAR_3 += FUNC_3(&VAR_1->j.extensions, 129, &VAR_4);
  VAR_3 += FUNC_3(&VAR_1->j.services, 129, &VAR_4);
  VAR_3 += FUNC_3(&VAR_1->j.other, 129, &VAR_4);
  break;
 default:
  break;
 }

 FUNC_1(VAR_1);

 if (VAR_2)
  *VAR_2 = VAR_4;

 return VAR_3 / VAR_0;
}
