
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int modification_timestamp; int access_timestamp; int status_change_timestamp; int user_id; int group_id; int filemode; int type; } ;
typedef TYPE_1__ AVIODirEntry ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

AVIODirEntry *FUNC_1(void)
{
    AVIODirEntry *VAR_1 = FUNC_0(sizeof(AVIODirEntry));
    if (VAR_1) {
        VAR_1->type = VAR_0;
        VAR_1->size = -1;
        VAR_1->modification_timestamp = -1;
        VAR_1->access_timestamp = -1;
        VAR_1->status_change_timestamp = -1;
        VAR_1->user_id = -1;
        VAR_1->group_id = -1;
        VAR_1->filemode = -1;
    }
    return VAR_1;
}
