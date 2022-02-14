
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * filename; } ;
struct TYPE_4__ {TYPE_1__ file_info; scalar_t__ entry_scanned; } ;
typedef TYPE_2__ mz_zip ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;

int32_t FUNC_3(void *VAR_2, const char *VAR_3, uint8_t VAR_4)
{
    mz_zip *VAR_5 = (mz_zip *)VAR_2;
    int32_t VAR_6 = VAR_0;
    int32_t VAR_7 = 0;

    if (VAR_5 == ((void*)0) || VAR_3 == ((void*)0))
        return VAR_1;


    if ((VAR_5->entry_scanned) && (VAR_5->file_info.filename != ((void*)0)))
    {
        VAR_7 = FUNC_2(VAR_5->file_info.filename, VAR_3, VAR_4);
        if (VAR_7 == 0)
            return VAR_0;
    }


    VAR_6 = FUNC_0(VAR_2);
    while (VAR_6 == VAR_0)
    {
        VAR_7 = FUNC_2(VAR_5->file_info.filename, VAR_3, VAR_4);
        if (VAR_7 == 0)
            return VAR_0;

        VAR_6 = FUNC_1(VAR_2);
    }

    return VAR_6;
}
