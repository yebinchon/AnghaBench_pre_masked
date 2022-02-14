
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_4__ {int cmd; int cb; } ;
typedef TYPE_1__ dvdcmdblk ;
typedef int dvdcbcallback ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,TYPE_1__*) ;

s32 FUNC_2(dvdcmdblk *VAR_1,dvdcbcallback VAR_2)
{
 FUNC_0(VAR_0);

 VAR_1->cmd = 0x10;
 VAR_1->cb = VAR_2;
 return FUNC_1(1,VAR_1);
}
