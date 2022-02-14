
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ exp; } ;
typedef TYPE_2__ wiimote ;
typedef int u32 ;
typedef size_t s32 ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

 int VAR_6 ;

 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_2__** VAR_8 ;
 scalar_t__ VAR_9 ;

s32 FUNC_3(s32 VAR_10,u32 *VAR_11)
{
 s32 VAR_12;
 u32 VAR_13,VAR_14;
 wiimote *VAR_15 = ((void*)0);



 FUNC_1(VAR_13);
 if(VAR_9==VAR_7) {
  FUNC_2(VAR_13);
  return VAR_4;
 }

 VAR_15 = VAR_8[VAR_10];
 if(VAR_15 && FUNC_0(VAR_15,VAR_0)) {
  if(FUNC_0(VAR_15,VAR_2)) {
   VAR_14 = VAR_6;
   if(FUNC_0(VAR_15,VAR_1)) {
    switch(VAR_15->exp.type) {
     case 128:
     case 129:
      VAR_14 = VAR_15->exp.type;
      break;
    }
   }
   if(VAR_11!=((void*)0)) *VAR_11 = VAR_14;
   VAR_12 = VAR_3;
  } else
   VAR_12 = VAR_4;
 } else
  VAR_12 = VAR_5;
 FUNC_2(VAR_13);

 return VAR_12;
}
