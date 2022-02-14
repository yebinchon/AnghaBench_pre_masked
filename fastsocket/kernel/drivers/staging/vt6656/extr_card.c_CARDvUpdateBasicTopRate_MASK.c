
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_2__ {int wBasicRate; int byTopOFDMBasicRate; int byTopCCKBasicRate; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0 (PVOID VAR_5)
{
PSDevice VAR_6 = (PSDevice) VAR_5;
BYTE VAR_7 = VAR_2, VAR_8 = VAR_1;
BYTE VAR_9;


     for (VAR_9 = VAR_3; VAR_9 >= VAR_4; VAR_9 --) {
         if ( (VAR_6->wBasicRate) & ((WORD)(1<<VAR_9)) ) {
             VAR_7 = VAR_9;
             break;
         }
     }
     VAR_6->byTopOFDMBasicRate = VAR_7;

     for (VAR_9 = VAR_0;; VAR_9 --) {
         if ( (VAR_6->wBasicRate) & ((WORD)(1<<VAR_9)) ) {
             VAR_8 = VAR_9;
             break;
         }
         if (VAR_9 == VAR_1)
            break;
     }
     VAR_6->byTopCCKBasicRate = VAR_8;
 }
