
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_3__ {scalar_t__ high_priority; } ;
typedef TYPE_1__ CLIENT_THREAD_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VCHIQ_SERVICE_HANDLE_T FUNC_0(CLIENT_THREAD_STATE_T *VAR_2)
{
   VCHIQ_SERVICE_HANDLE_T VAR_3 = (VAR_2->high_priority ? VAR_0 : VAR_1);
    return VAR_3;
}
