
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {TYPE_1__* file_info; } ;
typedef TYPE_2__ mz_zip_reader ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {int extrafield_size; scalar_t__ extrafield; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void*,void*,int ) ;
 scalar_t__ FUNC_3 (void*,int *) ;
 scalar_t__ FUNC_4 (void*,int ,int *) ;

int32_t FUNC_5(void *VAR_3, uint16_t *VAR_4, uint16_t *VAR_5)
{
    mz_zip_reader *VAR_6 = (mz_zip_reader *)VAR_3;
    void *VAR_7 = ((void*)0);
    int32_t VAR_8 = VAR_0;
    uint16_t VAR_9 = 0;
    uint16_t VAR_10 = 0;

    if (VAR_6 == ((void*)0) || VAR_4 == ((void*)0))
        return VAR_1;

    FUNC_0(&VAR_7);
    FUNC_2(VAR_7, (void *)VAR_6->file_info->extrafield,
        VAR_6->file_info->extrafield_size);

    VAR_8 = FUNC_4(VAR_7, VAR_2, ((void*)0));
    if (VAR_8 == VAR_0)
        VAR_8 = FUNC_3(VAR_7, &VAR_9);
    if (VAR_8 == VAR_0)
        VAR_8 = FUNC_3(VAR_7, &VAR_10);

    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_9;
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_10;

    FUNC_1(&VAR_7);

    return VAR_8;
}
