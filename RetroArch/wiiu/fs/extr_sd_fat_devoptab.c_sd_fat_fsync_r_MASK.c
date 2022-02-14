
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_4__ {TYPE_1__* dev; int fd; } ;
typedef TYPE_2__ sd_fat_file_state_t ;
struct TYPE_3__ {int pMutex; int pCmd; int pClient; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (struct _reent *VAR_1, void* VAR_2)
{
    sd_fat_file_state_t *VAR_3 = (sd_fat_file_state_t *)VAR_2;
    if(!VAR_3->dev) {
        VAR_1->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_3->dev->pMutex);

    int VAR_4 = FUNC_0(VAR_3->dev->pClient, VAR_3->dev->pCmd, VAR_3->fd, -1);

    FUNC_2(VAR_3->dev->pMutex);

    if(VAR_4 < 0) {
        VAR_1->_errno = VAR_4;
        return -1;
    }

    return 0;
}
