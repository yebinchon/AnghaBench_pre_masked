
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int req ;
typedef int reply ;
struct TYPE_3__ {scalar_t__ status; scalar_t__ handle; int header; scalar_t__ size; } ;
typedef TYPE_1__ mmal_worker_consume_mem ;
typedef scalar_t__ MMAL_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int,int ,TYPE_1__*,size_t*,int ) ;
 int FUNC_2 (int) ;

MMAL_STATUS_T FUNC_3(size_t VAR_3, uint32_t *VAR_4)
{
   MMAL_STATUS_T VAR_5;
   mmal_worker_consume_mem VAR_6;
   mmal_worker_consume_mem VAR_7;
   size_t VAR_8 = sizeof(VAR_7);

   VAR_6.size = (uint32_t) VAR_3;

   VAR_5 = FUNC_1(FUNC_0(),
                                     &VAR_6.header, sizeof(VAR_6),
                                     VAR_2,
                                     &VAR_7, &VAR_8, VAR_0);
   if (VAR_5 == VAR_1)
   {
      FUNC_2(VAR_8 == sizeof(VAR_7));
      VAR_5 = VAR_7.status;
      *VAR_4 = VAR_7.handle;
   }
   return VAR_5;
}
