
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_7__ {int pMutex; int pCmd; int pClient; } ;
typedef TYPE_1__ sd_fat_private_t ;
struct TYPE_8__ {int flags; int read; int write; int append; int fd; int len; scalar_t__ pos; TYPE_1__* dev; } ;
typedef TYPE_2__ sd_fat_file_state_t ;
struct TYPE_9__ {int size; } ;
typedef TYPE_3__ FSStat ;
typedef int FSFileHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int,TYPE_3__*,int) ;
 int FUNC_2 (int ,int ,char*,char const*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8 (struct _reent *VAR_7, void *VAR_8, const char *VAR_9, int VAR_10, int VAR_11)
{
    sd_fat_private_t *VAR_12 = FUNC_6(VAR_9);
    if(!VAR_12) {
        VAR_7->_errno = VAR_1;
        return -1;
    }

    sd_fat_file_state_t *VAR_13 = (sd_fat_file_state_t *)VAR_8;

    VAR_13->dev = VAR_12;

    VAR_13->flags = VAR_10;

    const char *VAR_14;

    if ((VAR_10 & 0x03) == VAR_4) {
        VAR_13->read = 1;
        VAR_13->write = 0;
        VAR_13->append = 0;
        VAR_14 = "r";
    } else if ((VAR_10 & 0x03) == VAR_6) {
        VAR_13->read = 0;
        VAR_13->write = 1;
        VAR_13->append = (VAR_10 & VAR_3);
        VAR_14 = VAR_13->append ? "a" : "w";
    } else if ((VAR_10 & 0x03) == VAR_5) {
        VAR_13->read = 1;
        VAR_13->write = 1;
        VAR_13->append = (VAR_10 & VAR_3);
        VAR_14 = VAR_13->append ? "a+" : "r+";
    } else {
        VAR_7->_errno = VAR_0;
        return -1;
    }

    int VAR_15 = -1;

    FUNC_3(VAR_12->pMutex);

    char *VAR_16 = FUNC_7(VAR_9, VAR_12);
    if(!VAR_9) {
        VAR_7->_errno = VAR_2;
        FUNC_4(VAR_12->pMutex);
        return -1;
    }

    int VAR_17 = FUNC_2(VAR_12->pClient, VAR_12->pCmd, VAR_16, VAR_14, (FSFileHandle*)&VAR_15, -1);

    FUNC_5(VAR_16);

    if(VAR_17 == 0)
    {
        FSStat VAR_18;
        VAR_17 = FUNC_1(VAR_12->pClient, VAR_12->pCmd, VAR_15, &VAR_18, -1);
        if(VAR_17 != 0) {
            FUNC_0(VAR_12->pClient, VAR_12->pCmd, VAR_15, -1);
            VAR_7->_errno = VAR_17;
            FUNC_4(VAR_12->pMutex);
            return -1;
        }
        VAR_13->fd = VAR_15;
        VAR_13->pos = 0;
        VAR_13->len = VAR_18.size;
        FUNC_4(VAR_12->pMutex);
        return (int)VAR_13;
    }

    VAR_7->_errno = VAR_17;
    FUNC_4(VAR_12->pMutex);
    return -1;
}
