
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int abyCntRxPattern; int dwCntRxFrmLength; } ;
typedef TYPE_1__* PSStatCounter ;
typedef scalar_t__ PBYTE ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;

void
FUNC_2 (
    PSStatCounter VAR_0,
    BYTE VAR_1,
    BYTE VAR_2,
    BYTE VAR_3,
    PBYTE VAR_4,
    UINT VAR_5
    )
{
    FUNC_0(
                    VAR_0,
                    VAR_1,
                    VAR_2,
                    VAR_3,
                    VAR_4,
                    VAR_5
                    );


    VAR_0->dwCntRxFrmLength = VAR_5;

    FUNC_1(VAR_0->abyCntRxPattern, (PBYTE)VAR_4, 10);
}
