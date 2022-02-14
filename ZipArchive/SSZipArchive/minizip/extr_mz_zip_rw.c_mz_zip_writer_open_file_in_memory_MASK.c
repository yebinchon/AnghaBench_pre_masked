
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem_stream; } ;
typedef TYPE_1__ mz_zip_writer ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,void*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void**) ;
 int FUNC_6 (void**) ;
 scalar_t__ FUNC_7 (void*,char const*,int ) ;
 int FUNC_8 (void*,int ,int ) ;
 scalar_t__ FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (void*,int ) ;

int32_t FUNC_12(void *VAR_7, const char *VAR_8)
{
    mz_zip_writer *VAR_9 = (mz_zip_writer *)VAR_7;
    void *VAR_10 = ((void*)0);
    int64_t VAR_11 = 0;
    int32_t VAR_12 = 0;


    FUNC_10(VAR_7);

    FUNC_5(&VAR_10);

    VAR_12 = FUNC_7(VAR_10, VAR_8, VAR_3);

    if (VAR_12 != VAR_1)
    {
        FUNC_6(&VAR_10);
        FUNC_10(VAR_7);
        return VAR_12;
    }

    FUNC_8(VAR_10, 0, VAR_4);
    VAR_11 = FUNC_9(VAR_10);
    FUNC_8(VAR_10, 0, VAR_5);

    if ((VAR_11 <= 0) || (VAR_11 > VAR_6))
    {


        FUNC_4(VAR_10);
        FUNC_6(&VAR_10);
        FUNC_10(VAR_7);
        return VAR_0;
    }

    FUNC_1(&VAR_9->mem_stream);
    FUNC_3(VAR_9->mem_stream, (int32_t)VAR_11);
    FUNC_2(VAR_9->mem_stream, ((void*)0), VAR_2);

    VAR_12 = FUNC_0(VAR_9->mem_stream, VAR_10, (int32_t)VAR_11);

    FUNC_4(VAR_10);
    FUNC_6(&VAR_10);

    if (VAR_12 == VAR_1)
        VAR_12 = FUNC_11(VAR_7, VAR_9->mem_stream);
    if (VAR_12 != VAR_1)
        FUNC_10(VAR_7);

    return VAR_12;
}
