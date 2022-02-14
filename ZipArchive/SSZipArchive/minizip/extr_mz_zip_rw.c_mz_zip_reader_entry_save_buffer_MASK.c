
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* file_info; } ;
typedef TYPE_2__ mz_zip_reader ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ uncompressed_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (void*,int *,int ) ;
 int FUNC_3 (void*,void*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (void*,void*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

int32_t FUNC_6(void *VAR_5, void *VAR_6, int32_t VAR_7)
{
    mz_zip_reader *VAR_8 = (mz_zip_reader *)VAR_5;
    void *VAR_9 = ((void*)0);
    int32_t VAR_10 = VAR_1;

    if (FUNC_5(VAR_8) != VAR_1)
        return VAR_3;
    if (VAR_8->file_info == ((void*)0))
        return VAR_3;
    if (VAR_8->file_info->uncompressed_size > VAR_0)
        return VAR_3;
    if (VAR_7 != (int32_t)VAR_8->file_info->uncompressed_size)
        return VAR_3;


    FUNC_0(&VAR_9);
    FUNC_3(VAR_9, VAR_6, VAR_7);

    VAR_10 = FUNC_2(VAR_9, ((void*)0), VAR_2);
    if (VAR_10 == VAR_1)
        VAR_10 = FUNC_4(VAR_5, VAR_9, VAR_4);

    FUNC_1(&VAR_9);
    return VAR_10;
}
