
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {TYPE_1__* file_info; } ;
typedef TYPE_2__ mz_zip_reader ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {int extrafield_size; scalar_t__ extrafield; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void*,void*,int ) ;
 scalar_t__ FUNC_3 (void*,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (void*,scalar_t__*) ;
 scalar_t__ FUNC_5 (void*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (void*,int ,int *) ;

int32_t FUNC_7(void *VAR_5, uint16_t VAR_6, uint8_t *VAR_7, int32_t VAR_8)
{
    mz_zip_reader *VAR_9 = (mz_zip_reader *)VAR_5;
    void *VAR_10 = ((void*)0);
    int32_t VAR_11 = VAR_2;
    int32_t VAR_12 = VAR_0;
    uint16_t VAR_13 = 0;
    uint16_t VAR_14 = 0;

    FUNC_0(&VAR_10);
    FUNC_2(VAR_10, (void *)VAR_9->file_info->extrafield,
        VAR_9->file_info->extrafield_size);

    do
    {
        VAR_11 = FUNC_6(VAR_10, VAR_4, ((void*)0));
        if (VAR_11 != VAR_2)
            break;

        VAR_11 = FUNC_4(VAR_10, &VAR_13);
        if (VAR_11 == VAR_2)
            VAR_11 = FUNC_4(VAR_10, &VAR_14);
        if ((VAR_11 == VAR_2) && (VAR_13 == VAR_6) && (VAR_14 <= VAR_8) &&
            (VAR_14 <= VAR_1))
        {

            if (FUNC_3(VAR_10, VAR_7, VAR_8) == VAR_14)
                VAR_12 = VAR_2;
            break;
        }
        else
        {
            VAR_11 = FUNC_5(VAR_10, VAR_14, VAR_3);
        }
    }
    while (VAR_11 == VAR_2);

    FUNC_1(&VAR_10);

    return VAR_12;
}
