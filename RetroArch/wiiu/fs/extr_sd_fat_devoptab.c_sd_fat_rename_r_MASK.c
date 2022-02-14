
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_4__ {int pMutex; int pCmd; int pClient; } ;
typedef TYPE_1__ sd_fat_private_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int ,char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6 (struct _reent *VAR_2, const char *VAR_3, const char *VAR_4)
{
    sd_fat_private_t *VAR_5 = FUNC_4(VAR_3);
    if(!VAR_5) {
        VAR_2->_errno = VAR_0;
        return -1;
    }

    FUNC_1(VAR_5->pMutex);

    char *VAR_6 = FUNC_5(VAR_3, VAR_5);
    if(!VAR_6) {
        VAR_2->_errno = VAR_1;
        FUNC_2(VAR_5->pMutex);
        return -1;
    }
    char *VAR_7 = FUNC_5(VAR_4, VAR_5);
    if(!VAR_7) {
        VAR_2->_errno = VAR_1;
        FUNC_3(VAR_6);
        FUNC_2(VAR_5->pMutex);
        return -1;
    }

    int VAR_8 = FUNC_0(VAR_5->pClient, VAR_5->pCmd, VAR_6, VAR_7, -1);

    FUNC_3(VAR_6);
    FUNC_3(VAR_7);

    FUNC_2(VAR_5->pMutex);

    if(VAR_8 < 0) {
        VAR_2->_errno = VAR_8;
        return -1;
    }

    return 0;

}
