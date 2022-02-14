
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int password_buf ;
struct TYPE_4__ {int entry_verified; char* password; scalar_t__ hash_algorithm; int cd_verified; scalar_t__ sign_required; int hash; int hash_digest_size; int raw; int zip_handle; TYPE_2__* file_info; int password_userdata; int (* password_cb ) (void*,int ,TYPE_2__*,char*,int) ;} ;
typedef TYPE_1__ mz_zip_reader ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,char const*) ;
 scalar_t__ FUNC_5 (void*,scalar_t__*,int *) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (void*,int ,TYPE_2__*,char*,int) ;

int32_t FUNC_10(void *VAR_7)
{
    mz_zip_reader *VAR_8 = (mz_zip_reader *)VAR_7;
    int32_t VAR_9 = VAR_2;
    const char *VAR_10 = ((void*)0);
    char VAR_11[120];


    VAR_8->entry_verified = 0;

    if (FUNC_8(VAR_8) != VAR_2)
        return VAR_3;
    if (VAR_8->file_info == ((void*)0))
        return VAR_3;


    if (FUNC_3(VAR_8->zip_handle) == VAR_2)
        return VAR_2;

    VAR_10 = VAR_8->password;


    if ((VAR_8->file_info->flag & VAR_6) && (VAR_10 == ((void*)0)) &&
        (VAR_8->password_cb != ((void*)0)))
    {
        VAR_8->password_cb(VAR_7, VAR_8->password_userdata, VAR_8->file_info,
            VAR_11, sizeof(VAR_11));

        VAR_10 = VAR_11;
    }

    VAR_9 = FUNC_4(VAR_8->zip_handle, VAR_8->raw, VAR_10);

    if (VAR_9 != VAR_2)
        return VAR_9;

    if (FUNC_5(VAR_7, &VAR_8->hash_algorithm, &VAR_8->hash_digest_size) == VAR_2)
    {
        FUNC_1(&VAR_8->hash);
        if (VAR_8->hash_algorithm == VAR_0)
            FUNC_2(VAR_8->hash, VAR_0);
        else if (VAR_8->hash_algorithm == VAR_1)
            FUNC_2(VAR_8->hash, VAR_1);
        else
            VAR_9 = VAR_5;

        if (VAR_9 == VAR_2)
            FUNC_0(VAR_8->hash);
    }
    else if (VAR_8->sign_required && !VAR_8->cd_verified)
        VAR_9 = VAR_4;


    return VAR_9;
}
