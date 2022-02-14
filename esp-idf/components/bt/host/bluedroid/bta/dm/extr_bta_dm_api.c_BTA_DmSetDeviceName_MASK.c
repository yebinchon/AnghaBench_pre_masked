
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event; } ;
struct TYPE_5__ {scalar_t__* name; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SET_NAME ;


 int FUNC_0 (char*,int,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(const char *VAR_2)
{

    tBTA_DM_API_SET_NAME *VAR_3;

    if ((VAR_3 = (tBTA_DM_API_SET_NAME *) FUNC_2(sizeof(tBTA_DM_API_SET_NAME))) != ((void*)0)) {
        VAR_3->hdr.event = VAR_1;

        FUNC_0((char *)VAR_3->name, sizeof(VAR_3->name), VAR_2, VAR_0 - 1);
        VAR_3->name[VAR_0 - 1] = 0;

        FUNC_1(VAR_3);
    }
}
