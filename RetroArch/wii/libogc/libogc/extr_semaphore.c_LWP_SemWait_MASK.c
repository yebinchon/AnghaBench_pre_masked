
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_8__ {TYPE_1__ object; int sema; } ;
typedef TYPE_3__ sema_st ;
typedef int sem_t ;
typedef int s32 ;
struct TYPE_7__ {int ret_code; } ;
struct TYPE_9__ {TYPE_2__ wait; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 () ;
 TYPE_4__* VAR_4 ;

s32 FUNC_3(sem_t VAR_5)
{
 sema_st *VAR_6 = FUNC_0(VAR_5);
 if(!VAR_6) return -1;

 FUNC_1(&VAR_6->sema,VAR_6->object.id,VAR_3,VAR_2);
 FUNC_2();

 switch(VAR_4->wait.ret_code) {
  case 130:
   break;
  case 128:
   return VAR_0;
  case 131:
   return VAR_0;
  case 129:
   return VAR_1;

 }
 return 0;
}
