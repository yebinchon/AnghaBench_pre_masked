
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int value; int len; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_OOB_REPLY ;
typedef int UINT8 ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(BD_ADDR VAR_3, UINT8 VAR_4, UINT8 *VAR_5)
{
    tBTA_DM_API_OOB_REPLY *VAR_6;

    if ((VAR_6 = (tBTA_DM_API_OOB_REPLY *) FUNC_2(sizeof(tBTA_DM_API_OOB_REPLY))) != ((void*)0)) {
        VAR_6->hdr.event = VAR_1;
        if(VAR_5 == ((void*)0) || VAR_4 > VAR_2) {
            return;
        }
        FUNC_1(VAR_6->bd_addr, VAR_3, VAR_0);
        VAR_6->len = VAR_4;
        FUNC_1(VAR_6->value, VAR_5, VAR_4);
        FUNC_0(VAR_6);
    }
}
