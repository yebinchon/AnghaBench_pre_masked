
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {scalar_t__ exi_idtime; int exi_id; } ;
typedef TYPE_1__ exibus_priv ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t,int *,int,int ,int *) ;
 size_t FUNC_3 (size_t,size_t,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (size_t,size_t,int ) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (size_t) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (size_t,int *) ;
 scalar_t__ FUNC_10 (size_t) ;
 int * VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__* VAR_7 ;

s32 FUNC_11(s32 VAR_8,s32 VAR_9,u32 *VAR_10)
{
 u64 VAR_11 = 0;
 s32 VAR_12,VAR_13;
 u32 VAR_14,VAR_15;
 exibus_priv *VAR_16 = &VAR_6[VAR_8];

 if(VAR_8<VAR_0 && VAR_9==VAR_1) {
  if(FUNC_10(VAR_8)==0) return 0;
  if(VAR_16->exi_idtime==VAR_7[VAR_8]) {
   *VAR_10 = VAR_16->exi_id;
   return 1;
  }
  if(FUNC_9(VAR_8,((void*)0))==0) return 0;
  VAR_11 = VAR_7[VAR_8];
 }
 VAR_13 = 0;
 if(VAR_8<VAR_0 && VAR_9==VAR_1) VAR_13 = 1;

 if(VAR_13) VAR_12 = FUNC_3(VAR_8,VAR_9,VAR_5);
 else VAR_12 = FUNC_3(VAR_8,VAR_9,((void*)0));

 if(VAR_12) {
  if(FUNC_4(VAR_8,VAR_9,VAR_3)==1) {
   VAR_14 = 0;
   FUNC_2(VAR_8,&VAR_14,2,VAR_4,((void*)0));
   FUNC_5(VAR_8);
   FUNC_2(VAR_8,VAR_10,4,VAR_2,((void*)0));
   FUNC_5(VAR_8);
   FUNC_0(VAR_8);
   FUNC_6(VAR_8);
  }
 }

 if(VAR_8<VAR_0 && VAR_9==VAR_1) {
  VAR_12 = 0;
  FUNC_1(VAR_8);

  FUNC_7(VAR_15);
  if(VAR_11==VAR_7[VAR_8]) {
   VAR_16->exi_idtime = VAR_11;
   VAR_16->exi_id = *VAR_10;
   VAR_12 = 1;
  }
  FUNC_8(VAR_15);
 }
 return VAR_12;
}
