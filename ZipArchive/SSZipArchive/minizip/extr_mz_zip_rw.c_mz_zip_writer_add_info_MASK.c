
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version_madeby; int external_fa; } ;
struct TYPE_4__ {TYPE_1__ file_info; } ;
typedef TYPE_2__ mz_zip_writer ;
typedef int mz_zip_file ;
typedef int mz_stream_read_cb ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*,int *) ;
 scalar_t__ FUNC_4 (void*) ;

int32_t FUNC_5(void *VAR_2, void *VAR_3, mz_stream_read_cb VAR_4, mz_zip_file *VAR_5)
{
    mz_zip_writer *VAR_6 = (mz_zip_writer *)VAR_2;
    int32_t VAR_7 = VAR_0;


    if (FUNC_4(VAR_2) != VAR_0)
        return VAR_1;
    if (VAR_5 == ((void*)0))
        return VAR_1;


    VAR_7 = FUNC_3(VAR_2, VAR_5);
    if (VAR_7 != VAR_0)
        return VAR_7;

    if (VAR_3 != ((void*)0))
    {
        if (FUNC_0(VAR_6->file_info.external_fa, VAR_6->file_info.version_madeby) != VAR_0)
        {
            VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4);
            if (VAR_7 != VAR_0)
                return VAR_7;
        }
    }

    VAR_7 = FUNC_2(VAR_2);

    return VAR_7;
}
