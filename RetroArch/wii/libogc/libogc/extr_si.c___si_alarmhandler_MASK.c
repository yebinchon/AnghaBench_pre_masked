
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ syswd_t ;
struct TYPE_2__ {int chan; int callback; int in_bytes; int in; int out_bytes; int out; } ;


 scalar_t__ FUNC_0 (int,int ,int ,int ,int ,int ) ;
 scalar_t__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(syswd_t VAR_2,void *VAR_3)
{
 u32 VAR_4 = 0;

 while(VAR_4<4)
   {
  if(VAR_0[VAR_4]==VAR_2)
         break;
  VAR_4++;
 }
 if(VAR_4==4)
      return;

 if(VAR_1[VAR_4].chan!=-1) {
  if(FUNC_0(VAR_1[VAR_4].chan,VAR_1[VAR_4].out,VAR_1[VAR_4].out_bytes,VAR_1[VAR_4].in,VAR_1[VAR_4].in_bytes,VAR_1[VAR_4].callback)) VAR_1[VAR_4].chan = -1;
 }
}
