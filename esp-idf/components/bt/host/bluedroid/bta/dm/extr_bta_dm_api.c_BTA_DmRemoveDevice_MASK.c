
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
typedef int tBTA_STATUS ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int transport; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_REMOVE_DEVICE ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

tBTA_STATUS FUNC_4(BD_ADDR VAR_3, tBT_TRANSPORT VAR_4)
{
    tBTA_DM_API_REMOVE_DEVICE *VAR_5;

    if ((VAR_5 = (tBTA_DM_API_REMOVE_DEVICE *) FUNC_3(sizeof(tBTA_DM_API_REMOVE_DEVICE))) != ((void*)0)) {
        FUNC_2 (VAR_5, 0, sizeof(tBTA_DM_API_REMOVE_DEVICE));

        VAR_5->hdr.event = VAR_0;
        FUNC_0(VAR_5->bd_addr, VAR_3);
        VAR_5->transport = VAR_4;
        FUNC_1(VAR_5);
    } else {
        return VAR_1;
    }

    return VAR_2;
}
