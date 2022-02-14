
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_4__ {int pos; int len; TYPE_1__* dev; int fd; } ;
typedef TYPE_2__ sd_fat_file_state_t ;
typedef int off_t ;
struct TYPE_3__ {int pMutex; int pCmd; int pClient; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




__attribute__((used)) static off_t FUNC_3 (struct _reent *VAR_2, void* VAR_3, off_t VAR_4, int VAR_5)
{
    sd_fat_file_state_t *VAR_6 = (sd_fat_file_state_t *)VAR_3;
    if(!VAR_6->dev) {
        VAR_2->_errno = VAR_1;
        return 0;
    }

    FUNC_1(VAR_6->dev->pMutex);

    switch(VAR_5)
    {
    case 128:
        VAR_6->pos = VAR_4;
        break;
    case 130:
        VAR_6->pos += VAR_4;
        break;
    case 129:
        VAR_6->pos = VAR_6->len + VAR_4;
        break;
    default:
        VAR_2->_errno = VAR_0;
        return -1;
    }

    int VAR_7 = FUNC_0(VAR_6->dev->pClient, VAR_6->dev->pCmd, VAR_6->fd, VAR_6->pos, -1);

    FUNC_2(VAR_6->dev->pMutex);

    if(VAR_7 == 0)
    {
        return VAR_6->pos;
    }

    return VAR_7;
}
