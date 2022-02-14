
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int Result ;
typedef int Handle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*,scalar_t__,int *,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__*,scalar_t__,int *,scalar_t__,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(Handle VAR_3){
 Result VAR_4;
 Handle VAR_5;
 u64 VAR_6;
 u64 VAR_7 = 0;
 u32 VAR_8;
 u32 VAR_9;
 u8 VAR_10[VAR_0];

 VAR_4 = FUNC_2(VAR_1, &VAR_5);
 if(FUNC_7(VAR_4))
  return -1;

 VAR_4 = FUNC_3(VAR_3, &VAR_6);
 if(FUNC_7(VAR_4))
  return -1;

 while(VAR_7 < VAR_6){
  u64 VAR_11 = VAR_6 - VAR_7;
  VAR_4 = FUNC_4(VAR_3, &VAR_8, VAR_7, VAR_10, VAR_11 < VAR_0 ? VAR_11 : VAR_0);
  if(FUNC_7(VAR_4)){
   FUNC_0(VAR_5);
   return -1;
  }

  VAR_4 = FUNC_5(VAR_5, &VAR_9, VAR_7, VAR_10, VAR_8, 0);
  if(FUNC_7(VAR_4)){
   FUNC_0(VAR_5);
   if(FUNC_6(VAR_4) == VAR_2)
    return 1;
   return -1;
  }

  if(VAR_9 != VAR_8){
   FUNC_0(VAR_5);
   return -1;
  }

  VAR_7 += VAR_9;
 }

 VAR_4 = FUNC_1(VAR_5);
 if(FUNC_7(VAR_4))
  return -1;

 return 1;
}
