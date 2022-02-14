
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_4__ {int cmd; int state; int len; int buf; } ;
typedef TYPE_1__ dvdcmdblk ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 () ;

s32 FUNC_5(s32 VAR_2,dvdcmdblk *VAR_3)
{
 s32 VAR_4;
 u32 VAR_5;
 if(VAR_0 &&
  (VAR_3->cmd==0x0001 || VAR_3->cmd==0x00004
  || VAR_3->cmd==0x0005 || VAR_3->cmd==0x000e)) FUNC_0(VAR_3->buf,VAR_3->len);

 FUNC_1(VAR_5);
 VAR_3->state = 0x0002;
 VAR_4 = FUNC_3(VAR_2,VAR_3);
 if(!VAR_1) FUNC_4();
 FUNC_2(VAR_5);
 return VAR_4;
}
