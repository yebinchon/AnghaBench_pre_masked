
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ eir_complete_list; int eir_uuid; } ;
typedef TYPE_1__ tBTM_INQ_RESULTS ;
typedef int tBTM_EIR_SEARCH_RESULT ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

tBTM_EIR_SEARCH_RESULT FUNC_1( tBTM_INQ_RESULTS *VAR_3, UINT16 VAR_4 )
{
    if ( FUNC_0( VAR_3->eir_uuid, VAR_4 )) {
        return VAR_0;
    } else if ( VAR_3->eir_complete_list ) {
        return VAR_1;
    } else {
        return VAR_2;
    }
}
