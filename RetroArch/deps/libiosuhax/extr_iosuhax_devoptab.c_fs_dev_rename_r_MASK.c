
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_4__ {int pMutex; } ;
typedef TYPE_1__ fs_dev_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5 (struct _reent *VAR_4, const char *VAR_5, const char *VAR_6)
{
    fs_dev_private_t *VAR_7 = FUNC_3(VAR_5);

    if(!VAR_4)
        return -1;

    if(!VAR_7) {
        VAR_4->_errno = VAR_1;
        return -1;
    }

    if(!VAR_6) {
       VAR_4->_errno = VAR_0;
       return -1;
    }

    FUNC_0(VAR_7->pMutex);

    char *VAR_8 = FUNC_4(VAR_5, VAR_7);
    if(!VAR_8) {
        VAR_4->_errno = VAR_2;
        FUNC_1(VAR_7->pMutex);
        return -1;
    }
    char *VAR_9 = FUNC_4(VAR_6, VAR_7);
    if(!VAR_9) {
        VAR_4->_errno = VAR_2;
        FUNC_2(VAR_8);
        FUNC_1(VAR_7->pMutex);
        return -1;
    }


    int VAR_10 = -VAR_3;

    FUNC_2(VAR_8);
    FUNC_2(VAR_9);

    FUNC_1(VAR_7->pMutex);

    if(VAR_10 < 0) {
        VAR_4->_errno = VAR_10;
        return -1;
    }

    return 0;

}
