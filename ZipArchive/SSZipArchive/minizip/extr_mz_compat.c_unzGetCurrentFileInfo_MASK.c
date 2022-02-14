
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size_filename; scalar_t__ size_file_extra; scalar_t__ size_file_comment; void* uncompressed_size; void* compressed_size; int external_fa; int internal_fa; scalar_t__ disk_num_start; int crc; int mz_dos_date; int compression_method; int flag; int version_needed; int version; } ;
typedef TYPE_1__ unz_file_info ;
typedef scalar_t__ unzFile ;
typedef void* uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {scalar_t__ filename_size; scalar_t__ extrafield_size; scalar_t__ comment_size; int * comment; int extrafield; int * filename; scalar_t__ uncompressed_size; scalar_t__ compressed_size; int external_fa; int internal_fa; scalar_t__ disk_number; int crc; int modified_date; int compression_method; int flag; int version_needed; int version_madeby; } ;
typedef TYPE_2__ mz_zip_file ;
struct TYPE_8__ {int handle; } ;
typedef TYPE_3__ mz_compat ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__**) ;
 int FUNC_2 (int ) ;

int FUNC_3(unzFile VAR_2, unz_file_info *VAR_3, char *VAR_4,
    uint16_t VAR_5, void *VAR_6, uint16_t VAR_7, char *VAR_8, uint16_t VAR_9)
{
    mz_compat *VAR_10 = (mz_compat *)VAR_2;
    mz_zip_file *VAR_11 = ((void*)0);
    uint16_t VAR_12 = 0;
    int32_t VAR_13 = VAR_0;

    if (VAR_10 == ((void*)0))
        return VAR_1;

    VAR_13 = FUNC_1(VAR_10->handle, &VAR_11);

    if ((VAR_13 == VAR_0) && (VAR_3 != ((void*)0)))
    {
        VAR_3->version = VAR_11->version_madeby;
        VAR_3->version_needed = VAR_11->version_needed;
        VAR_3->flag = VAR_11->flag;
        VAR_3->compression_method = VAR_11->compression_method;
        VAR_3->mz_dos_date = FUNC_2(VAR_11->modified_date);


        VAR_3->crc = VAR_11->crc;

        VAR_3->size_filename = VAR_11->filename_size;
        VAR_3->size_file_extra = VAR_11->extrafield_size;
        VAR_3->size_file_comment = VAR_11->comment_size;

        VAR_3->disk_num_start = (uint16_t)VAR_11->disk_number;
        VAR_3->internal_fa = VAR_11->internal_fa;
        VAR_3->external_fa = VAR_11->external_fa;

        VAR_3->compressed_size = (uint32_t)VAR_11->compressed_size;
        VAR_3->uncompressed_size = (uint32_t)VAR_11->uncompressed_size;

        if (VAR_5 > 0 && VAR_4 != ((void*)0) && VAR_11->filename != ((void*)0))
        {
            VAR_12 = VAR_5;
            if (VAR_12 > VAR_11->filename_size)
                VAR_12 = VAR_11->filename_size;
            FUNC_0(VAR_4, VAR_11->filename, VAR_12);
            if (VAR_12 < VAR_5)
                VAR_4[VAR_12] = 0;
        }
        if (VAR_7 > 0 && VAR_6 != ((void*)0))
        {
            VAR_12 = VAR_7;
            if (VAR_12 > VAR_11->extrafield_size)
                VAR_12 = VAR_11->extrafield_size;
            FUNC_0(VAR_6, &VAR_11->extrafield, VAR_12);
        }
        if (VAR_9 > 0 && VAR_8 != ((void*)0) && VAR_11->comment != ((void*)0))
        {
            VAR_12 = VAR_9;
            if (VAR_12 > VAR_11->comment_size)
                VAR_12 = VAR_11->comment_size;
            FUNC_0(VAR_8, VAR_11->comment, VAR_12);
            if (VAR_12 < VAR_9)
                VAR_8[VAR_12] = 0;
        }
    }
    return VAR_13;
}
