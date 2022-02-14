
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
typedef int dvddrvinfo ;
struct TYPE_4__ {int cmd; int len; int cb; scalar_t__ txdsize; int * buf; } ;
typedef TYPE_1__ dvdcmdblk ;
typedef int dvdcbcallback ;


 int FUNC_0 (int,TYPE_1__*) ;

s32 FUNC_1(dvdcmdblk *VAR_0,dvddrvinfo *VAR_1,dvdcbcallback VAR_2)
{
 VAR_0->cmd = 0x000e;
 VAR_0->buf = VAR_1;
 VAR_0->len = 0x20;
 VAR_0->txdsize = 0;
 VAR_0->cb = VAR_2;
 return FUNC_0(2,VAR_0);
}
