
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int number_disk_with_CD; int size_comment; scalar_t__ number_entry; } ;
typedef TYPE_1__ unz_global_info64 ;
struct TYPE_7__ {int number_disk_with_CD; int size_comment; scalar_t__ number_entry; } ;
typedef TYPE_2__ unz_global_info ;
typedef scalar_t__ unzFile ;
typedef scalar_t__ uint32_t ;
typedef int mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_1__*) ;

int FUNC_2(unzFile VAR_2, unz_global_info* VAR_3)
{
    mz_compat *VAR_4 = (mz_compat *)VAR_2;
    unz_global_info64 VAR_5;
    int32_t VAR_6 = VAR_0;

    FUNC_0(VAR_3, 0, sizeof(unz_global_info));
    if (VAR_4 == ((void*)0))
        return VAR_1;

    VAR_6 = FUNC_1(VAR_2, &VAR_5);
    if (VAR_6 == VAR_0)
    {
        VAR_3->number_entry = (uint32_t)VAR_5;
        VAR_3->size_comment = VAR_5;
        VAR_3->number_disk_with_CD = VAR_5;
    }
    return VAR_6;
}
