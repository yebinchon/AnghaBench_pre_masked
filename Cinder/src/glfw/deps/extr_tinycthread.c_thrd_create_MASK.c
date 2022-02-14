
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thrd_t ;
typedef int thrd_start_t ;
struct TYPE_3__ {void* mArg; int mFunction; } ;
typedef TYPE_1__ _thread_start_info ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int *,int ,int ,void*,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(thrd_t *VAR_4, thrd_start_t VAR_5, void *VAR_6)
{


  _thread_start_info* VAR_7 = (_thread_start_info*)FUNC_2(sizeof(_thread_start_info));
  if (VAR_7 == ((void*)0))
  {
    return VAR_2;
  }
  VAR_7->mFunction = VAR_5;
  VAR_7->mArg = VAR_6;
  if(!*VAR_4)
  {
    FUNC_1(VAR_7);
    return VAR_1;
  }

  return VAR_3;
}
