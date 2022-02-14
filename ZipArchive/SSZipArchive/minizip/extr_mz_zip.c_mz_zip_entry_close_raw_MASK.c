
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int open_mode; } ;
typedef TYPE_1__ mz_zip ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,int *,int *,int *) ;
 scalar_t__ FUNC_2 (void*,int ,int ,int ) ;

int32_t FUNC_3(void *VAR_4, int64_t VAR_5, uint32_t VAR_6)
{
    mz_zip *VAR_7 = (mz_zip *)VAR_4;
    int32_t VAR_8 = VAR_0;

    if (VAR_7 == ((void*)0) || FUNC_0(VAR_4) != VAR_0)
        return VAR_2;

    if (VAR_7->open_mode & VAR_1)
        VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_3, VAR_5);
    else
        VAR_8 = FUNC_1(VAR_4, ((void*)0), ((void*)0), ((void*)0));

    return VAR_8;
}
