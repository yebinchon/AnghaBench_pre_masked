
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int password_buf ;
struct TYPE_7__ {int flag; int version_madeby; int external_fa; } ;
struct TYPE_6__ {char* password; int raw; int compress_level; TYPE_2__ file_info; int zip_handle; int sha256; int password_userdata; int (* password_cb ) (void*,int ,TYPE_2__*,char*,int) ;int entry_userdata; int (* entry_cb ) (void*,int ,TYPE_2__*) ;} ;
typedef TYPE_1__ mz_zip_writer ;
typedef int mz_zip_file ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,int ,int ,char const*) ;
 int FUNC_6 (void*,int ,TYPE_2__*) ;
 int FUNC_7 (void*,int ,TYPE_2__*,char*,int) ;

int32_t FUNC_8(void *VAR_3, mz_zip_file *VAR_4)
{
    mz_zip_writer *VAR_5 = (mz_zip_writer *)VAR_3;
    int32_t VAR_6 = VAR_1;
    const char *VAR_7 = ((void*)0);
    char VAR_8[120];


    FUNC_0(&VAR_5->file_info, VAR_4, sizeof(mz_zip_file));

    if (VAR_5->entry_cb != ((void*)0))
        VAR_5->entry_cb(VAR_3, VAR_5->entry_userdata, &VAR_5->file_info);

    VAR_7 = VAR_5->password;


    if ((VAR_5->file_info.flag & VAR_2) && (VAR_7 == ((void*)0)) &&
        (VAR_5->password_cb != ((void*)0)))
    {
        VAR_5->password_cb(VAR_3, VAR_5->password_userdata, &VAR_5->file_info,
            VAR_8, sizeof(VAR_8));
        VAR_7 = VAR_8;
    }


    if (FUNC_4(VAR_5->file_info.external_fa, VAR_5->file_info.version_madeby) != VAR_1)
    {

        FUNC_2(&VAR_5->sha256);
        FUNC_3(VAR_5->sha256, VAR_0);
        FUNC_1(VAR_5->sha256);
    }



    VAR_6 = FUNC_5(VAR_5->zip_handle, &VAR_5->file_info, VAR_5->compress_level,
        VAR_5->raw, VAR_7);

    return VAR_6;
}
