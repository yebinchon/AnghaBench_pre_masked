
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ store_links; scalar_t__ aes; scalar_t__ zip_cd; int compress_method; } ;
typedef TYPE_1__ mz_zip_writer ;
struct TYPE_6__ {char const* filename; int external_fa; char* linkname; int version_madeby; int creation_date; int accessed_date; int modified_date; int aes_version; int flag; int uncompressed_size; int compression_method; } ;
typedef TYPE_2__ mz_zip_file ;
typedef int link_path ;
typedef scalar_t__ int32_t ;
typedef int file_info ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (char const*,int *,int *,int *) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 scalar_t__ FUNC_8 (char const*,char const**) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void**) ;
 int FUNC_11 (void**) ;
 scalar_t__ FUNC_12 (void*,char const*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (scalar_t__,int,scalar_t__,int*) ;
 scalar_t__ FUNC_14 (void*,void*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_15 (void*) ;

int32_t FUNC_16(void *VAR_10, const char *VAR_11, const char *VAR_12)
{
    mz_zip_writer *VAR_13 = (mz_zip_writer *)VAR_10;
    mz_zip_file VAR_14;
    uint32_t VAR_15 = 0;
    uint32_t VAR_16 = 0;
    int32_t VAR_17 = VAR_3;
    uint8_t VAR_18 = 0;
    void *VAR_19 = ((void*)0);
    char VAR_20[1024];
    const char *VAR_21 = VAR_12;


    if (FUNC_15(VAR_10) != VAR_3)
        return VAR_5;
    if (VAR_11 == ((void*)0))
        return VAR_5;

    if (VAR_21 == ((void*)0))
    {
        VAR_17 = FUNC_8(VAR_11, &VAR_21);
        if (VAR_17 != VAR_3)
            return VAR_17;
    }

    FUNC_1(&VAR_14, 0, sizeof(VAR_14));




    while (VAR_21[0] == '\\' || VAR_21[0] == '/')
        VAR_21 += 1;



    VAR_14.version_madeby = VAR_6;
    VAR_14.compression_method = VAR_13->compress_method;
    VAR_14.filename = VAR_21;
    VAR_14.uncompressed_size = FUNC_4(VAR_11);
    VAR_14.flag = VAR_8;

    if (VAR_13->zip_cd)
        VAR_14.flag |= VAR_7;
    if (VAR_13->aes)
        VAR_14.aes_version = VAR_0;

    FUNC_3(VAR_11, &VAR_14.modified_date, &VAR_14.accessed_date,
        &VAR_14.creation_date);
    FUNC_2(VAR_11, &VAR_16);

    VAR_18 = FUNC_0(VAR_14.version_madeby);

    if ((VAR_18 != VAR_1) && (VAR_18 != VAR_2))
    {

        if (FUNC_13(VAR_18, VAR_16, VAR_1, &VAR_15) == VAR_3)
            VAR_14.external_fa = VAR_15;
        VAR_14.external_fa |= (VAR_16 << 16);
    }
    else
    {
        VAR_14.external_fa = VAR_16;
    }

    if (VAR_13->store_links && FUNC_6(VAR_11) == VAR_3)
    {
        VAR_17 = FUNC_7(VAR_11, VAR_20, sizeof(VAR_20));
        if (VAR_17 == VAR_3)
            VAR_14.linkname = VAR_20;
    }

    if (FUNC_5(VAR_11) != VAR_3)
    {
        FUNC_11(&VAR_19);
        VAR_17 = FUNC_12(VAR_19, VAR_11, VAR_4);
    }

    if (VAR_17 == VAR_3)
        VAR_17 = FUNC_14(VAR_10, VAR_19, VAR_9, &VAR_14);

    if (VAR_19 != ((void*)0))
    {
        FUNC_9(VAR_19);
        FUNC_10(&VAR_19);
    }

    return VAR_17;
}
