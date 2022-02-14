
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_2__ {int w; scalar_t__ adrmode6; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static void FUNC_3()
{
  s32 VAR_2=VAR_1.w;
  int VAR_3 = (u8)('WLB?' >> ((VAR_2&(3<<12))>>(12-3)));
  FUNC_0('MOVE');
  FUNC_0(((VAR_1.adrmode6==VAR_0)? ('A'<<24) : 0) + ('.'<<16) + ' ' + (VAR_3<<8) );
  FUNC_2(0,VAR_2,VAR_3);
  FUNC_1(',');
  FUNC_2(6,VAR_2,VAR_3);
}
