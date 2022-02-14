
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_7__ {unsigned int width; unsigned int height; } ;
struct TYPE_6__ {unsigned int width; unsigned int height; } ;
struct TYPE_10__ {int tunnelling; int stepping; float seeking; int disable_playback; int disable_video_decode; int disable_video; int disable_audio; int enable_scheduling; unsigned int output_num; int copy_input; int copy_output; char const* component_video_render; char const* component_video_decoder; char const* component_splitter; char const* component_video_converter; char const* component_video_scheduler; char const* component_audio_render; char const* component_audio_decoder; char const* component_container_reader; char const* audio_destination; unsigned int video_destination; int window; int audio_passthrough; TYPE_2__ render_rect; void* render_format; TYPE_1__ output_rect; void* output_format; } ;
struct TYPE_8__ {char const* output_uri; } ;
struct TYPE_9__ {char const* uri; TYPE_3__ options; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*,void**,unsigned int*,unsigned int*) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,char*) ;
 unsigned int VAR_5 ;
 int FUNC_4 (char const*,char*,...) ;
 int VAR_6 ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*,char) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(int VAR_9, const char **VAR_10)
{
   unsigned int VAR_11 = 0, VAR_12 = 0;
   uint32_t VAR_13;
   float VAR_14 = 0;
   int VAR_15, VAR_16;


   for(VAR_15 = 1; VAR_15 < VAR_9; VAR_15++)
   {
      if(!VAR_10[VAR_15]) continue;

      if(VAR_10[VAR_15][0] != '-')
      {

         if (VAR_4 >= VAR_0)
         {
            FUNC_1(VAR_6, "Too many URIs!\n");
            goto usage;
         }
         VAR_3[VAR_4++].uri = VAR_10[VAR_15];
         continue;
      }


      switch(VAR_10[VAR_15][1])
      {
      case 'V':
         FUNC_3("Version: %s\n", VAR_1);
         FUNC_0(0);
      case 'v':
         for (VAR_16 = 1; VAR_10[VAR_15][VAR_16] == 'v'; VAR_16++) VAR_8++;
         break;
      case 'X':
         VAR_7 = 1;
         break;
      case 'd':
         VAR_2.tunnelling = 1;
         break;
      case 's':
         if (!FUNC_5(VAR_10[VAR_15]+1, "step"))
         {
            VAR_2.stepping = 1;
            break;
         }

         else if (!VAR_10[VAR_15][2] && ++VAR_15 < VAR_9 &&
                  FUNC_4(VAR_10[VAR_15], "%f", &VAR_14) == 1)
         {
            VAR_2.seeking = VAR_14;
            break;
         }
         goto usage;
      case 'n':
         switch (VAR_10[VAR_15][2])
         {
            case 'p': VAR_2.disable_playback = 1; break;
            case 'v':
               if(VAR_10[VAR_15][3] == 'd')
                  VAR_2.disable_video_decode = 1;
               else
                  VAR_2.disable_video = 1;
               break;
            case 'a': VAR_2.disable_audio = 1; break;
            default: break;
         }
         break;
      case 'e':
         if (VAR_10[VAR_15][2] != 's')
            goto usage;
         VAR_2.enable_scheduling = 1; break;
         break;
      case 't':

         if (++VAR_15 >= VAR_9 || FUNC_4(VAR_10[VAR_15], "%u", &VAR_5) != 1)
            goto usage;
         break;
      case 'x':

         if (++VAR_15 >= VAR_9 || FUNC_4(VAR_10[VAR_15], "%u", &VAR_11) != 1)
            goto usage;
         VAR_2.output_num = VAR_11;
         break;
      case 'f':
         if (VAR_15 + 1 >= VAR_9 || FUNC_2(VAR_10[++VAR_15], &VAR_13, &VAR_11, &VAR_12))
            goto usage;
         if (VAR_10[VAR_15-1][2] == 0)
         {
            VAR_2.output_format = VAR_13;
            VAR_2.output_rect.width = VAR_11;
            VAR_2.output_rect.height = VAR_12;
         }
         else if (VAR_10[VAR_15-1][2] == 'r')
         {
            VAR_2.render_format = VAR_13;
            VAR_2.render_rect.width = VAR_11;
            VAR_2.render_rect.height = VAR_12;
         }
         else
            goto usage;
         break;
      case 'c':
         if (!VAR_10[VAR_15][2])
         {
            VAR_2.copy_input = 1;
            VAR_2.copy_output = 1;
         }
         else if (VAR_10[VAR_15][2] == 'i')
            VAR_2.copy_input = 1;
         else if (VAR_10[VAR_15][2] == 'o')
            VAR_2.copy_output = 1;
         break;
      case 'm':
         if (VAR_10[VAR_15][2] == 'v')
         {
            if (VAR_10[VAR_15][3] == 'r' && VAR_15 < VAR_9)
               VAR_2.component_video_render = VAR_10[++VAR_15];
            else if (VAR_10[VAR_15][3] == 'd' && VAR_15 < VAR_9)
               VAR_2.component_video_decoder = VAR_10[++VAR_15];
            else if (VAR_10[VAR_15][3] == 's' && VAR_15 < VAR_9)
               VAR_2.component_splitter = VAR_10[++VAR_15];
            else if (VAR_10[VAR_15][3] == 'c' && VAR_15 < VAR_9)
               VAR_2.component_video_converter = VAR_10[++VAR_15];
            else if (VAR_10[VAR_15][3] == 'h' && VAR_15 < VAR_9)
               VAR_2.component_video_scheduler = VAR_10[++VAR_15];
            else
               goto usage;
         }
         else if (VAR_10[VAR_15][2] == 'a')
         {
            if (VAR_10[VAR_15][3] == 'r' && VAR_15 < VAR_9)
               VAR_2.component_audio_render = VAR_10[++VAR_15];
            else if (VAR_10[VAR_15][3] == 'd' && VAR_15 < VAR_9)
               VAR_2.component_audio_decoder = VAR_10[++VAR_15];
            else
               goto usage;
         }
         else if (VAR_10[VAR_15][2] == 'c')
         {
            if (VAR_10[VAR_15][3] == 'r' && VAR_15 < VAR_9)
               VAR_2.component_container_reader = VAR_10[++VAR_15];
            else
               goto usage;
         }
         else
            goto usage;
         break;
      case 'o':
         if (++VAR_15 >= VAR_9 || VAR_4 >= VAR_0)
            goto usage;
         VAR_3[VAR_4].options.output_uri = VAR_10[VAR_15];
         break;

      case 'a':
         if (++VAR_15 >= VAR_9)
            goto usage;
         VAR_2.audio_destination = VAR_10[VAR_15];
         break;

      case 'r':
         if (VAR_15 + 1 >= VAR_9)
            goto usage;
         if (VAR_10[VAR_15][2] == 'a')
            VAR_2.audio_destination = VAR_10[++VAR_15];
         else if (VAR_10[VAR_15][2] == 'v')
         {

            if (FUNC_4(VAR_10[++VAR_15], "%u", &VAR_2.video_destination) != 1)
               goto usage;
         }
         else
            goto usage;
         break;

      case 'w':
         VAR_2.window = 1;
         break;

      case 'p':
         VAR_2.audio_passthrough = 1;
         break;

      case 'h': goto usage;
      default: goto invalid_option;
      }
      continue;
   }


   if(!VAR_4)
   {
     FUNC_1(VAR_6, "missing uri argument\n");
     goto usage;
   }

   return 0;

invalid_option:
   FUNC_1(VAR_6, "invalid command line option (%s)\n", VAR_10[VAR_15]);

usage:
   {
      const char *VAR_17;

      VAR_17 = FUNC_6(VAR_10[0], '\\');
      if (VAR_17)
         VAR_17++;
      if (!VAR_17)
      {
         VAR_17 = FUNC_6(VAR_10[0], '/');
         if (VAR_17)
            VAR_17++;
      }
      if (!VAR_17)
         VAR_17 = VAR_10[0];

      FUNC_1(VAR_6, "usage: %s [options] uri0 uri1 ... uriN\n", VAR_17);
      FUNC_1(VAR_6, "options list:\n");
      FUNC_1(VAR_6, " -h    : help\n");
      FUNC_1(VAR_6, " -V    : print version and exit\n");
      FUNC_1(VAR_6, " -v(vv): increase verbosity\n");
      FUNC_1(VAR_6, " -np   : disable playback phase\n");
      FUNC_1(VAR_6, " -nv   : disable video\n");
      FUNC_1(VAR_6, " -nvd  : disable video decode\n");
      FUNC_1(VAR_6, " -na   : disable audio\n");
      FUNC_1(VAR_6, " -es   : enable scheduling\n");
      FUNC_1(VAR_6, " -t <n>: play URI(s) for <n> seconds then stop\n");
      FUNC_1(VAR_6, " -f <fourcc:widthxheight> : set format used on output of decoder\n");
      FUNC_1(VAR_6, " -fr <fourcc:widthxheight> : set format used for rendering\n");
      FUNC_1(VAR_6, " -c    : do full copy of data transferred to videocore\n");
      FUNC_1(VAR_6, " -ci   : full copy for input buffers to decoder\n");
      FUNC_1(VAR_6, " -co   : full copy for output buffers from decoder\n");
      FUNC_1(VAR_6, " -X    : exit without tearing down the mmal pipeline (for testing)\n");
      FUNC_1(VAR_6, " -x <n>: use <n> video render modules \n");
      FUNC_1(VAR_6, " -d    : use direct port connections (aka tunnelling)\n");
      FUNC_1(VAR_6, " -step : stepping (displays 1 frame at a time)\n");
      FUNC_1(VAR_6, " -s <f>: seek to <f> seconds into the stream\n");
      FUNC_1(VAR_6, " -o <s>: output uri\n");
      FUNC_1(VAR_6, " -mcr <s>:  name of the container reader module to use\n");
      FUNC_1(VAR_6, " -mvr <s>:  name of the video render module to use\n");
      FUNC_1(VAR_6, " -mvd <s>:  name of the video decoder module to use\n");
      FUNC_1(VAR_6, " -mvc <s>:  name of the video converter module to use\n");
      FUNC_1(VAR_6, " -mvh <s>:  name of the video scheduler to use\n");
      FUNC_1(VAR_6, " -mvs <s>:  name of the splitter module to use\n");
      FUNC_1(VAR_6, " -mar <s>:  name of the audio render module to use\n");
      FUNC_1(VAR_6, " -mad <s>:  name of the audio decoder module to use\n");
      FUNC_1(VAR_6, " -ra <s>: set audio destination\n");
      FUNC_1(VAR_6, " -rv <n>: set video destination\n");
      FUNC_1(VAR_6, " -p    : use audio passthrough\n");
      FUNC_1(VAR_6, " -w    : window mode (i.e. not fullscreen)\n");
   }
   return 1;
}
