
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTA_AG_SCB ;
struct TYPE_8__ {int status; } ;
typedef TYPE_2__ tBTA_AG_REGISTER ;
struct TYPE_7__ {int event; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_AG_DATA ;
typedef int tBTA_AG ;
struct TYPE_10__ {int (* p_cback ) (int ,int *) ;} ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(tBTA_AG_DATA *VAR_3)
{
    tBTA_AG_SCB *VAR_4;
    tBTA_AG_REGISTER VAR_5;


    if ((VAR_4 = FUNC_1()) != ((void*)0)) {
        FUNC_0("bta_ag_api_register: p_scb 0x%08x ", (unsigned int)VAR_4);
        FUNC_2(VAR_4, VAR_3->hdr.event, VAR_3);
    } else {
        VAR_5.status = VAR_0;
        (*VAR_2.p_cback)(VAR_1, (tBTA_AG *) &VAR_5);
    }
}
