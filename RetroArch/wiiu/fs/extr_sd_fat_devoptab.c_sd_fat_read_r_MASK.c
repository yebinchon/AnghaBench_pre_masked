
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _reent {int _errno; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int pos; TYPE_1__* dev; int fd; int read; } ;
typedef TYPE_2__ sd_fat_file_state_t ;
struct TYPE_3__ {int pMutex; int pCmd; int pClient; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned char*,int,size_t,int ,int ,int) ;
 size_t FUNC_1 (size_t) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char*) ;
 scalar_t__ FUNC_5 (int ,size_t) ;
 int FUNC_6 (char*,unsigned char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_7 (struct _reent *VAR_4, void* VAR_5, char *VAR_6, size_t VAR_7)
{
    sd_fat_file_state_t *VAR_8 = (sd_fat_file_state_t *)VAR_5;
    if(!VAR_8->dev) {
        VAR_4->_errno = VAR_1;
        return 0;
    }

    if(!VAR_8->read)
    {
        VAR_4->_errno = VAR_0;
        return 0;
    }

    FUNC_2(VAR_8->dev->pMutex);

    size_t VAR_9 = FUNC_1(VAR_7);
    if(VAR_9 > 0x4000)
        VAR_9 = 0x4000;

    unsigned char *VAR_10 = (unsigned char *)FUNC_5(VAR_3, VAR_9);
    if(!VAR_10) {
        VAR_4->_errno = VAR_2;
        FUNC_3(VAR_8->dev->pMutex);
        return 0;
    }

    size_t VAR_11 = 0;

    while(VAR_11 < VAR_7)
    {
        size_t VAR_12 = (VAR_9 < (VAR_7 - VAR_11)) ? VAR_9 : (VAR_7 - VAR_11);

        int VAR_13 = FUNC_0(VAR_8->dev->pClient, VAR_8->dev->pCmd, VAR_10, 0x01, VAR_12, VAR_8->fd, 0, -1);
        if(VAR_13 < 0)
        {
            VAR_4->_errno = VAR_13;
            VAR_11 = 0;
            break;
        }
        else if(VAR_13 == 0)
        {

            break;
        }
        else
        {
            FUNC_6(VAR_6 + VAR_11, VAR_10, VAR_12);
            VAR_11 += VAR_13;
            VAR_8->pos += VAR_13;
        }
    }

    FUNC_4(VAR_10);
    FUNC_3(VAR_8->dev->pMutex);
    return VAR_11;
}
