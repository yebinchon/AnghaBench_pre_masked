
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_19__ {int seeking; } ;
struct TYPE_23__ {int is_still_image; TYPE_3__ options; TYPE_2__* reader_audio; TYPE_2__* reader_video; } ;
struct TYPE_22__ {unsigned int output_num; int name; int control; TYPE_2__** output; } ;
struct TYPE_15__ {unsigned int size; int id; } ;
struct TYPE_17__ {int member_1; int member_0; } ;
struct TYPE_21__ {int offset; TYPE_10__ hdr; int member_2; int member_1; TYPE_1__ member_0; } ;
struct TYPE_20__ {TYPE_10__ hdr; int str; } ;
struct TYPE_18__ {TYPE_13__* format; } ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ encoding; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PARAMETER_STRING_T ;
typedef TYPE_5__ MMAL_PARAMETER_SEEK_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMALPLAY_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_13__*,int ) ;
 TYPE_4__* FUNC_6 (unsigned int) ;
 int FUNC_7 (TYPE_4__*,int ,unsigned int) ;
 scalar_t__ FUNC_8 (int ,TYPE_10__*) ;
 size_t FUNC_9 (char const*) ;
 int FUNC_10 (int ,char const*,size_t,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_11(MMALPLAY_T *VAR_14,
   MMAL_COMPONENT_T *VAR_15, const char *VAR_16)
{
   MMAL_PARAMETER_SEEK_T VAR_17 = {{VAR_11, sizeof(MMAL_PARAMETER_SEEK_T)},0,0};
   MMAL_PARAMETER_STRING_T *VAR_18 = 0;
   unsigned int VAR_19, VAR_20, VAR_21;
   MMAL_STATUS_T VAR_22 = VAR_0;
   uint32_t VAR_23;
   size_t VAR_24;

   if(!VAR_15->output_num)
   {
      FUNC_2("%s doesn't have output ports", VAR_15->name);
      goto error;
   }


   VAR_24 = FUNC_9(VAR_16);
   VAR_19 = sizeof(MMAL_PARAMETER_STRING_T) + VAR_24;
   VAR_18 = FUNC_6(VAR_19);
   if(!VAR_18)
   {
      FUNC_2("out of memory");
      VAR_22 = VAR_7;
      goto error;
   }
   FUNC_7(VAR_18, 0, VAR_19);
   VAR_18->hdr.id = VAR_12;
   VAR_18->hdr.size = VAR_19;
   FUNC_10(VAR_18->str, VAR_16, VAR_24 + 1, 0);
   VAR_22 = FUNC_8(VAR_15->control, &VAR_18->hdr);
   if(VAR_22 != VAR_13 && VAR_22 != VAR_8)
   {
      FUNC_2("%s could not open file %s", VAR_15->name, VAR_16);
      goto error;
   }
   VAR_22 = VAR_13;


   for(VAR_21 = 0; VAR_21 < VAR_15->output_num; VAR_21++)
      if(VAR_15->output[VAR_21]->format->type == VAR_10) break;
   if(VAR_21 != VAR_15->output_num)
   {
      VAR_14->reader_video = VAR_15->output[VAR_21];

      VAR_23 = VAR_14->reader_video->format->encoding;
      if (VAR_23 == VAR_3 ||
          VAR_23 == VAR_2 ||
          VAR_23 == VAR_4 ||
          VAR_23 == VAR_5 ||
          VAR_23 == VAR_6 ||
          VAR_23 == VAR_1)
         VAR_14->is_still_image = 1;
   }


   for(VAR_20 = 0; VAR_20 < VAR_15->output_num; VAR_20++)
      if(VAR_15->output[VAR_20]->format->type == VAR_9) break;
   if(VAR_20 != VAR_15->output_num)
      VAR_14->reader_audio = VAR_15->output[VAR_20];

   if(VAR_21 == VAR_15->output_num &&
      VAR_20 == VAR_15->output_num)
   {
      FUNC_2("no track to decode");
      VAR_22 = VAR_0;
      goto error;
   }

   FUNC_3("----Reader input port format-----");
   if(VAR_21 != VAR_15->output_num)
      FUNC_5(VAR_15->output[VAR_21]->format, 0);
   if(VAR_20 != VAR_15->output_num)
      FUNC_5(VAR_15->output[VAR_20]->format, 0);

   if(VAR_14->options.seeking)
   {
      FUNC_1("seek to %fs", VAR_14->options.seeking);
      VAR_17.offset = VAR_14->options.seeking * FUNC_0(1000000);
      VAR_22 = FUNC_8(VAR_15->control, &VAR_17.hdr);
      if(VAR_22 != VAR_13)
         FUNC_2("failed to seek to %fs", VAR_14->options.seeking);
   }

 error:
   if(VAR_18)
      FUNC_4(VAR_18);
   return VAR_22;
}
