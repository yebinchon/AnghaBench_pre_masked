
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NumPayload; int * Payload; } ;
typedef TYPE_1__ mfxEncodeCtrl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(mfxEncodeCtrl* VAR_1)
{
    if (VAR_1) {
        int VAR_2;
        for (VAR_2 = 0; VAR_2 < VAR_1->NumPayload && VAR_2 < VAR_0; VAR_2++) {
            FUNC_0(VAR_1->Payload[VAR_2]);
        }
        VAR_1->NumPayload = 0;
    }
}
