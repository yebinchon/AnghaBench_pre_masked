
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_3__ {int state; } ;
typedef TYPE_1__ dvdcmdblk ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

s32 FUNC_2(dvdcmdblk *VAR_0)
{
 u32 VAR_1;
 s32 VAR_2 = -1;

 FUNC_0(VAR_1);
 if(VAR_0) {
  if((VAR_2=VAR_0->state)==0x0003) VAR_2 = 1;
 }
 FUNC_1(VAR_1);
 return VAR_2;
}
