
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int utf8_name ;
typedef int uint8_t ;
typedef int resolved_name ;
typedef int path ;
struct TYPE_4__ {scalar_t__ encoding; TYPE_1__* file_info; } ;
typedef TYPE_2__ mz_zip_reader ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {char* filename; int flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (char*,char const*,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (void*,char*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (char*,char*,int) ;

int32_t FUNC_8(void *VAR_3, const char *VAR_4)
{
    mz_zip_reader *VAR_5 = (mz_zip_reader *)VAR_3;
    int32_t VAR_6 = VAR_1;
    uint8_t *VAR_7 = ((void*)0);
    char VAR_8[512];
    char VAR_9[256];
    char VAR_10[256];

    VAR_6 = FUNC_5(VAR_3);

    if (VAR_6 == VAR_0)
        return VAR_6;

    while (VAR_6 == VAR_1)
    {

        VAR_8[0] = 0;

        FUNC_7(VAR_9, VAR_5->file_info->filename, sizeof(VAR_9) - 1);
        VAR_9[sizeof(VAR_9) - 1] = 0;

        if ((VAR_5->encoding > 0) && (VAR_5->file_info->flag & VAR_2) == 0)
        {
            VAR_7 = FUNC_0(VAR_5->file_info->filename, VAR_5->encoding);
            if (VAR_7)
            {
                FUNC_7(VAR_9, (char *)VAR_7, sizeof(VAR_9) - 1);
                VAR_9[sizeof(VAR_9) - 1] = 0;
                FUNC_1(&VAR_7);
            }
        }

        VAR_6 = FUNC_3(VAR_9, VAR_10, sizeof(VAR_10));
        if (VAR_6 != VAR_1)
            break;

        if (VAR_4 != ((void*)0))
            FUNC_2(VAR_8, VAR_4, sizeof(VAR_8));

        FUNC_2(VAR_8, VAR_10, sizeof(VAR_8));


        VAR_6 = FUNC_4(VAR_3, VAR_8);

        if (VAR_6 == VAR_1)
            VAR_6 = FUNC_6(VAR_3);
    }

    if (VAR_6 == VAR_0)
        return VAR_1;

    return VAR_6;
}
