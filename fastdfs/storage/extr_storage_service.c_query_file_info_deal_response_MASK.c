
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mtime; int st_size; } ;
struct fast_task_info {scalar_t__ arg; } ;
typedef int int64_t ;
typedef int decode_buff ;
struct TYPE_9__ {char** paths; } ;
struct TYPE_7__ {int filename; int fname2log; } ;
struct TYPE_8__ {TYPE_2__ file_context; } ;
struct TYPE_6__ {int storage_id; int mtime; int fsize; } ;
typedef TYPE_1__ StorageFileInfoForCRC32 ;
typedef TYPE_2__ StorageFileContext ;
typedef TYPE_3__ StorageClientInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int ,char*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct fast_task_info*,int ,int const,struct stat*,int) ;
 int FUNC_7 (struct fast_task_info*,TYPE_1__*,int) ;
 int FUNC_8 (int ,int,char*,char const*,...) ;

__attribute__((used)) static int FUNC_9(struct fast_task_info *VAR_5,
        const char *VAR_6, const char *VAR_7,
        struct stat *VAR_8, const int VAR_9)
{
 char VAR_10[64];
 int VAR_11;
    int VAR_12;
    int VAR_13;
    int64_t VAR_14;
    StorageFileInfoForCRC32 VAR_15;

 FUNC_4(VAR_10, 0, sizeof(VAR_10));
 FUNC_1(&VAR_3, VAR_6 +
  VAR_1, VAR_0,
  VAR_10, &VAR_11);
 VAR_12 = FUNC_5(FUNC_2(VAR_10));
 VAR_14 = FUNC_3(VAR_10 + sizeof(int) * 2);
 if (FUNC_0(VAR_14))
    {
        StorageClientInfo *VAR_16;
        StorageFileContext *VAR_17;

        VAR_16 = (StorageClientInfo *)VAR_5->arg;
        VAR_17 = &(VAR_16->file_context);

        FUNC_8(VAR_17->fname2log, sizeof(VAR_17->fname2log),
                "%s", VAR_6);
        FUNC_8(VAR_17->filename, sizeof(VAR_17->filename),
                "%s/data/%s", VAR_4.paths[VAR_9],
                VAR_7);

        return FUNC_6(VAR_5,
                VAR_2,
                VAR_9, VAR_8, VAR_12);
    }

    VAR_15.storage_id = VAR_12;
    VAR_15.fsize = VAR_8->st_size;
    VAR_15.mtime = VAR_8->st_mtime;
 VAR_13 = FUNC_2(VAR_10 + sizeof(int) * 4);
    return FUNC_7(VAR_5, &VAR_15, VAR_13);
}
