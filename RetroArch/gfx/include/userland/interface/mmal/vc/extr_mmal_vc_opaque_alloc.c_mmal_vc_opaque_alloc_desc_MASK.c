
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {int handle; int header; int description; int op; } ;
typedef TYPE_1__ mmal_worker_opaque_allocator ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_OPAQUE_IMAGE_HANDLE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int,int ,TYPE_1__*,size_t*,int ) ;
 int FUNC_2 (int ,char const*,int,int ) ;

MMAL_OPAQUE_IMAGE_HANDLE_T FUNC_3(const char *VAR_4)
{
   MMAL_STATUS_T VAR_5;
   MMAL_OPAQUE_IMAGE_HANDLE_T VAR_6 = 0;
   mmal_worker_opaque_allocator VAR_7;
   size_t VAR_8 = sizeof(VAR_7);
   VAR_7.op = VAR_3;
   FUNC_2(VAR_7.description, VAR_4, sizeof(VAR_7.description), 0);
   VAR_5 = FUNC_1(FUNC_0(),
                                  &VAR_7.header, sizeof(VAR_7),
                                  VAR_2,
                                  &VAR_7, &VAR_8, VAR_0);
   if (VAR_5 == VAR_1)
   {
      VAR_6 = VAR_7.handle;
   }
   return VAR_6;
}
