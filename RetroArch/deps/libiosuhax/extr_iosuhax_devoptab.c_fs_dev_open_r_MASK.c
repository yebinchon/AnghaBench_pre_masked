
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_7__ {int pMutex; int fsaFd; } ;
typedef TYPE_1__ fs_dev_private_t ;
struct TYPE_8__ {int flags; int read; int write; int append; int fd; int len; scalar_t__ pos; TYPE_1__* dev; } ;
typedef TYPE_2__ fs_dev_file_state_t ;
struct TYPE_9__ {int size; } ;
typedef TYPE_3__ fileStat_s ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,char const*,int*) ;
 int FUNC_2 (int ,int,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8 (struct _reent *VAR_8, void *VAR_9, const char *VAR_10, int VAR_11, int VAR_12)
{
    fs_dev_private_t *VAR_13 = FUNC_6(VAR_10);

    if(!VAR_8)
        return -1;

    if(!VAR_13) {
        VAR_8->_errno = VAR_2;
        return -1;
    }

    fs_dev_file_state_t *VAR_14 = (fs_dev_file_state_t *)VAR_9;
    if(!VAR_14) {
       VAR_8->_errno = VAR_1;
       return -1;
    }

    VAR_14->dev = VAR_13;

    VAR_14->flags = VAR_11;

    const char *VAR_15;

    if ((VAR_11 & 0x03) == VAR_5) {
        VAR_14->read = 1;
        VAR_14->write = 0;
        VAR_14->append = 0;
        VAR_15 = "r";
    } else if ((VAR_11 & 0x03) == VAR_7) {
        VAR_14->read = 0;
        VAR_14->write = 1;
        VAR_14->append = (VAR_11 & VAR_4);
        VAR_15 = VAR_14->append ? "a" : "w";
    } else if ((VAR_11 & 0x03) == VAR_6) {
        VAR_14->read = 1;
        VAR_14->write = 1;
        VAR_14->append = (VAR_11 & VAR_4);
        VAR_15 = VAR_14->append ? "a+" : "r+";
    } else {
        VAR_8->_errno = VAR_0;
        return -1;
    }

    int VAR_16 = -1;

    FUNC_3(VAR_13->pMutex);

    char *VAR_17 = FUNC_7(VAR_10, VAR_13);
    if(!VAR_10) {
        VAR_8->_errno = VAR_3;
        FUNC_4(VAR_13->pMutex);
        return -1;
    }

    int VAR_18 = FUNC_1(VAR_13->fsaFd, VAR_17, VAR_15, &VAR_16);

    FUNC_5(VAR_17);

    if(VAR_18 == 0)
    {
        fileStat_s VAR_19;
        VAR_18 = FUNC_2(VAR_13->fsaFd, VAR_16, &VAR_19);
        if(VAR_18 != 0) {
            FUNC_0(VAR_13->fsaFd, VAR_16);
            VAR_8->_errno = VAR_18;
            FUNC_4(VAR_13->pMutex);
            return -1;
        }
        VAR_14->fd = VAR_16;
        VAR_14->pos = 0;
        VAR_14->len = VAR_19.size;
        FUNC_4(VAR_13->pMutex);
        return (int)VAR_14;
    }

    VAR_8->_errno = VAR_18;
    FUNC_4(VAR_13->pMutex);
    return -1;
}
