
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SEC ;
typedef int tBTA_HF_CLIENT_FEAT ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {char* name; int sec_mask; int features; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_HF_CLIENT_API_REGISTER ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(tBTA_SEC VAR_2, tBTA_HF_CLIENT_FEAT VAR_3,
                          char *VAR_4)
{
    tBTA_HF_CLIENT_API_REGISTER *VAR_5;

    if ((VAR_5 = (tBTA_HF_CLIENT_API_REGISTER *) FUNC_2(sizeof(tBTA_HF_CLIENT_API_REGISTER))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_0;
        VAR_5->features = VAR_3;
        VAR_5->sec_mask = VAR_2;
        if (VAR_4) {
            FUNC_0(VAR_5->name, VAR_1 + 1, VAR_4, VAR_1);
            VAR_5->name[VAR_1] = 0;
        } else {
            VAR_5->name[0] = '\0';
        }
        FUNC_1(VAR_5);
    }
}
