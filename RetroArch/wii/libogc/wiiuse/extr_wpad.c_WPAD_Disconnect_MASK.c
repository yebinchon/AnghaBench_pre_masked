
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _wpad_cb {int dummy; } ;
typedef size_t s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct _wpad_cb*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct _wpad_cb* VAR_8 ;
 int FUNC_3 (int) ;

s32 FUNC_4(s32 VAR_9)
{
 u32 VAR_10, VAR_11 = 0;
 struct _wpad_cb *VAR_12 = ((void*)0);

 if(VAR_9<VAR_0 || VAR_9>=VAR_4) return VAR_1;

 FUNC_0(VAR_10);
 if(VAR_7==VAR_5) {
  FUNC_1(VAR_10);
  return VAR_3;
 }

 VAR_12 = &VAR_8[VAR_9];
 FUNC_2(VAR_12);

 FUNC_1(VAR_10);

 while(VAR_6&(0x01<<VAR_9)) {
  FUNC_3(50);
  if(++VAR_11 > 3000) break;
 }

 return VAR_2;
}
