
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uuid16; } ;
struct TYPE_5__ {int len; TYPE_1__ uu; } ;
typedef TYPE_2__ tSDP_UUID ;
typedef int tSDP_DISC_CMPL_CB ;
typedef int tSDP_DISCOVERY_DB ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int,TYPE_2__*,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int VAR_2 ;

UINT16 FUNC_2( BD_ADDR VAR_3, tSDP_DISCOVERY_DB *VAR_4,
                       UINT32 VAR_5, tSDP_DISC_CMPL_CB *VAR_6 )
{

    UINT16 VAR_7 = VAR_0;
    UINT16 VAR_8 = 1;
    UINT16 VAR_9 = VAR_2;


    tSDP_UUID VAR_10;
    VAR_10.len = 2;
    VAR_10.uu.uuid16 = VAR_9;

    if ( FUNC_0(VAR_4, VAR_5, VAR_8, &VAR_10, 0, ((void*)0)) ) {
        if ( FUNC_1(VAR_3, VAR_4, VAR_6) ) {
            VAR_7 = VAR_1;
        }
    }
    return VAR_7;



}
