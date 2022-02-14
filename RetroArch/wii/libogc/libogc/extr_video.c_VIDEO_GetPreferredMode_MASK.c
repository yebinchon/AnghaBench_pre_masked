
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int GXRModeObj ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;




 int FUNC_5 (int *,int *,int) ;

GXRModeObj * FUNC_6(GXRModeObj *VAR_8)
{

GXRModeObj *VAR_9 = ((void*)0);
 u32 VAR_10 = FUNC_3();
 if (FUNC_4()) {
  switch (VAR_10) {
   case 129:
    VAR_9 = &VAR_5;
    break;
   case 128:
    VAR_9 = &VAR_7;
    break;
   case 130:
    VAR_9 = &VAR_3;
    break;
   case 131:
    VAR_9 = &VAR_1;
    break;
  }
 } else {
  switch (VAR_10) {
   case 129:
    VAR_9 = &VAR_4;
    break;
   case 128:
    VAR_9 = &VAR_6;
    break;
   case 130:
    VAR_9 = &VAR_2;
    break;
   case 131:
    VAR_9 = &VAR_0;
    break;
  }
 }


 if ( ((void*)0) != VAR_8 ) {
  FUNC_5( VAR_8, VAR_9, sizeof(GXRModeObj));
 } else {
  VAR_8 = VAR_9;
 }

 return VAR_8;

}
