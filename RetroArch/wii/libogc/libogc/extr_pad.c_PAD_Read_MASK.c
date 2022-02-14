
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int button; void* err; } ;
typedef TYPE_1__ PADStatus ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,int *,int,int ,int,int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int) ;
 int VAR_8 ;
 int FUNC_11 (int,int*,TYPE_1__*) ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (TYPE_1__*,int ,int) ;

u32 FUNC_13(PADStatus *VAR_16)
{
 u32 VAR_17,VAR_18,VAR_19;
 u32 VAR_20,VAR_21,VAR_22;
 u32 VAR_23[2];
 FUNC_8(VAR_20);
 VAR_17 = 0;
 VAR_19 = 0;
 while(VAR_17<4) {
  VAR_18 = FUNC_0(VAR_17);
  if(VAR_11&VAR_18) {
   FUNC_1(0);
   FUNC_12(&VAR_16[VAR_17],0,sizeof(PADStatus));
   VAR_16[VAR_17].err = VAR_1;
  } else if(VAR_13&VAR_18 || VAR_14==VAR_17) {
   FUNC_12(&VAR_16[VAR_17],0,sizeof(PADStatus));
   VAR_16[VAR_17].err = VAR_1;
  } else if(!(VAR_8&VAR_18)) {
   FUNC_12(&VAR_16[VAR_17],0,sizeof(PADStatus));
   VAR_16[VAR_17].err = VAR_2;
  } else {
   if(FUNC_6(VAR_17)) {
    FUNC_12(&VAR_16[VAR_17],0,sizeof(PADStatus));
    VAR_16[VAR_17].err = VAR_3;
   } else {
    VAR_21 = FUNC_3(VAR_17);
    if(VAR_21&VAR_4) {
     FUNC_2(VAR_17,(void*)VAR_23);
     if(!(VAR_15&VAR_18)) {
      FUNC_12(&VAR_16[VAR_17],0,sizeof(PADStatus));
      VAR_16[VAR_17].err = VAR_0;
      if(!(VAR_6&VAR_18)) {
       VAR_6 |= VAR_18;
       FUNC_5(VAR_17,VAR_12);
      }
     } else {
      FUNC_10(VAR_17);
      FUNC_12(&VAR_16[VAR_17],0,sizeof(PADStatus));
      VAR_16[VAR_17].err = VAR_2;
     }
    } else {
     VAR_22 = FUNC_4(VAR_17);
     if(!(VAR_22&VAR_5)) VAR_19 |= VAR_18;
     if(!FUNC_2(VAR_17,VAR_23)
      || VAR_23[0]&0x80000000) {
      FUNC_12(&VAR_16[VAR_17],0,sizeof(PADStatus));
      VAR_16[VAR_17].err = VAR_3;
     } else {
      FUNC_11(VAR_17,VAR_23,&VAR_16[VAR_17]);
      if(VAR_16[VAR_17].button&0x00002000) {
       FUNC_12(&VAR_16[VAR_17],0,sizeof(PADStatus));
       VAR_16[VAR_17].err = VAR_3;
       FUNC_7(VAR_17,&VAR_7,1,VAR_9[VAR_17],10,VAR_10,0);
      } else {
       VAR_16[VAR_17].err = VAR_0;
       VAR_16[VAR_17].button &= ~0x80;
      }
     }
    }
   }
  }
  VAR_17++;

 }
 FUNC_9(VAR_20);

 return VAR_19;
}
