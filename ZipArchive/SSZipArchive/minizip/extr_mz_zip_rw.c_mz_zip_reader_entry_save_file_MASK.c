
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pathwfs ;
struct TYPE_5__ {scalar_t__ (* overwrite_cb ) (void*,int ,TYPE_2__*,char*) ;TYPE_2__* file_info; int zip_handle; int overwrite_userdata; int entry_userdata; int (* entry_cb ) (void*,int ,TYPE_2__*,char*) ;} ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;
typedef int directory ;
struct TYPE_6__ {int external_fa; int version_madeby; int creation_date; int accessed_date; int modified_date; int linkname; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void**) ;
 int FUNC_13 (void**) ;
 scalar_t__ FUNC_14 (void*,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_15 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (void*,void*,int ) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (char*,char const*,int) ;
 int FUNC_21 (void*,int ,TYPE_2__*,char*) ;
 scalar_t__ FUNC_22 (void*,int ,TYPE_2__*,char*) ;

int32_t FUNC_23(void *VAR_6, const char *VAR_7)
{
    mz_zip_reader *VAR_8 = (mz_zip_reader *)VAR_6;
    void *VAR_9 = ((void*)0);
    uint32_t VAR_10 = 0;
    int32_t VAR_11 = 0;
    int32_t VAR_12 = VAR_0;
    int32_t VAR_13 = VAR_0;
    char VAR_14[512];
    char VAR_15[512];

    if (FUNC_19(VAR_8) != VAR_0)
        return VAR_2;
    if (VAR_8->file_info == ((void*)0) || VAR_7 == ((void*)0))
        return VAR_2;


    FUNC_20(VAR_14, VAR_7, sizeof(VAR_14) - 1);
    VAR_14[sizeof(VAR_14) - 1] = 0;
    FUNC_8(VAR_14, VAR_3);

    if (VAR_8->entry_cb != ((void*)0))
        VAR_8->entry_cb(VAR_6, VAR_8->entry_userdata, VAR_8->file_info, VAR_14);

    FUNC_20(VAR_15, VAR_14, sizeof(VAR_15) - 1);
    VAR_15[sizeof(VAR_15) - 1] = 0;
    FUNC_9(VAR_15);


    if ((FUNC_16(VAR_8->zip_handle) == VAR_0) &&
        (FUNC_17(VAR_8->zip_handle) != VAR_0))
    {
        VAR_12 = FUNC_1(VAR_15);
        return VAR_12;
    }


    if ((FUNC_2(VAR_14) == VAR_0) && (VAR_8->overwrite_cb != ((void*)0)))
    {
        VAR_13 = VAR_8->overwrite_cb(VAR_6, VAR_8->overwrite_userdata, VAR_8->file_info, VAR_14);
        if (VAR_13 != VAR_0)
            return VAR_12;

        FUNC_7(VAR_14);
    }


    if (FUNC_17(VAR_8->zip_handle) == VAR_0)
    {
        FUNC_10(VAR_14);
        FUNC_9(VAR_15);
    }


    if (FUNC_3(VAR_15) != VAR_0)
    {
        VAR_12 = FUNC_1(VAR_15);
        if (VAR_12 != VAR_0)
            return VAR_12;
    }


    if (FUNC_17(VAR_8->zip_handle) == VAR_0)
    {
        FUNC_4(VAR_14, VAR_8->file_info->linkname);

        return VAR_12;
    }


    FUNC_13(&VAR_9);
    VAR_12 = FUNC_14(VAR_9, VAR_14, VAR_1);

    if (VAR_12 == VAR_0)
        VAR_12 = FUNC_18(VAR_6, VAR_9, VAR_5);

    FUNC_11(VAR_9);
    FUNC_12(&VAR_9);

    if (VAR_12 == VAR_0)
    {

        FUNC_6(VAR_14, VAR_8->file_info->modified_date,
            VAR_8->file_info->accessed_date, VAR_8->file_info->creation_date);
    }

    if (VAR_12 == VAR_0)
    {

        VAR_11 = FUNC_15(FUNC_0(VAR_8->file_info->version_madeby),
            VAR_8->file_info->external_fa, VAR_4, &VAR_10);

        if (VAR_11 == VAR_0)
            FUNC_5(VAR_14, VAR_10);
    }

    return VAR_12;
}
