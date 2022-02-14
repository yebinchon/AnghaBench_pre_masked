
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct dirent {char const* d_name; } ;
typedef int path_dir ;
struct TYPE_2__ {scalar_t__ store_links; int follow_links; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
typedef int full_path ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int * FUNC_3 (char const*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*,int) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 scalar_t__ FUNC_7 (char const*,char const**) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (void*,char const*,char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char*,char const*,int) ;
 int * FUNC_13 (char const*,char) ;

int32_t FUNC_14(void *VAR_2, const char *VAR_3, const char *VAR_4,
    uint8_t VAR_5, uint8_t VAR_6)
{
    mz_zip_writer *VAR_7 = (mz_zip_writer *)VAR_2;
    DIR *VAR_8 = ((void*)0);
    struct dirent *VAR_9 = ((void*)0);
    int32_t VAR_10 = VAR_1;
    int16_t VAR_11 = 0;
    const char *VAR_12 = ((void*)0);
    const char *VAR_13 = VAR_3;
    char *VAR_14 = ((void*)0);
    char VAR_15[1024];
    char VAR_16[1024];


    if (FUNC_13(VAR_3, '*') != ((void*)0))
    {
        FUNC_12(VAR_16, VAR_3, sizeof(VAR_16) - 1);
        VAR_16[sizeof(VAR_16) - 1] = 0;
        FUNC_8(VAR_16);
        VAR_14 = VAR_16 + FUNC_11(VAR_16) + 1;
        VAR_4 = VAR_3 = VAR_16;
    }
    else
    {
        if (FUNC_1(VAR_3) == VAR_1)
            VAR_11 = 1;


        if (VAR_4 == ((void*)0))
            VAR_4 = VAR_3;


        if (!VAR_5)
        {
            if (!VAR_11 && VAR_4 == VAR_3)
            {
                if (FUNC_7(VAR_13, &VAR_12) == VAR_1)
                    VAR_13 = VAR_12;
            }
            else
            {
                VAR_13 += FUNC_11(VAR_4);
            }
        }

        if (!VAR_7->store_links && !VAR_7->follow_links)
        {
            if (FUNC_2(VAR_3) == VAR_1)
                return VAR_10;
        }

        if (*VAR_13 != 0)
            VAR_10 = FUNC_9(VAR_2, VAR_3, VAR_13);

        if (!VAR_11)
            return VAR_10;

        if (VAR_7->store_links)
        {
            if (FUNC_2(VAR_3) == VAR_1)
                return VAR_10;
        }
    }

    VAR_8 = FUNC_3(VAR_3);

    if (VAR_8 == ((void*)0))
        return VAR_0;

    while ((VAR_9 = FUNC_4(VAR_8)) != ((void*)0))
    {
        if (FUNC_10(VAR_9->d_name, ".") == 0 || FUNC_10(VAR_9->d_name, "..") == 0)
            continue;

        VAR_15[0] = 0;
        FUNC_5(VAR_15, VAR_3, sizeof(VAR_15));
        FUNC_5(VAR_15, VAR_9->d_name, sizeof(VAR_15));

        if (!VAR_6 && FUNC_1(VAR_15) == VAR_1)
            continue;

        if ((VAR_14 != ((void*)0)) && (FUNC_6(VAR_9->d_name, VAR_14, 1) != VAR_1))
            continue;

        VAR_10 = FUNC_14(VAR_2, VAR_15, VAR_4, VAR_5, VAR_6);
        if (VAR_10 != VAR_1)
            return VAR_10;
    }

    FUNC_0(VAR_8);
    return VAR_1;
}
