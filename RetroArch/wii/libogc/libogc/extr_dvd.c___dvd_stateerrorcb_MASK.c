
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_6__ {int state; int (* cb ) (int,TYPE_1__*) ;} ;
typedef TYPE_1__ dvdcmdblk ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(s32 VAR_4)
{
 dvdcmdblk *VAR_5;
 if(VAR_4==0x0010) {
  VAR_2->state = -1;
  FUNC_2();
  return;
 }

 VAR_3 = 1;
 VAR_5 = VAR_2;
 VAR_2 = &VAR_1;
 if(VAR_5->cb) VAR_5->cb(-1,VAR_5);
 if(VAR_0) {
  VAR_0 = 0;
  if(&FUNC_0) FUNC_0(0,VAR_5);
 }
 FUNC_1();
}
