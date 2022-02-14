
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {unsigned int handle; scalar_t__ status; int header; int op; } ;
typedef TYPE_1__ mmal_worker_opaque_allocator ;
typedef scalar_t__ MMAL_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int,int ,TYPE_1__*,size_t*,int ) ;

MMAL_STATUS_T FUNC_2(unsigned int VAR_4)
{
   MMAL_STATUS_T VAR_5;
   mmal_worker_opaque_allocator VAR_6;
   size_t VAR_7 = sizeof(VAR_6);
   VAR_6.handle = VAR_4;
   VAR_6.op = VAR_3;
   VAR_5 = FUNC_1(FUNC_0(),
                                  &VAR_6.header, sizeof(VAR_6),
                                  VAR_2,
                                  &VAR_6, &VAR_7, VAR_0);
   if (VAR_5 == VAR_1)
      VAR_5 = VAR_6.status;
   return VAR_5;
}
