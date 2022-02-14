
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
struct TYPE_10__ {int reg_services; int hsp_version; } ;
typedef TYPE_3__ tBTA_AG_SCB ;
struct TYPE_8__ {int features; int * p_name; } ;
struct TYPE_11__ {TYPE_1__ api_register; } ;
typedef TYPE_4__ tBTA_AG_DATA ;
struct TYPE_12__ {TYPE_2__* profile; } ;
struct TYPE_9__ {scalar_t__ sdp_handle; int scn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__) ;
 TYPE_7__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int ) ;

void FUNC_4(tBTA_AG_SCB *VAR_5, tBTA_AG_DATA *VAR_6)
{
    tBTA_SERVICE_MASK VAR_7;
    VAR_7 = VAR_5->reg_services >> VAR_1;

    for (int VAR_8 = 0; VAR_8 < VAR_0 && VAR_7 != 0; VAR_8++, VAR_7 >>= 1) {

        if (VAR_7 & 1) {

            if (VAR_3.profile[VAR_8].sdp_handle == 0) {
                VAR_3.profile[VAR_8].sdp_handle = FUNC_1();
                VAR_3.profile[VAR_8].scn = FUNC_0();
                FUNC_2(VAR_4[VAR_8], VAR_6->api_register.p_name[VAR_8],
                    VAR_3.profile[VAR_8].scn, VAR_6->api_register.features,
                    VAR_3.profile[VAR_8].sdp_handle);
                FUNC_3(VAR_4[VAR_8]);
            }
        }
    }
    VAR_5->hsp_version = VAR_2;
}
