
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nbio_image_handle {size_t size; unsigned int frame_duration; int is_blocking; int is_finished; int type; void* handle; int * cb; int status; } ;
struct TYPE_6__ {float video_refresh_rate; } ;
struct TYPE_7__ {TYPE_1__ floats; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {int is_finished; int handle; scalar_t__ data; } ;
typedef TYPE_3__ nbio_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,void*,size_t) ;
 int FUNC_3 (void*,int ) ;
 void* FUNC_4 (int ,size_t*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, size_t VAR_3)
{
   void *VAR_4 = ((void*)0);
   nbio_handle_t *VAR_5 = (nbio_handle_t*)VAR_2;
   struct nbio_image_handle *VAR_6 = VAR_5 ? (struct nbio_image_handle*)VAR_5->data : ((void*)0);
   void *VAR_7 = VAR_6 ? FUNC_1(VAR_6->type) : ((void*)0);
   settings_t *VAR_8 = FUNC_0();
   float VAR_9 = 0.0f;

   if (!VAR_7)
      return -1;

   VAR_6->status = VAR_0;
   VAR_6->handle = VAR_7;
   VAR_6->cb = &VAR_1;

   VAR_4 = FUNC_4(VAR_5->handle, &VAR_3);

   FUNC_2(VAR_6->handle, VAR_6->type, VAR_4, VAR_3);


   VAR_6->size = VAR_3;


   if (VAR_8)
      VAR_9 = VAR_8->floats.video_refresh_rate;

   if (VAR_9 <= 0.0f)
      VAR_9 = 60.0f;
   VAR_6->frame_duration = (unsigned)((1.0 / VAR_9) * 1000000.0f);

   if (!FUNC_3(VAR_6->handle, VAR_6->type))
   {
      FUNC_5(VAR_5);
      return -1;
   }

   VAR_6->is_blocking = 0;
   VAR_6->is_finished = 0;
   VAR_5->is_finished = 1;

   return 0;
}
