
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
typedef int s32 ;
struct TYPE_4__ {int cmd; int cb; void* len; void* offset; } ;
typedef TYPE_1__ dvdcmdblk ;
typedef int dvdcbcallback ;


 int FUNC_0 (int,TYPE_1__*) ;

s32 FUNC_1(dvdcmdblk *VAR_0,u32 VAR_1,u32 VAR_2,dvdcbcallback VAR_3)
{
 if(!VAR_0) return 0;

 VAR_0->cmd = 0x000d;
 VAR_0->offset = VAR_1;
 VAR_0->len = VAR_2;
 VAR_0->cb = VAR_3;

 return FUNC_0(2,VAR_0);
}
