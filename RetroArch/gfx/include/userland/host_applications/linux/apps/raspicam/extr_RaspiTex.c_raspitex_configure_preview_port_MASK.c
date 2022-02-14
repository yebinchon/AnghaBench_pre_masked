
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct MMAL_PORT_USERDATA_T {int dummy; } ;
struct TYPE_12__ {struct MMAL_PORT_USERDATA_T* userdata; struct TYPE_12__* buffer_size; int buffer_num; struct TYPE_12__* buffer_size_recommended; int buffer_num_recommended; } ;
struct TYPE_11__ {int preview_queue; int preview_pool; TYPE_2__* preview_port; } ;
typedef TYPE_1__ RASPITEX_STATE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,TYPE_2__*) ;

int FUNC_7(RASPITEX_STATE *VAR_6,
                                    MMAL_PORT_T *VAR_7)
{
   MMAL_STATUS_T VAR_8;
   FUNC_6("%s port %p", VAR_4, VAR_7);







   VAR_8 = FUNC_2(VAR_7,
            VAR_1, VAR_3);
   if (VAR_8 != VAR_2)
   {
      FUNC_5("Failed to enable zero copy on camera preview port");
      goto end;
   }

   VAR_8 = FUNC_1(VAR_7);
   if (VAR_8 != VAR_2)
   {
      FUNC_5("camera viewfinder format couldn't be set");
      goto end;
   }




   VAR_6->preview_port = VAR_7;
   VAR_7->buffer_num = VAR_7->buffer_num_recommended;
   VAR_7->buffer_size = VAR_7->buffer_size_recommended;

   FUNC_6("Creating buffer pool for GL renderer num %d size %d",
                  VAR_7->buffer_num, VAR_7->buffer_size);


   VAR_6->preview_pool = FUNC_3(VAR_7,
                         VAR_7->buffer_num, VAR_7->buffer_size);

   if (! VAR_6->preview_pool)
   {
      FUNC_5("Error allocating pool");
      VAR_8 = VAR_0;
      goto end;
   }


   VAR_6->preview_queue = FUNC_4();
   if (! VAR_6->preview_queue)
   {
      FUNC_5("Error allocating queue");
      VAR_8 = VAR_0;
      goto end;
   }


   VAR_7->userdata = (struct MMAL_PORT_USERDATA_T*) VAR_6;
   VAR_8 = FUNC_0(VAR_7, VAR_5);
   if (VAR_8 != VAR_2)
   {
      FUNC_5("Failed to camera preview port");
      goto end;
   }
end:
   return (VAR_8 == VAR_2 ? 0 : -1);
}
