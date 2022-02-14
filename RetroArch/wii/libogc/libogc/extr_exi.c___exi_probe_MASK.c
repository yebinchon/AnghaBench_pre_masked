
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; scalar_t__ exi_idtime; } ;
typedef TYPE_1__ exibus_priv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t,int ,int ,int) ;
 int* VAR_3 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static s32 FUNC_5(s32 VAR_6)
{
 u64 VAR_7;
 s32 VAR_8 = 1;
 u32 VAR_9;
 u32 VAR_10;
 exibus_priv *VAR_11 = &VAR_4[VAR_6];
 FUNC_0(VAR_9);
 VAR_10 = VAR_3[VAR_6*5];
 if(!(VAR_11->flags&VAR_2)) {
  if(VAR_10&VAR_1) {
   FUNC_2(VAR_6,0,0,1);
   VAR_11->exi_idtime = 0;
   VAR_5[VAR_6] = 0;
  }
  if(VAR_3[VAR_6*5]&VAR_0) {
   VAR_7 = FUNC_4();
   if(VAR_5[VAR_6]==0) VAR_5[VAR_6] = VAR_7;
   if((VAR_10=FUNC_3(VAR_5[VAR_6],VAR_7)+10)<30) VAR_8 = 0;
   else VAR_8 = 1;
   FUNC_1(VAR_9);
   return VAR_8;
  } else {
   VAR_11->exi_idtime = 0;
   VAR_5[VAR_6] = 0;
   FUNC_1(VAR_9);
   return 0;
  }
 }

 if(!(VAR_3[VAR_6*5]&VAR_0) || (VAR_3[VAR_6*5]&VAR_1)) {
  VAR_11->exi_idtime = 0;
  VAR_5[VAR_6] = 0;
  VAR_8 = 0;
 }
 FUNC_1(VAR_9);
 return VAR_8;
}
