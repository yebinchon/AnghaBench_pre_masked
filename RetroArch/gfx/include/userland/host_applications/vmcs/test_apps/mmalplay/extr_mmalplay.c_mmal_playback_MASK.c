
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int render_layer; int output_uri; } ;
struct TYPE_8__ {int status; int name; int lock; int * ctx; int uri; TYPE_1__ options; } ;
struct TYPE_7__ {int disable_playback; int render_layer; int output_uri; } ;
typedef int MMAL_STATUS_T ;
typedef int MMALPLAY_T ;
typedef TYPE_2__ MMALPLAY_OPTIONS_T ;
typedef TYPE_3__ FILE_PLAY_INFO_T ;


 int FUNC_0 (char*,int ,int ) ;
 int * FUNC_1 (int ,TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void *FUNC_6(void *VAR_2)
{
   FILE_PLAY_INFO_T *VAR_3 = VAR_2;
   MMALPLAY_OPTIONS_T VAR_4;
   MMAL_STATUS_T VAR_5;
   MMALPLAY_T *VAR_6;


   VAR_4 = VAR_0;
   VAR_4.output_uri = VAR_3->options.output_uri;
   VAR_4.render_layer = VAR_3->options.render_layer;

   FUNC_4(&VAR_3->lock);
   VAR_6 = FUNC_1(VAR_3->uri, &VAR_4, &VAR_5);
   VAR_3->ctx = VAR_6;
   FUNC_5(&VAR_3->lock);
   if (!VAR_6)
      goto end;

   if (!VAR_4.disable_playback)
      VAR_5 = FUNC_3(VAR_6);

   if (VAR_1)
      goto end;

   FUNC_4(&VAR_3->lock);
   if (VAR_6)
   {


      FUNC_2(VAR_6);
   }
   VAR_3->ctx = 0;
   FUNC_5(&VAR_3->lock);

 end:
   FUNC_0("Thread %s terminating, result %d", VAR_3->name, VAR_5);
   VAR_3->status = VAR_5;
   return ((void*)0);
}
