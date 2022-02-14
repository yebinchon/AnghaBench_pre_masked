
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef scalar_t__ VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_5__ {size_t num_bytes; void* virt_addr; } ;
typedef TYPE_2__ VCHIQ_DUMP_MEM_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;

VCHIQ_STATUS_T FUNC_2( VCHIQ_SERVICE_HANDLE_T VAR_3,
                             void *VAR_4,
                             size_t VAR_5 )
{
   VCHIQ_SERVICE_T *VAR_6 = (VCHIQ_SERVICE_T *)VAR_3;
   VCHIQ_DUMP_MEM_T VAR_7;
   int VAR_8;

   if (!VAR_6)
      return VAR_0;

   VAR_7.virt_addr = VAR_4;
   VAR_7.num_bytes = VAR_5;

   FUNC_0(VAR_8,FUNC_1(VAR_6->fd, VAR_1, &VAR_7));
   return (VAR_8 >= 0) ? VAR_2 : VAR_0;
}
