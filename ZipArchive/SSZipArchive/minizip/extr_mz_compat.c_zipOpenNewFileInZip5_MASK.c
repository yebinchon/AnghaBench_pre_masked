
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mz_dos_date; int internal_fa; int external_fa; int tmz_date; } ;
typedef TYPE_1__ zip_fileinfo ;
typedef scalar_t__ zipFile ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef void const* uint16_t ;
struct TYPE_8__ {char const* filename; char const* comment; int flag; int aes_version; int zip64; void const* version_madeby; void const* extrafield_size; void const* extrafield; void const* compression_method; int internal_fa; int external_fa; int modified_date; } ;
typedef TYPE_2__ mz_zip_file ;
struct TYPE_9__ {int handle; } ;
typedef TYPE_3__ mz_compat ;
typedef int int16_t ;
typedef int file_info ;


 int VAR_0 ;
 int FUNC_0 (void const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_2__*,int ,int ,char const*) ;
 scalar_t__ FUNC_4 (int *) ;

int FUNC_5(zipFile VAR_5, const char *VAR_6, const zip_fileinfo *VAR_7,
    const void *VAR_8, uint16_t VAR_9, const void *VAR_10,
    uint16_t VAR_11, const char *VAR_12, uint16_t VAR_13, int VAR_14,
    int VAR_15, int VAR_16, int VAR_17, int VAR_18, const char *VAR_19,
    signed char VAR_20, uint16_t VAR_21, uint16_t VAR_22, int VAR_23)
{
    mz_compat *VAR_24 = (mz_compat *)VAR_5;
    mz_zip_file VAR_25;
    uint64_t VAR_26 = 0;

    FUNC_0(VAR_18);
    FUNC_0(VAR_17);
    FUNC_0(VAR_16);
    FUNC_0(VAR_9);
    FUNC_0(VAR_8);

    if (VAR_24 == ((void*)0))
        return VAR_4;

    FUNC_1(&VAR_25, 0, sizeof(VAR_25));

    if (VAR_7 != ((void*)0))
    {
        if (VAR_7->mz_dos_date != 0)
            VAR_26 = VAR_7->mz_dos_date;
        else
            VAR_26 = FUNC_4(&VAR_7->tmz_date);

        VAR_25.modified_date = FUNC_2(VAR_26);
        VAR_25.external_fa = VAR_7->external_fa;
        VAR_25.internal_fa = VAR_7->internal_fa;
    }

    if (VAR_6 == ((void*)0))
        VAR_6 = "-";

    VAR_25.compression_method = VAR_13;
    VAR_25.filename = VAR_6;


    VAR_25.extrafield = VAR_10;
    VAR_25.extrafield_size = VAR_11;
    VAR_25.version_madeby = VAR_21;
    VAR_25.comment = VAR_12;
    VAR_25.flag = VAR_22;
    if (VAR_23)
        VAR_25.zip64 = VAR_2;
    else
        VAR_25.zip64 = VAR_1;





    return FUNC_3(VAR_24->handle, &VAR_25, (int16_t)VAR_14, (uint8_t)VAR_15, VAR_19);
}
