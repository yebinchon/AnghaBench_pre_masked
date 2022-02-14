
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* cb ) (int,TYPE_1__*) ;} ;
typedef TYPE_1__ dvdcmdblk ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int,TYPE_1__*) ;

void FUNC_4()
{
 dvdcmdblk *VAR_6;
 if(VAR_1==0x0004 || VAR_1==0x0005
  || VAR_1==0x000d || VAR_1==0x000f
  || VAR_1==0x0010) {
  FUNC_1();
  VAR_6 = VAR_3;
  VAR_3 = &VAR_2;
  if(VAR_6->cb) VAR_6->cb(-4,VAR_6);
  FUNC_2();
 } else {
  VAR_4 = VAR_0;
  FUNC_0(VAR_5);
 }
}
