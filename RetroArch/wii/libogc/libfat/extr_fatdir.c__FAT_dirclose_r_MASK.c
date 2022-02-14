
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _reent {int dummy; } ;
struct TYPE_7__ {scalar_t__ dirStruct; } ;
struct TYPE_6__ {int inUse; TYPE_1__* partition; } ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_2__ DIR_STATE_STRUCT ;
typedef TYPE_3__ DIR_ITER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2 (struct _reent *VAR_0, DIR_ITER *VAR_1) {
 DIR_STATE_STRUCT* VAR_2 = (DIR_STATE_STRUCT*) (VAR_1->dirStruct);


 FUNC_0(&VAR_2->partition->lock);
 VAR_2->inUse = 0;
 FUNC_1(&VAR_2->partition->lock);

 return 0;
}
