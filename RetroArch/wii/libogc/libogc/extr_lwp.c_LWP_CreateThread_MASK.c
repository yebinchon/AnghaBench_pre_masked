
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int s32 ;
typedef scalar_t__ lwp_t ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_1__ object; } ;
typedef TYPE_2__ lwp_cntrl ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*,void*,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,void* (*) (void*),void*) ;

s32 FUNC_8(lwp_t *VAR_2,void* (*VAR_3)(void *),void *VAR_4,void *VAR_5,u32 VAR_6,u8 VAR_7)
{
 u32 VAR_8;
 lwp_cntrl *VAR_9;

 if(!VAR_2 || !VAR_3) return -1;

 VAR_9 = FUNC_2();
 if(!VAR_9) return -1;

 VAR_8 = FUNC_6(VAR_9,VAR_5,VAR_6,FUNC_4(VAR_7),0,VAR_1);
 if(!VAR_8) {
  FUNC_3(VAR_9);
  FUNC_5();
  return -1;
 }

 VAR_8 = FUNC_7(VAR_9,VAR_3,VAR_4);
 if(!VAR_8) {
  FUNC_3(VAR_9);
  FUNC_5();
  return -1;
 }

 *VAR_2 = (lwp_t)(FUNC_1(VAR_0)|FUNC_0(VAR_9->object.id));
 FUNC_5();

 return 0;
}
