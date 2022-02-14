
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int compression_method; int flag; int crc; scalar_t__ uncompressed_size; scalar_t__ compressed_size; int modified_date; int aes_encryption_mode; scalar_t__ aes_version; } ;
struct TYPE_4__ {int entry_raw; int open_mode; int entry_opened; scalar_t__ entry_crc32; int * compress_stream; int * crypt_stream; TYPE_1__ file_info; int * stream; } ;
typedef TYPE_2__ mz_zip ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,char const*) ;
 int FUNC_13 (int **) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int32_t FUNC_16(void *VAR_13, uint8_t VAR_14, int16_t VAR_15, const char *VAR_16)
{
    mz_zip *VAR_17 = (mz_zip *)VAR_13;
    int64_t VAR_18 = 0;
    int64_t VAR_19 = 0;
    int64_t VAR_20 = 0;
    int32_t VAR_21 = VAR_0;
    uint8_t VAR_22 = 0;

    if (VAR_17 == ((void*)0))
        return VAR_3;

    switch (VAR_17->file_info.compression_method)
    {
    case 128:
    case 130:






        VAR_21 = VAR_0;
        break;
    default:
        return VAR_9;
    }


    if (VAR_17->file_info.aes_version)
        return VAR_9;


    VAR_17->entry_raw = VAR_14;

    if ((VAR_17->file_info.flag & VAR_11) && (VAR_16 != ((void*)0)))
    {
        if (VAR_17->open_mode & VAR_2)
        {

            if (!VAR_17->entry_raw)
                VAR_22 = 1;
        }
        else if (VAR_17->open_mode & VAR_1)
        {


            VAR_22 = 1;
        }
    }

    if ((VAR_21 == VAR_0) && (VAR_22))
    {
        {
        }
    }

    if (VAR_21 == VAR_0)
    {
        if (VAR_17->crypt_stream == ((void*)0))
            FUNC_7(&VAR_17->crypt_stream);

        FUNC_8(VAR_17->crypt_stream, VAR_17->stream);

        VAR_21 = FUNC_3(VAR_17->crypt_stream, ((void*)0), VAR_17->open_mode);
    }

    if (VAR_21 == VAR_0)
    {
        if (VAR_17->entry_raw || VAR_17->file_info.compression_method == 128)
            FUNC_7(&VAR_17->compress_stream);
        else
            VAR_21 = VAR_3;
    }

    if (VAR_21 == VAR_0)
    {
        if (VAR_17->open_mode & VAR_2)
        {
            FUNC_9(VAR_17->compress_stream, VAR_4, VAR_15);
        }
        else
        {

            if (VAR_17->entry_raw || VAR_17->file_info.compression_method == 128 || VAR_17->file_info.flag & VAR_11)

            {
                VAR_18 = VAR_17->file_info.compressed_size;
                FUNC_9(VAR_17->crypt_stream, VAR_7, VAR_18);

                if (FUNC_1(VAR_17->crypt_stream, VAR_6, &VAR_19) == VAR_0)
                    VAR_18 -= VAR_19;
                if (FUNC_1(VAR_17->crypt_stream, VAR_5, &VAR_20) == VAR_0)
                    VAR_18 -= VAR_20;

                FUNC_9(VAR_17->compress_stream, VAR_7, VAR_18);
            }
            if ((VAR_17->file_info.compression_method == 129) && (VAR_17->file_info.flag & VAR_12) == 0)
            {
                FUNC_9(VAR_17->compress_stream, VAR_7, VAR_17->file_info.compressed_size);
                FUNC_9(VAR_17->compress_stream, VAR_8, VAR_17->file_info.uncompressed_size);
            }
        }

        FUNC_8(VAR_17->compress_stream, VAR_17->crypt_stream);

        VAR_21 = FUNC_3(VAR_17->compress_stream, ((void*)0), VAR_17->open_mode);
    }

    if (VAR_21 == VAR_0)
    {
        VAR_17->entry_opened = 1;
        VAR_17->entry_crc32 = 0;
    }
    else
    {
        FUNC_14(VAR_13);
    }

    return VAR_21;
}
