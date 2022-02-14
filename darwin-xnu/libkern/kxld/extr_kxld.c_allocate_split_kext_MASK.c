
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_5__ {int * linkedKext; int linkedKextSize; scalar_t__ vmaddr_TEXT; scalar_t__ vmaddr_LINKEDIT; } ;
typedef TYPE_1__ splitKextLinkInfo ;
typedef int kern_return_t ;
struct TYPE_6__ {int kext; } ;
typedef TYPE_2__ KXLDContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static kern_return_t
FUNC_5(KXLDContext *VAR_5, splitKextLinkInfo * VAR_6)
{
    kern_return_t VAR_7 = VAR_0;
    u_long VAR_8 = 0;
    u_long VAR_9 = 0;
    u_char * VAR_10 = ((void*)0);

    FUNC_1(VAR_5->kext, &VAR_9, &VAR_8);

    if (VAR_4) {

        FUNC_2(VAR_5->kext, VAR_2, &VAR_8);

        VAR_8 += (VAR_6->vmaddr_LINKEDIT - VAR_6->vmaddr_TEXT);
    }
    VAR_6->linkedKextSize = VAR_8;

    VAR_10 = FUNC_3(VAR_6->linkedKextSize);
    FUNC_4(VAR_10, VAR_3);
    VAR_6->linkedKext = VAR_10;

    FUNC_0(VAR_10, VAR_8);
    VAR_7 = VAR_1;

finish:
    return VAR_7;
}
