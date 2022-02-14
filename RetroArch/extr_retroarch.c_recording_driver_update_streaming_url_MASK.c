
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int streaming_mode; int video_stream_port; } ;
struct TYPE_7__ {int path_stream_url; } ;
struct TYPE_6__ {int twitch_stream_key; int youtube_stream_key; } ;
struct TYPE_9__ {TYPE_3__ uints; TYPE_2__ paths; TYPE_1__ arrays; } ;
typedef TYPE_4__ settings_t ;






 TYPE_4__* VAR_0 ;
 int FUNC_0 (int ,int,char*,char const*,int) ;
 int FUNC_1 (int) ;

void FUNC_2(void)
{
   settings_t *VAR_1 = VAR_0;
   const char* VAR_2 = "rtmp://a.rtmp.youtube.com/live2/";
   const char* VAR_3 = "rtmp://live.twitch.tv/app/";

   if (!VAR_1)
      return;

   switch (VAR_1->uints.streaming_mode)
   {
      case 129:
         if (!FUNC_1(VAR_1->arrays.twitch_stream_key))
            FUNC_0(VAR_1->paths.path_stream_url,
                  sizeof(VAR_1->paths.path_stream_url),
                  "%s%s", VAR_3, VAR_1->arrays.twitch_stream_key);
         break;
      case 128:
         if (!FUNC_1(VAR_1->arrays.youtube_stream_key))
            FUNC_0(VAR_1->paths.path_stream_url,
                  sizeof(VAR_1->paths.path_stream_url),
                  "%s%s", VAR_2, VAR_1->arrays.youtube_stream_key);
         break;
      case 130:

         FUNC_0(VAR_1->paths.path_stream_url, sizeof(VAR_1->paths.path_stream_url),
            "udp://%s:%u", "127.0.0.1", VAR_1->uints.video_stream_port);
         break;
      case 131:
      default:

         break;
   }
}
