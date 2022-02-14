
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int s32 ;
typedef scalar_t__ mutex_t ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {TYPE_1__ object; int mutex; } ;
typedef TYPE_2__ mutex_st ;
struct TYPE_8__ {int prioceil; int onlyownerrelease; int nest_behavior; int mode; } ;
typedef TYPE_3__ lwp_mutex_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int FUNC_4 () ;

s32 FUNC_5(mutex_t *VAR_6,bool VAR_7)
{
 lwp_mutex_attr VAR_8;
 mutex_st *VAR_9;

 if(!VAR_6) return -1;

 VAR_9 = FUNC_2();
 if(!VAR_9) return -1;

 VAR_8.mode = VAR_0;
 VAR_8.nest_behavior = VAR_7?VAR_1:VAR_2;
 VAR_8.onlyownerrelease = VAR_5;
 VAR_8.prioceil = 1;
 FUNC_3(&VAR_9->mutex,&VAR_8,VAR_3);

 *VAR_6 = (mutex_t)(FUNC_1(VAR_4)|FUNC_0(VAR_9->object.id));
 FUNC_4();
 return 0;
}
