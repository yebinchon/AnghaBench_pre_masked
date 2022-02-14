
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_DM_DISC ;
typedef int tBTA_DM_CONN ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {void* conn_paired_only; void* pair_mode; int conn_mode; int disc_mode; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SET_VISIBILITY ;
typedef void* UINT8 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(tBTA_DM_DISC VAR_1, tBTA_DM_CONN VAR_2, UINT8 VAR_3, UINT8 VAR_4 )
{

    tBTA_DM_API_SET_VISIBILITY *VAR_5;

    if ((VAR_5 = (tBTA_DM_API_SET_VISIBILITY *) FUNC_1(sizeof(tBTA_DM_API_SET_VISIBILITY))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_0;
        VAR_5->disc_mode = VAR_1;
        VAR_5->conn_mode = VAR_2;
        VAR_5->pair_mode = VAR_3;
        VAR_5->conn_paired_only = VAR_4;


        FUNC_0(VAR_5);
    }


}
