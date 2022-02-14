
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ perf0Mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int,int) ;
 TYPE_1__* VAR_3 ;
 int* VAR_4 ;

void FUNC_1(u32 *VAR_5,u32 *VAR_6)
{
 u32 VAR_7,VAR_8,VAR_9;

 VAR_8 = (FUNC_0(VAR_4[33],16,16))|(VAR_4[32]&0xffff);
 VAR_9 = (FUNC_0(VAR_4[35],16,16))|(VAR_4[34]&0xffff);



 *VAR_5 = 0;
 if(VAR_3->perf0Mode==VAR_0) {
  VAR_7 = VAR_9*1000;
  *VAR_5 = VAR_7/VAR_8;
 } else if(VAR_3->perf0Mode>=VAR_2 && VAR_3->perf0Mode<VAR_1) *VAR_5 = VAR_8;



}
