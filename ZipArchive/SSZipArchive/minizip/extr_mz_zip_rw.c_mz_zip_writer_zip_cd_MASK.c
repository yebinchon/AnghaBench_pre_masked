
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {int * password; int compress_method; int zip_handle; } ;
typedef TYPE_1__ mz_zip_writer ;
struct TYPE_7__ {scalar_t__ extrafield_size; int extrafield; int flag; scalar_t__ uncompressed_size; int compression_method; int version_madeby; int modified_date; int filename; } ;
typedef TYPE_2__ mz_zip_file ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef int cd_file ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (void*,int ,void*,int *,scalar_t__) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (void*,void const**) ;
 int FUNC_5 (void*,scalar_t__*) ;
 int FUNC_6 (void*,int *,int ) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (void*,int ,int ) ;
 scalar_t__ FUNC_9 (void*) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,int ,int) ;
 int FUNC_12 (int ,void**) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (void*,TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_16 (int *) ;

int32_t FUNC_17(void *VAR_10)
{
    mz_zip_writer *VAR_11 = (mz_zip_writer *)VAR_10;
    mz_zip_file VAR_12;
    uint64_t VAR_13 = 0;
    int64_t VAR_14 = 0;
    int32_t VAR_15 = VAR_0;
    int32_t VAR_16 = 0;
    void *VAR_17 = ((void*)0);
    void *VAR_18 = ((void*)0);


    FUNC_0(&VAR_12, 0, sizeof(VAR_12));

    FUNC_13(VAR_11->zip_handle, &VAR_13);
    FUNC_12(VAR_11->zip_handle, &VAR_18);
    FUNC_8(VAR_18, 0, VAR_2);
    VAR_14 = (uint32_t)FUNC_9(VAR_18);
    FUNC_8(VAR_18, 0, VAR_3);

    VAR_12.filename = VAR_5;
    VAR_12.modified_date = FUNC_16(((void*)0));
    VAR_12.version_madeby = VAR_4;
    VAR_12.compression_method = VAR_11->compress_method;
    VAR_12.uncompressed_size = (int32_t)VAR_14;
    VAR_12.flag = VAR_8;

    if (VAR_11->password != ((void*)0))
        VAR_12.flag |= VAR_7;

    FUNC_2(&VAR_17);
    FUNC_6(VAR_17, ((void*)0), VAR_1);

    FUNC_11(VAR_17, VAR_6, 8);

    FUNC_10(VAR_17, VAR_13);

    FUNC_4(VAR_17, (const void **)&VAR_12.extrafield);
    FUNC_5(VAR_17, &VAR_16);
    VAR_12.extrafield_size = (uint16_t)VAR_16;

    VAR_15 = FUNC_15(VAR_10, &VAR_12);
    if (VAR_15 == VAR_0)
    {
        FUNC_1(VAR_10, VAR_9, VAR_18,
            ((void*)0), (int32_t)VAR_14);

        FUNC_8(VAR_18, 0, VAR_3);
        FUNC_7(VAR_18, 0);

        VAR_15 = FUNC_14(VAR_11);
    }

    FUNC_3(&VAR_17);

    return VAR_15;
}
