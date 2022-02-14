
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int cd_zipped; int entry_verified; int cd_verified; int zip_handle; } ;
typedef TYPE_1__ mz_zip_reader ;
struct TYPE_5__ {scalar_t__ uncompressed_size; int extrafield_size; scalar_t__ extrafield; int filename; } ;
typedef TYPE_2__ mz_zip_file ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*,int *,void*,int ,scalar_t__) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*,int *,int ) ;
 int FUNC_5 (void*,void*,int ) ;
 scalar_t__ FUNC_6 (void*,int *) ;
 scalar_t__ FUNC_7 (void*,int ,int ) ;
 scalar_t__ FUNC_8 (void*,int ,int *) ;
 int FUNC_9 (int ,void**) ;
 scalar_t__ FUNC_10 (void*,TYPE_2__**) ;
 scalar_t__ FUNC_11 (void*) ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (void*) ;
 int FUNC_13 (int ,int ,void*) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;

int32_t FUNC_16(void *VAR_6)
{
    mz_zip_reader *VAR_7 = (mz_zip_reader *)VAR_6;
    mz_zip_file *VAR_8 = ((void*)0);
    void *VAR_9 = ((void*)0);
    void *VAR_10 = ((void*)0);
    void *VAR_11 = ((void*)0);
    uint64_t VAR_12 = 0;
    int32_t VAR_13 = VAR_0;


    VAR_13 = FUNC_12(VAR_6);
    if (VAR_13 != VAR_0)
        return VAR_13;
    VAR_13 = FUNC_10(VAR_6, &VAR_8);
    if (VAR_13 != VAR_0)
        return VAR_13;

    if (FUNC_15(VAR_8->filename, VAR_3) != 0)
        return FUNC_12(VAR_6);

    VAR_13 = FUNC_11(VAR_6);
    if (VAR_13 != VAR_0)
        return VAR_13;

    FUNC_1(&VAR_11);
    FUNC_5(VAR_11, (void *)VAR_8->extrafield, VAR_8->extrafield_size);

    VAR_13 = FUNC_8(VAR_11, VAR_4, ((void*)0));
    if (VAR_13 == VAR_0)
        VAR_13 = FUNC_6(VAR_11, &VAR_12);

    FUNC_2(&VAR_11);

    if (VAR_13 != VAR_0)
        return VAR_13;

    FUNC_9(VAR_7->zip_handle, &VAR_9);
    if (FUNC_3(VAR_9) != VAR_0)
        FUNC_4(VAR_9, ((void*)0), VAR_1);

    VAR_13 = FUNC_7(VAR_9, 0, VAR_2);
    if (VAR_13 == VAR_0)
        VAR_13 = FUNC_0(VAR_9, ((void*)0), VAR_6, VAR_5,
            (int32_t)VAR_8->uncompressed_size);

    if (VAR_13 == VAR_0)
    {
        VAR_7->cd_zipped = 1;

        FUNC_13(VAR_7->zip_handle, 0, VAR_9);
        FUNC_14(VAR_7->zip_handle, VAR_12);

        VAR_13 = FUNC_12(VAR_6);
    }

    VAR_7->cd_verified = VAR_7->entry_verified;

    FUNC_2(&VAR_10);
    return VAR_13;
}
