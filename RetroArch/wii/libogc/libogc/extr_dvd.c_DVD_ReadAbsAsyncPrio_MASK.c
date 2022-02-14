
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_4__ {int cmd; int cb; scalar_t__ txdsize; int offset; int len; void* buf; } ;
typedef TYPE_1__ dvdcmdblk ;
typedef int dvdcbcallback ;


 int FUNC_0 (int ,TYPE_1__*) ;

s32 FUNC_1(dvdcmdblk *VAR_0,void *VAR_1,u32 VAR_2,s64 VAR_3,dvdcbcallback VAR_4,s32 VAR_5)
{
 VAR_0->cmd = 0x0001;
 VAR_0->buf = VAR_1;
 VAR_0->len = VAR_2;
 VAR_0->offset = VAR_3;
 VAR_0->txdsize = 0;
 VAR_0->cb = VAR_4;

 return FUNC_0(VAR_5,VAR_0);
}
