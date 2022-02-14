
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int sha256 ;
struct TYPE_3__ {scalar_t__ extrafield_size; int crc; int uncompressed_size; int * extrafield; int filename; } ;
struct TYPE_4__ {scalar_t__ cert_data_size; int zip_handle; TYPE_1__ file_info; scalar_t__ raw; int file_extra_stream; int cert_pwd; int * cert_data; int zip_cd; int * sha256; } ;
typedef TYPE_2__ mz_zip_writer ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,void const**) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *,scalar_t__) ;
 int FUNC_7 (int ,int *,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int const*,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int) ;
 scalar_t__ FUNC_13 (void*,int *,int,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;

int32_t FUNC_15(void *VAR_7)
{
    mz_zip_writer *VAR_8 = (mz_zip_writer *)VAR_7;
    int32_t VAR_9 = VAR_2;

    const uint8_t *VAR_10 = ((void*)0);
    int32_t VAR_11 = 0;
    int16_t VAR_12 = 0;
    uint8_t VAR_13[VAR_1];


    if (VAR_8->sha256 != ((void*)0))
    {
        FUNC_1(VAR_8->sha256, VAR_13, sizeof(VAR_13));
        FUNC_0(&VAR_8->sha256);


        FUNC_2(&VAR_8->file_extra_stream);
        FUNC_5(VAR_8->file_extra_stream, ((void*)0), VAR_3);


        VAR_12 = 4 + VAR_1;
        VAR_9 = FUNC_12(VAR_8->file_extra_stream, VAR_6, VAR_12);
        if (VAR_9 == VAR_2)
            VAR_9 = FUNC_8(VAR_8->file_extra_stream, VAR_0);
        if (VAR_9 == VAR_2)
            VAR_9 = FUNC_8(VAR_8->file_extra_stream, VAR_1);
        if (VAR_9 == VAR_2)
        {
            if (FUNC_7(VAR_8->file_extra_stream, VAR_13, sizeof(VAR_13)) != VAR_1)
                VAR_9 = VAR_4;
        }
        if ((VAR_8->file_info.extrafield != ((void*)0)) && (VAR_8->file_info.extrafield_size > 0))
            FUNC_6(VAR_8->file_extra_stream, VAR_8->file_info.extrafield,
                VAR_8->file_info.extrafield_size);


        FUNC_3(VAR_8->file_extra_stream, (const void **)&VAR_10);
        FUNC_4(VAR_8->file_extra_stream, &VAR_11);

        FUNC_11(VAR_8->zip_handle, VAR_10, (uint16_t)VAR_11);
    }


    if (VAR_9 == VAR_2)
    {
        if (VAR_8->raw)
            VAR_9 = FUNC_10(VAR_8->zip_handle, VAR_8->file_info.uncompressed_size,
                VAR_8->file_info.crc);
        else
            VAR_9 = FUNC_9(VAR_8->zip_handle);
    }

    return VAR_9;
}
