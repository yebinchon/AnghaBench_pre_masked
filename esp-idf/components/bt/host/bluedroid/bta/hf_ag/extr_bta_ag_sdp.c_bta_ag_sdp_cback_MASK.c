
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ role; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_6__ {int layer_specific; void* event; } ;
struct TYPE_8__ {void* status; TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_AG_DISC_RESULT ;
typedef int UINT8 ;
typedef void* UINT16 ;


 int FUNC_0 (char*,void*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(UINT16 VAR_3, UINT8 VAR_4)
{
    tBTA_AG_DISC_RESULT *VAR_5;
    UINT16 VAR_6;
    tBTA_AG_SCB *VAR_7;

    FUNC_0("bta_ag_sdp_cback status:0x%x", VAR_3);

    if ((VAR_7 = FUNC_1(VAR_4)) != ((void*)0)) {

        if (VAR_7->role == VAR_0) {
            VAR_6 = VAR_1;
        } else {
            VAR_6 = VAR_2;
        }

        if ((VAR_5 = (tBTA_AG_DISC_RESULT *) FUNC_3(sizeof(tBTA_AG_DISC_RESULT))) != ((void*)0)) {
            VAR_5->hdr.event = VAR_6;
            VAR_5->hdr.layer_specific = VAR_4;
            VAR_5->status = VAR_3;
            FUNC_2(VAR_5);
        }
    }
}
