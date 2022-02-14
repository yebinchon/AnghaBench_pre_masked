
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int s32 ;
typedef scalar_t__ mutex_t ;
typedef int cond_t ;
struct TYPE_6__ {scalar_t__ lock; int wait_queue; } ;
typedef TYPE_2__ cond_st ;
struct TYPE_5__ {scalar_t__ ret_code; int id; int * queue; } ;
struct TYPE_7__ {TYPE_1__ wait; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static s32 FUNC_8(cond_t VAR_4,mutex_t VAR_5,u64 VAR_6,u8 VAR_7)
{
 u32 VAR_8,VAR_9,VAR_10;
 cond_st *VAR_11 = FUNC_4(VAR_4);

 if(!VAR_11) return -1;

 if(VAR_11->lock!=VAR_2 && VAR_11->lock!=VAR_5) {
  FUNC_5();
  return VAR_0;
 }

 FUNC_1(VAR_5);
 if(!VAR_7) {
  VAR_11->lock = VAR_5;
  FUNC_2(VAR_10);
  FUNC_6(&VAR_11->wait_queue);
  VAR_3->wait.ret_code = 0;
  VAR_3->wait.queue = &VAR_11->wait_queue;
  VAR_3->wait.id = VAR_4;
  FUNC_3(VAR_10);
  FUNC_7(&VAR_11->wait_queue,VAR_6);
  FUNC_5();

  VAR_8 = VAR_3->wait.ret_code;
  if(VAR_8 && VAR_8!=VAR_1)
   return VAR_8;
 } else {
  FUNC_5();
  VAR_8 = VAR_1;
 }

 VAR_9 = FUNC_0(VAR_5);
 if(VAR_9)
  return VAR_0;

 return VAR_8;
}
