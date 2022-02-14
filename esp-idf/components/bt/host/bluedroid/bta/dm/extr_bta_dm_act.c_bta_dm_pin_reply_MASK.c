
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int trusted_mask ;
struct TYPE_4__ {int bd_addr; int * p_pin; int pin_len; scalar_t__ accept; } ;
struct TYPE_5__ {TYPE_1__ pin_reply; } ;
typedef TYPE_2__ tBTA_DM_MSG ;
typedef int UINT32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int *) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4 (tBTA_DM_MSG *VAR_3)
{

    UINT32 VAR_4[VAR_1];
    UINT32 *VAR_5;

    VAR_5 = FUNC_1(VAR_3->pin_reply.bd_addr);

    if (VAR_5) {
        FUNC_2(VAR_4, VAR_5, sizeof(VAR_4));
    } else {
        FUNC_3(VAR_4, 0, sizeof(VAR_4));
    }

    if (VAR_3->pin_reply.accept) {

        FUNC_0(VAR_3->pin_reply.bd_addr, VAR_2, VAR_3->pin_reply.pin_len, VAR_3->pin_reply.p_pin, VAR_4 );
    } else {
        FUNC_0(VAR_3->pin_reply.bd_addr, VAR_0, 0, ((void*)0), VAR_4 );
    }

}
