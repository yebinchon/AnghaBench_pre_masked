
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VCHIU_QUEUE_T ;
struct TYPE_3__ {scalar_t__ high_priority; } ;
typedef TYPE_1__ CLIENT_THREAD_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VCHIU_QUEUE_T *FUNC_0(CLIENT_THREAD_STATE_T *VAR_2)
{
   return VAR_2->high_priority ? &VAR_0 : &VAR_1;
}
