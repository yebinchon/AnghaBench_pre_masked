
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SERVICE_MASK ;
typedef int tBTA_SEC ;
typedef int tBTA_AG_FEAT ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {scalar_t__** p_name; int app_id; int services; int sec_mask; int features; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_AG_API_REGISTER ;
typedef int UINT8 ;


 int FUNC_0 (scalar_t__*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(tBTA_SERVICE_MASK VAR_3, tBTA_SEC VAR_4,tBTA_AG_FEAT VAR_5,
                  char * VAR_6[], UINT8 VAR_7)
{
    tBTA_AG_API_REGISTER *VAR_8;
    int VAR_9;

    if ((VAR_8 = (tBTA_AG_API_REGISTER *) FUNC_2(sizeof(tBTA_AG_API_REGISTER))) != ((void*)0)) {
        VAR_8->hdr.event = VAR_0;
        VAR_8->features = VAR_5;
        VAR_8->sec_mask = VAR_4;
        VAR_8->services = VAR_3;
        VAR_8->app_id = VAR_7;
        for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
            if(VAR_6[VAR_9]) {
                FUNC_0(VAR_8->p_name[VAR_9], VAR_2+1, VAR_6[VAR_9], VAR_2);
                VAR_8->p_name[VAR_9][VAR_2] = 0;
            } else {
                VAR_8->p_name[VAR_9][0] = 0;
            }
        }
        FUNC_1(VAR_8);
    }
}
