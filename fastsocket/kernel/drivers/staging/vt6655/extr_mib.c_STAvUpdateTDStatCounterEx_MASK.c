
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int abyCntTxPattern; scalar_t__ dwCntTxBufLength; } ;
typedef TYPE_1__* PSStatCounter ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ,int) ;

void
FUNC_1 (
    PSStatCounter VAR_0,
    PBYTE VAR_1,
    DWORD VAR_2
    )
{
    UINT VAR_3;

    VAR_3 = (UINT)VAR_2;


    VAR_0->dwCntTxBufLength = VAR_3;

    FUNC_0(VAR_0->abyCntTxPattern, VAR_1, 16);
}
