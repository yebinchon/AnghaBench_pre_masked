
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ pthread_mutexattr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(const pthread_mutexattr_t *VAR_4)
{
    if (VAR_4->type != VAR_2 &&
        VAR_4->type != VAR_3 &&
        VAR_4->type != VAR_1) {
        return VAR_0;
    }
    return 0;
}
