
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
struct TYPE_4__ {scalar_t__ extrafield_size; int extrafield; } ;
typedef TYPE_1__ mz_zip_file ;
struct TYPE_5__ {int handle; } ;
typedef TYPE_2__ mz_compat ;
typedef scalar_t__ int32_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__**) ;

int FUNC_2(unzFile VAR_3, void *VAR_4, unsigned int VAR_5)
{
    mz_compat *VAR_6 = (mz_compat *)VAR_3;
    mz_zip_file *VAR_7 = ((void*)0);
    int32_t VAR_8 = VAR_1;
    int32_t VAR_9 = 0;

    if (VAR_6 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 >= VAR_0)
        return VAR_2;

    VAR_8 = FUNC_1(VAR_6->handle, &VAR_7);
    if (VAR_8 != VAR_1)
        return VAR_8;

    VAR_9 = (int32_t)VAR_5;
    if (VAR_9 > VAR_7->extrafield_size)
        VAR_9 = VAR_7->extrafield_size;

    FUNC_0(VAR_4, VAR_7->extrafield, VAR_9);
    return VAR_1;
}
