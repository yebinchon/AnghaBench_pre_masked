
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ version; } ;
typedef int Result ;
typedef TYPE_1__ AM_TitleEntry ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int,scalar_t__*,TYPE_1__*) ;
 int FUNC_2 (int*,int ,int,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(u64 VAR_1, u16 VAR_2){
 u32 VAR_3;
 u32 VAR_4;
 u64* VAR_5;
 bool VAR_6 = 0;
 AM_TitleEntry VAR_7;
 Result VAR_8;

 VAR_8 = FUNC_0(VAR_0, &VAR_3);
 if(FUNC_3(VAR_8))
  return -1;

 VAR_5 = FUNC_5(VAR_3 * sizeof(uint64_t));
 if(VAR_5 == ((void*)0))
  return -1;

 VAR_8 = FUNC_2(&VAR_4, VAR_0, VAR_3, VAR_5);
 if(FUNC_3(VAR_8))
  return -1;

 for(u32 VAR_9 = 0; VAR_9 < VAR_4; VAR_9++){
  if(VAR_5[VAR_9] == VAR_1){
   VAR_6 = 1;
   break;
  }
 }

 FUNC_4(VAR_5);

 if(VAR_6){
  VAR_8 = FUNC_1(VAR_0, 1 , &VAR_1, &VAR_7);
  if(FUNC_3(VAR_8))
   return -1;

  if(VAR_7.version == VAR_2)
   return 1;
 }

 return 0;
}
