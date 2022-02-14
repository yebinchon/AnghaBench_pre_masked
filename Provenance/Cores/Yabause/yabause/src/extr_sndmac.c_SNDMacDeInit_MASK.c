
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int callback ;
struct TYPE_3__ {int * inputProcRefCon; int * inputProc; } ;
typedef scalar_t__ OSStatus ;
typedef TYPE_1__ AURenderCallbackStruct ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void) {
    OSStatus VAR_4;
    AURenderCallbackStruct VAR_5;


    VAR_4 = FUNC_0(VAR_3);

    if(VAR_4 != VAR_2)
        return;


    VAR_5.inputProc = ((void*)0);
    VAR_5.inputProcRefCon = ((void*)0);

    VAR_4 = FUNC_1(VAR_3, VAR_0,
                                 VAR_1, 0, &VAR_5,
                                 sizeof(VAR_5));

    if(VAR_4 != VAR_2)
        return;


    VAR_4 = FUNC_2(VAR_3);

    if(VAR_4 != VAR_2)
        return;


    FUNC_3(VAR_3);
}
