
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; scalar_t__ lockeddev; } ;
typedef TYPE_1__ exibus_priv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 TYPE_1__* VAR_6 ;

s32 FUNC_4(s32 VAR_7)
{
 u32 VAR_8;
 s32 VAR_9 = 1;
 exibus_priv *VAR_10 = &VAR_6[VAR_7];
 FUNC_1(VAR_8);
 if(VAR_10->flags&VAR_1) {
  if(VAR_10->flags&VAR_2 && VAR_10->lockeddev!=VAR_0) VAR_9 = 0;
  else {
   VAR_10->flags &= ~VAR_1;
   FUNC_3(((FUNC_0(VAR_3)|FUNC_0(VAR_5)|FUNC_0(VAR_4))>>(VAR_7*3)));
  }
 }
 FUNC_2(VAR_8);
 return VAR_9;
}
