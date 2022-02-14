
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_2__ {int tv; int timing; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 int * VAR_1 ;
 size_t FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static inline u32 FUNC_3()
{
 u32 VAR_9;
 u64 VAR_10;

 if(VAR_6==1){
  if(!FUNC_1()) return 0;
 }

 while(VAR_7) {
  VAR_9 = FUNC_2(VAR_7);
  VAR_1[VAR_9] = VAR_8[VAR_9];
  VAR_10 = FUNC_0(VAR_9);
  VAR_7 &= ~VAR_10;
 }
 VAR_6 = 0;
 VAR_2 = VAR_0.timing;
 VAR_3 = VAR_0.tv;

 VAR_4 = VAR_5;

 return 1;
}
