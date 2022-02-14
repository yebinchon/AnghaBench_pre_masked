
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int p_pin; void* pin_len; void* pin_type; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SET_PIN_TYPE ;
typedef void* UINT8 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,void**,void*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3 (UINT8 VAR_1, UINT8 *VAR_2, UINT8 VAR_3)
{
    tBTA_DM_API_SET_PIN_TYPE *VAR_4;

    if ((VAR_4 = (tBTA_DM_API_SET_PIN_TYPE *) FUNC_2(sizeof(tBTA_DM_API_SET_PIN_TYPE))) != ((void*)0)) {
        VAR_4->hdr.event = VAR_0;
        VAR_4->pin_type = VAR_1;
        VAR_4->pin_len = VAR_3;
        FUNC_1(VAR_4->p_pin, VAR_2, VAR_3);
        FUNC_0(VAR_4);
    }
}
