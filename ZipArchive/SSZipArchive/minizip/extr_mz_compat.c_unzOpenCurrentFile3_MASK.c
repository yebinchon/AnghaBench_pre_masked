
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ unzFile ;
typedef int uint8_t ;
struct TYPE_4__ {int compression_method; int flag; } ;
typedef TYPE_1__ mz_zip_file ;
struct TYPE_5__ {int entry_pos; int handle; scalar_t__ total_out; } ;
typedef TYPE_2__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__**) ;
 scalar_t__ FUNC_2 (int ,int ,char const*) ;
 scalar_t__ FUNC_3 (int ,void**) ;

int FUNC_4(unzFile VAR_2, int *VAR_3, int *VAR_4, int VAR_5, const char *VAR_6)
{
    mz_compat *VAR_7 = (mz_compat *)VAR_2;
    mz_zip_file *VAR_8 = ((void*)0);
    int32_t VAR_9 = VAR_0;
    void *VAR_10 = ((void*)0);

    if (VAR_7 == ((void*)0))
        return VAR_1;
    if (VAR_3 != ((void*)0))
        *VAR_3 = 0;
    if (VAR_4 != ((void*)0))
        *VAR_4 = 0;

    VAR_7->total_out = 0;
    VAR_9 = FUNC_2(VAR_7->handle, (uint8_t)VAR_5, VAR_6);
    if (VAR_9 == VAR_0)
        VAR_9 = FUNC_1(VAR_7->handle, &VAR_8);
    if (VAR_9 == VAR_0)
    {
        if (VAR_3 != ((void*)0))
        {
            *VAR_3 = VAR_8->compression_method;
        }

        if (VAR_4 != ((void*)0))
        {
            *VAR_4 = 6;
            switch (VAR_8->flag & 0x06)
            {
            case 128:
                *VAR_4 = 1;
                break;
            case 130:
                *VAR_4 = 2;
                break;
            case 129:
                *VAR_4 = 9;
                break;
            }
        }
    }
    if (VAR_9 == VAR_0)
        VAR_9 = FUNC_3(VAR_7->handle, &VAR_10);
    if (VAR_9 == VAR_0)
        VAR_7->entry_pos = FUNC_0(VAR_10);
    return VAR_9;
}
