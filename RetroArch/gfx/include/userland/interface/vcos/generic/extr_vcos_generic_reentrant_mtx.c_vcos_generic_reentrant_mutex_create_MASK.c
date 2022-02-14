
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VCOS_STATUS_T ;
struct TYPE_3__ {int mutex; scalar_t__ owner; scalar_t__ count; } ;
typedef TYPE_1__ VCOS_REENTRANT_MUTEX_T ;


 int FUNC_0 (int *,char const*) ;

VCOS_STATUS_T FUNC_1(VCOS_REENTRANT_MUTEX_T *VAR_0, const char *VAR_1)
{
   VAR_0->count = 0;
   VAR_0->owner = 0;
   return FUNC_0(&VAR_0->mutex, VAR_1);
}
