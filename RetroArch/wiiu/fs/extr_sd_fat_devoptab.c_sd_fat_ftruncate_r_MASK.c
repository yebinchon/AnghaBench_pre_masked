
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_4__ {TYPE_1__* dev; int fd; } ;
typedef TYPE_2__ sd_fat_file_state_t ;
typedef int off_t ;
struct TYPE_3__ {int pMutex; int pCmd; int pClient; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (struct _reent *VAR_1, void* VAR_2, off_t VAR_3)
{
    sd_fat_file_state_t *VAR_4 = (sd_fat_file_state_t *)VAR_2;
    if(!VAR_4->dev) {
        VAR_1->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_4->dev->pMutex);

    int VAR_5 = FUNC_0(VAR_4->dev->pClient, VAR_4->dev->pCmd, VAR_4->fd, -1);

    FUNC_2(VAR_4->dev->pMutex);

    if(VAR_5 < 0) {
        VAR_1->_errno = VAR_5;
        return -1;
    }

    return 0;
}
