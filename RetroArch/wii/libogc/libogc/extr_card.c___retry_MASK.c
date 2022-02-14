
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_4__ {int* cmd; int* workarea; int cmd_mode; int cmd_usr_buf; int latency; int cmd_len; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t,int ,int,int,int ) ;
 scalar_t__ FUNC_2 (size_t,int*,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static s32 FUNC_6(s32 VAR_10)
{
 u32 VAR_11;
 card_block *VAR_12 = ((void*)0);

 if(VAR_10<VAR_3 || VAR_10>=VAR_4) return VAR_0;
 VAR_12 = &VAR_9[VAR_10];
 if(FUNC_3(VAR_10,VAR_5,VAR_6)==0) {
  FUNC_4(VAR_10);
  return VAR_0;
 }

 FUNC_5(VAR_12);

 if(FUNC_2(VAR_10,VAR_12->cmd,VAR_12->cmd_len,VAR_7)==0) {
  FUNC_0(VAR_10);
  FUNC_4(VAR_10);
  return VAR_0;
 }

 if(VAR_12->cmd[0]==0x52) {
  if(FUNC_2(VAR_10,VAR_12->workarea+VAR_2,VAR_12->latency,VAR_7)==0) {
   FUNC_0(VAR_10);
   FUNC_4(VAR_10);
   return VAR_0;
  }
 }

 if(VAR_12->cmd_mode==-1) {
  FUNC_0(VAR_10);
  FUNC_4(VAR_10);
  return VAR_1;
 }

 VAR_11 = 128;
 if(VAR_12->cmd[0]==0x52) VAR_11 = VAR_2;
 if(FUNC_1(VAR_10,VAR_12->cmd_usr_buf,VAR_11,VAR_12->cmd_mode,VAR_8)==0) {
  FUNC_0(VAR_10);
  FUNC_4(VAR_10);
  return VAR_0;
 }
 return VAR_1;
}
