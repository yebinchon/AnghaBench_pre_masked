
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t s32 ;
struct TYPE_4__ {int flags; scalar_t__ CallbackEXI; } ;
typedef TYPE_1__ exibus_priv ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static __inline__ void FUNC_4(s32 VAR_9,exibus_priv *VAR_10)
{
 exibus_priv *VAR_11 = &VAR_8[VAR_2];
 if(VAR_9==VAR_0) {
  FUNC_2((FUNC_0(VAR_4)|FUNC_0(VAR_6)));
  if(!(VAR_10->flags&VAR_3) && (VAR_10->CallbackEXI || VAR_11->CallbackEXI))
   FUNC_3((FUNC_0(VAR_4)|FUNC_0(VAR_6)));
 } else if(VAR_9==VAR_1) {
  FUNC_2(FUNC_0(VAR_5));
  if(!(VAR_10->flags&VAR_3) && VAR_10->CallbackEXI) FUNC_3(FUNC_0(VAR_5));
 } else if(VAR_9==VAR_2) {
  FUNC_2(FUNC_0(VAR_4));
  if(!(VAR_10->flags&VAR_3) && FUNC_1(VAR_7)) FUNC_3(FUNC_0(VAR_6));
 }
}
