
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int number_disk_with_CD; int number_entry; scalar_t__ size_comment; } ;
typedef TYPE_1__ unz_global_info64 ;
typedef scalar_t__ unzFile ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int handle; } ;
typedef TYPE_2__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int ,char const**) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (char const*) ;

int FUNC_5(unzFile VAR_3, unz_global_info64 *VAR_4)
{
    mz_compat *VAR_5 = (mz_compat *)VAR_3;
    const char *VAR_6 = ((void*)0);
    int32_t VAR_7 = VAR_1;

    FUNC_0(VAR_4, 0, sizeof(unz_global_info64));
    if (VAR_5 == ((void*)0))
        return VAR_2;
    VAR_7 = FUNC_1(VAR_5->handle, &VAR_6);
    if (VAR_7 == VAR_1)
        VAR_4->size_comment = (uint16_t)FUNC_4(VAR_6);
    if ((VAR_7 == VAR_1) || (VAR_7 == VAR_0))
        VAR_7 = FUNC_3(VAR_5->handle, &VAR_4->number_entry);
    if (VAR_7 == VAR_1)
        VAR_7 = FUNC_2(VAR_5->handle, &VAR_4->number_disk_with_CD);
    return VAR_7;
}
