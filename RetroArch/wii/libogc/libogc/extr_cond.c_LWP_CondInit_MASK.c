
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
typedef scalar_t__ cond_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ object; int wait_queue; int lock; } ;
typedef TYPE_2__ cond_st ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int ,int ) ;

s32 FUNC_5(cond_t *VAR_6)
{
 cond_st *VAR_7;

 if(!VAR_6) return -1;

 VAR_7 = FUNC_2();
 if(!VAR_7) return VAR_0;

 VAR_7->lock = VAR_2;
 FUNC_4(&VAR_7->wait_queue,VAR_5,VAR_4,VAR_1);

 *VAR_6 = (cond_t)(FUNC_1(VAR_3)|FUNC_0(VAR_7->object.id));
 FUNC_3();

 return 0;
}
