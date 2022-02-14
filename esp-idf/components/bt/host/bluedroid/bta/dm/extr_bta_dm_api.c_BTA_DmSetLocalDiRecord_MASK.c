
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSDP_DI_RECORD ;
typedef int tBTA_STATUS ;
struct TYPE_4__ {int primary_record; } ;
typedef TYPE_1__ tBTA_DI_RECORD ;
typedef int UINT32 ;
struct TYPE_5__ {size_t di_num; int * di_handle; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int ) ;

tBTA_STATUS FUNC_2( tBTA_DI_RECORD *VAR_6,
                                    UINT32 *VAR_7 )
{
    tBTA_STATUS VAR_8 = VAR_1;

    if (VAR_5.di_num < VAR_0) {
        if (FUNC_0((tSDP_DI_RECORD *)VAR_6, VAR_7) == VAR_3) {
            if (!VAR_6->primary_record) {
                VAR_5.di_handle[VAR_5.di_num] = *VAR_7;
                VAR_5.di_num ++;
            }

            FUNC_1(VAR_4);
            VAR_8 = VAR_2;
        }
    }

    return VAR_8;
}
