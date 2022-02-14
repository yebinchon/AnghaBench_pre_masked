
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ VCHI_CALLBACK_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_10__ {scalar_t__ callback; TYPE_2__* userdata; int fourcc; } ;
struct TYPE_11__ {void* lib_handle; scalar_t__ vchi_callback; int peek_size; int is_client; void* handle; int * peek_buf; int fd; TYPE_1__ base; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
struct TYPE_12__ {scalar_t__ callback; int fourcc; TYPE_2__* userdata; } ;
typedef TYPE_3__ VCHIQ_SERVICE_PARAMS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef TYPE_4__* VCHIQ_INSTANCE_T ;
struct TYPE_14__ {int is_open; void* handle; int is_vchi; TYPE_3__ params; } ;
typedef TYPE_5__ VCHIQ_CREATE_SERVICE_T ;
struct TYPE_13__ {int used_services; int mutex; int fd; TYPE_2__* services; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char*,void*,int,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_6(VCHIQ_INSTANCE_T VAR_6,
   const VCHIQ_SERVICE_PARAMS_T *VAR_7,
   VCHI_CALLBACK_T VAR_8,
   int VAR_9,
   VCHIQ_SERVICE_HANDLE_T *VAR_10)
{
   VCHIQ_SERVICE_T *VAR_11 = ((void*)0);
   VCHIQ_STATUS_T VAR_12 = VAR_4;
   int VAR_13;

   if (!FUNC_2(VAR_6))
      return VAR_0;

   FUNC_4(&VAR_6->mutex);


   if (VAR_9)
   {

      for (VAR_13 = 0; VAR_13 < VAR_6->used_services; VAR_13++)
      {
         if (VAR_6->services[VAR_13].lib_handle == VAR_3)
         {
            VAR_11 = &VAR_6->services[VAR_13];
            break;
         }
      }
   }
   else
   {
      for (VAR_13 = (VAR_6->used_services - 1); VAR_13 >= 0; VAR_13--)
      {
         VCHIQ_SERVICE_T *VAR_14 = &VAR_6->services[VAR_13];
         if (VAR_14->lib_handle == VAR_3)
         {
            VAR_11 = VAR_14;
         }
         else if (
            (VAR_14->base.fourcc == VAR_7->fourcc) &&
            ((VAR_14->base.callback != VAR_7->callback) ||
            (VAR_14->vchi_callback != VAR_8)))
         {

            FUNC_3("service %x already using fourcc 0x%x",
               VAR_14->lib_handle, VAR_7->fourcc);
            VAR_11 = ((void*)0);
            VAR_12 = VAR_0;
            break;
         }
      }
   }

   if (!VAR_11 && (VAR_12 == VAR_4))
   {
      if (VAR_6->used_services < VAR_2)
         VAR_11 = &VAR_6->services[VAR_6->used_services++];
      else
         VAR_12 = VAR_0;
   }

   if (VAR_11)
   {
      if (!VAR_5)
         VAR_5 = VAR_2;
      VAR_11->lib_handle = VAR_5 | (VAR_11 - VAR_6->services);
      VAR_5 += VAR_2;
   }

   FUNC_5(&VAR_6->mutex);

   if (VAR_11)
   {
      VCHIQ_CREATE_SERVICE_T VAR_15;
      int VAR_16;

      VAR_11->base.fourcc = VAR_7->fourcc;
      VAR_11->base.callback = VAR_7->callback;
      VAR_11->vchi_callback = VAR_8;
      VAR_11->base.userdata = VAR_7->userdata;
      VAR_11->fd = VAR_6->fd;
      VAR_11->peek_size = -1;
      VAR_11->peek_buf = ((void*)0);
      VAR_11->is_client = VAR_9;

      VAR_15.params = *VAR_7;
      VAR_15.params.userdata = VAR_11;
      VAR_15.is_open = VAR_9;
      VAR_15.is_vchi = (VAR_7->callback == ((void*)0));
      VAR_15.handle = VAR_3;
      FUNC_0(VAR_16, FUNC_1(VAR_6->fd, VAR_1, &VAR_15));
      if (VAR_16 == 0)
         VAR_11->handle = VAR_15.handle;
      else
         VAR_12 = VAR_0;
   }

   if (VAR_12 == VAR_4)
   {
      *VAR_10 = VAR_11->lib_handle;
      FUNC_3("service handle %x lib_handle %x using fourcc 0x%x",
         VAR_11->handle, VAR_11->lib_handle, VAR_7->fourcc);
   }
   else
   {
      FUNC_4(&VAR_6->mutex);

      if (VAR_11)
         VAR_11->lib_handle = VAR_3;

      FUNC_5(&VAR_6->mutex);

      *VAR_10 = VAR_3;
   }

   return VAR_12;
}
