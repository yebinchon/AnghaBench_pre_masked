
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int version_madeby; int external_fa; } ;
struct TYPE_11__ {int raw; TYPE_1__ file_info; } ;
typedef TYPE_2__ mz_zip_writer ;
struct TYPE_12__ {int flag; } ;
typedef TYPE_3__ mz_zip_file ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (void*,int *,int *,int *) ;
 scalar_t__ FUNC_4 (void*,int,int *) ;
 scalar_t__ FUNC_5 (void*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (void*,TYPE_3__**) ;
 int FUNC_7 (void*,void**) ;
 scalar_t__ FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,void*,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*,void**) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;

int32_t FUNC_13(void *VAR_4, void *VAR_5)
{
    mz_zip_writer *VAR_6 = (mz_zip_writer *)VAR_4;
    mz_zip_file *VAR_7 = ((void*)0);
    int64_t VAR_8 = 0;
    int64_t VAR_9 = 0;
    uint32_t VAR_10 = 0;
    int32_t VAR_11 = VAR_0;
    uint8_t VAR_12 = 0;
    void *VAR_13 = ((void*)0);
    void *VAR_14 = ((void*)0);


    if (FUNC_8(VAR_5) != VAR_0)
        return VAR_1;
    if (FUNC_12(VAR_6) != VAR_0)
        return VAR_1;

    VAR_11 = FUNC_6(VAR_5, &VAR_7);

    if (VAR_11 != VAR_0)
        return VAR_11;

    FUNC_7(VAR_5, &VAR_13);
    FUNC_11(VAR_6, &VAR_14);


    VAR_11 = FUNC_4(VAR_13, 1, ((void*)0));

    if (VAR_11 == VAR_0)
    {

        VAR_12 = VAR_6->raw;
        VAR_6->raw = 1;

        VAR_11 = FUNC_10(VAR_6, VAR_7);

        if ((VAR_11 == VAR_0) &&
            (FUNC_0(VAR_6->file_info.external_fa, VAR_6->file_info.version_madeby) != VAR_0))
        {
            VAR_11 = FUNC_9(VAR_6, VAR_13, VAR_3);
        }

        if ((VAR_11 == VAR_0) && (VAR_7->flag & VAR_2))
        {
            VAR_11 = FUNC_3(VAR_13, &VAR_10, &VAR_8, &VAR_9);
            if (VAR_11 == VAR_0)
                VAR_11 = FUNC_5(VAR_14, VAR_10, VAR_8, VAR_9);
        }

        if (FUNC_2(VAR_13) == VAR_0)
            FUNC_1(VAR_13);

        if (FUNC_2(VAR_14) == VAR_0)
            FUNC_1(VAR_14);

        VAR_6->raw = VAR_12;
    }

    return VAR_11;
}
