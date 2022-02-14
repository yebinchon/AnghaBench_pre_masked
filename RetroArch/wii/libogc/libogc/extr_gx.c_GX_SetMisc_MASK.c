
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int xfFlush; int dirtyState; scalar_t__ saveDLctx; scalar_t__ xfFlushSafe; int xfFlushExp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int,int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2(u32 VAR_3,u32 VAR_4)
{
 u32 VAR_5;

 if(VAR_3==VAR_1) {
  VAR_2->xfFlushSafe = VAR_4;
  VAR_5 = FUNC_1(VAR_2->xfFlushSafe);
  VAR_2->xfFlushExp = FUNC_0(VAR_5,5,16);

  VAR_2->xfFlush = 1;
  if(!VAR_2->xfFlushSafe) return;

  VAR_2->dirtyState |= 0x0008;
 } else if(VAR_3==VAR_0) {
  VAR_2->saveDLctx = (VAR_4&0xff);
 }
 return;
}
