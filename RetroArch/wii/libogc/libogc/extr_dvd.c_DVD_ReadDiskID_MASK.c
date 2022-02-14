
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int s32 ;
typedef int dvddiskid ;
struct TYPE_4__ {int cmd; int cb; scalar_t__ txdsize; scalar_t__ offset; int len; int * buf; } ;
typedef TYPE_1__ dvdcmdblk ;
typedef int dvdcbcallback ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__*) ;

s32 FUNC_1(dvdcmdblk *VAR_1,dvddiskid *VAR_2,dvdcbcallback VAR_3)
{
 if(!VAR_1 || !VAR_2) return 0;

 VAR_1->cmd = 0x0005;
 VAR_1->buf = VAR_2;
 VAR_1->len = VAR_0;
 VAR_1->offset = 0;
 VAR_1->txdsize = 0;
 VAR_1->cb = VAR_3;

 return FUNC_0(2,VAR_1);
}
