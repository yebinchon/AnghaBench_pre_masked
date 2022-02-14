
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_4__ {int cmd; int cb; } ;
typedef TYPE_1__ dvdcmdblk ;
typedef int dvdcbcallback ;


 int FUNC_0 (int,TYPE_1__*) ;

s32 FUNC_1(dvdcmdblk *VAR_0,dvdcbcallback VAR_1)
{
 VAR_0->cmd = 0x08;
 VAR_0->cb = VAR_1;
 return FUNC_0(1,VAR_0);
}
