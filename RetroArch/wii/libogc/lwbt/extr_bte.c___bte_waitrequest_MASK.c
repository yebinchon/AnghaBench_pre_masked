
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ctrl_req_t {scalar_t__ state; int err; TYPE_1__* pcb; } ;
typedef int s32 ;
struct TYPE_2__ {int cmdq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline s32 FUNC_3(struct ctrl_req_t *VAR_3)
{
 s32 VAR_4;
 u32 VAR_5;

 if(!VAR_3 || !VAR_3->pcb) return VAR_0;

 FUNC_1(VAR_5);
 while(VAR_3->state!=VAR_2
  && VAR_3->state!=VAR_1)
 {
  FUNC_0(VAR_3->pcb->cmdq);
 }
 VAR_4 = VAR_3->err;
 FUNC_2(VAR_5);

 return VAR_4;
}
