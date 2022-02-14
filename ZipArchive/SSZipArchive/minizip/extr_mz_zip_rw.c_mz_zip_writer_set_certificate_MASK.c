
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {char const* cert_pwd; scalar_t__ cert_data_size; int * cert_data; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (void**) ;
 scalar_t__ FUNC_6 (void*,char const*,int ) ;
 scalar_t__ FUNC_7 (void*,int *,scalar_t__) ;

int32_t FUNC_8(void *VAR_4, const char *VAR_5, const char *VAR_6)
{
    mz_zip_writer *VAR_7 = (mz_zip_writer *)VAR_4;
    void *VAR_8 = ((void*)0);
    uint8_t *VAR_9 = ((void*)0);
    int32_t VAR_10 = 0;
    int32_t VAR_11 = VAR_0;

    if (VAR_5 == ((void*)0))
        return VAR_2;

    VAR_10 = (int32_t)FUNC_2(VAR_5);

    if (VAR_10 == 0)
        return VAR_2;

    if (VAR_7->cert_data != ((void*)0))
    {
        FUNC_1(VAR_7->cert_data);
        VAR_7->cert_data = ((void*)0);
    }

    VAR_9 = (uint8_t *)FUNC_0(VAR_10);


    FUNC_4(&VAR_8);
    VAR_11 = FUNC_6(VAR_8, VAR_5, VAR_1);
    if (VAR_11 == VAR_0)
    {
        if (FUNC_7(VAR_8, VAR_9, VAR_10) != VAR_10)
            VAR_11 = VAR_3;
        FUNC_3(VAR_8);
    }
    FUNC_5(&VAR_8);

    if (VAR_11 == VAR_0)
    {
        VAR_7->cert_data = VAR_9;
        VAR_7->cert_data_size = VAR_10;
        VAR_7->cert_pwd = VAR_6;
    }
    else
    {
        FUNC_1(VAR_9);
    }

    return VAR_11;
}
