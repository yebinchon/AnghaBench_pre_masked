
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ vfs_fat_ctx_t ;
struct TYPE_6__ {int fattrib; } ;
typedef scalar_t__ FRESULT ;
typedef TYPE_2__ FILINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char const*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,char const**,int *) ;

__attribute__((used)) static int FUNC_4(void* VAR_6, const char *VAR_7, int VAR_8)
{
    FILINFO VAR_9;
    int VAR_10 = 0;
    FRESULT VAR_11;

    vfs_fat_ctx_t* VAR_12 = (vfs_fat_ctx_t*) VAR_6;

    FUNC_0(&VAR_12->lock);
    FUNC_3(VAR_12, &VAR_7, ((void*)0));
    VAR_11 = FUNC_2(VAR_7, &VAR_9);
    FUNC_1(&VAR_12->lock);

    if (VAR_11 == VAR_3) {
        if (((VAR_8 & VAR_4) == VAR_4) && ((VAR_9.fattrib & VAR_0) == VAR_0)) {
            VAR_10 = -1;
            VAR_5 = VAR_1;
        }


    } else {
        VAR_10 = -1;
        VAR_5 = VAR_2;
    }

    return VAR_10;
}
