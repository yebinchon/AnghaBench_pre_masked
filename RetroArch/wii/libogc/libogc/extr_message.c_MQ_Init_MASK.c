
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int mqmsg_t ;
typedef scalar_t__ mqbox_t ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_1__ object; int mqueue; } ;
typedef TYPE_2__ mqbox_st ;
struct TYPE_9__ {int mode; } ;
typedef TYPE_3__ mq_attr ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,TYPE_3__*,int ,int) ;

s32 FUNC_6(mqbox_t *VAR_4,u32 VAR_5)
{
 mq_attr VAR_6;
 mqbox_st *VAR_7 = ((void*)0);

 if(!VAR_4) return -1;

 VAR_7 = FUNC_2();
 if(!VAR_7) return VAR_3;

 VAR_6.mode = VAR_0;
 if(!FUNC_5(&VAR_7->mqueue,&VAR_6,VAR_5,sizeof(mqmsg_t))) {
  FUNC_3(VAR_7);
  FUNC_4();
  return VAR_3;
 }

 *VAR_4 = (mqbox_t)(FUNC_1(VAR_1)|FUNC_0(VAR_7->object.id));
 FUNC_4();
 return VAR_2;
}
