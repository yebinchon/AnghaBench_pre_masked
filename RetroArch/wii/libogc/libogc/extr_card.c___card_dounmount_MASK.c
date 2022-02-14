
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {size_t result; int timeout_svc; scalar_t__ mount_step; scalar_t__ attached; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_5(s32 VAR_3,s32 VAR_4)
{
 u32 VAR_5;
 card_block *VAR_6;

 if(VAR_3<VAR_0 || VAR_3>=VAR_1) return;
 VAR_6 = &VAR_2[VAR_3];

 FUNC_3(VAR_5);
 if(VAR_6->attached) {
  VAR_6->attached = 0;
  VAR_6->mount_step = 0;
  VAR_6->result = VAR_4;
  FUNC_1(VAR_3,((void*)0));
  FUNC_0(VAR_3);
  FUNC_2(VAR_6->timeout_svc);
 }
 FUNC_4(VAR_5);
}
