
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _reent {int _errno; } ;
struct TYPE_2__ {int dev; } ;
typedef TYPE_1__ fs_dev_file_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0 (struct _reent *VAR_3, void *VAR_4)
{
    fs_dev_file_state_t *VAR_5 = (fs_dev_file_state_t *)VAR_4;

    if(!VAR_3)
        return -1;

    if(!VAR_5) {
        VAR_3->_errno = VAR_0;
        return -1;
    }

    if(!VAR_5->dev) {
        VAR_3->_errno = VAR_1;
        return -1;
    }

    VAR_3->_errno = VAR_2;

    return -1;
}
