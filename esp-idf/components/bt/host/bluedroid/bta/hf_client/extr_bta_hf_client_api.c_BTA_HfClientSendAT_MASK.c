
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layer_specific; int event; } ;
struct TYPE_5__ {char* str; TYPE_1__ hdr; void* uint32_val2; void* uint32_val1; int uint8_val; } ;
typedef TYPE_2__ tBTA_HF_CLIENT_DATA_VAL ;
typedef int tBTA_HF_CLIENT_AT_CMD_TYPE ;
typedef void* UINT32 ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;

void FUNC_3(UINT16 VAR_2, tBTA_HF_CLIENT_AT_CMD_TYPE VAR_3, UINT32 VAR_4, UINT32 VAR_5, const char *VAR_6)
{
    tBTA_HF_CLIENT_DATA_VAL *VAR_7;

    if ((VAR_7 = (tBTA_HF_CLIENT_DATA_VAL *) FUNC_1(sizeof(tBTA_HF_CLIENT_DATA_VAL))) != ((void*)0)) {
        VAR_7->hdr.event = VAR_1;
        VAR_7->uint8_val = VAR_3;
        VAR_7->uint32_val1 = VAR_4;
        VAR_7->uint32_val2 = VAR_5;

        if (VAR_6) {
            FUNC_2(VAR_7->str, VAR_6, VAR_0 + 1);
            VAR_7->str[VAR_0] = '\0';
        } else {
            VAR_7->str[0] = '\0';
        }

        VAR_7->hdr.layer_specific = VAR_2;
        FUNC_0(VAR_7);
    }
}
