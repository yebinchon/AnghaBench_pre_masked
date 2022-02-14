
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_2__ {int * services; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline VCHIQ_SERVICE_T *
FUNC_0(VCHIQ_SERVICE_HANDLE_T VAR_2)
{
   return &VAR_1.services[VAR_2 & (VAR_0 - 1)];
}
