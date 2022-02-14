
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_17__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_24__ {scalar_t__ opaque; TYPE_1__ display_area; int layer; } ;
struct TYPE_23__ {TYPE_4__** input; int input_num; } ;
struct TYPE_16__ {int size; int id; } ;
struct TYPE_22__ {int set; TYPE_12__ hdr; TYPE_1__ dest_rect; scalar_t__ fullscreen; int layer; } ;
struct TYPE_18__ {int member_1; int member_0; } ;
struct TYPE_21__ {int member_1; TYPE_12__ hdr; TYPE_2__ member_0; } ;
struct TYPE_20__ {TYPE_3__* format; } ;
struct TYPE_19__ {int encoding; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_PARAMETER_BOOLEAN_T ;
typedef TYPE_6__ MMAL_DISPLAYREGION_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMALCAM_BEHAVIOUR_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,TYPE_7__**) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_12__*) ;

__attribute__((used)) static MMAL_COMPONENT_T *FUNC_7(MMALCAM_BEHAVIOUR_T *VAR_10, MMAL_STATUS_T *VAR_11)
{
   MMAL_COMPONENT_T *VAR_12 = 0;
   MMAL_PORT_T *VAR_13 = ((void*)0);

   *VAR_11 = FUNC_3(VAR_0, &VAR_12);
   if(*VAR_11 != VAR_9)
   {
      FUNC_0("couldn't create video render");
      goto error;
   }
   if(!VAR_12->input_num)
   {
      FUNC_0("video render doesn't have input ports");
      *VAR_11 = VAR_4;
      goto error;
   }

   VAR_13 = VAR_12->input[0];


   MMAL_DISPLAYREGION_T VAR_14;
   VAR_14.hdr.id = VAR_7;
   VAR_14.hdr.size = sizeof(MMAL_DISPLAYREGION_T);
   VAR_14.set = VAR_3;
   VAR_14.layer = VAR_10->layer;
   if (VAR_10->display_area.width && VAR_10->display_area.height)
   {
      VAR_14.set |= VAR_1 | VAR_2;
      VAR_14.fullscreen = 0;
      VAR_14.dest_rect = VAR_10->display_area;
   }
   *VAR_11 = FUNC_6( VAR_13, &VAR_14.hdr );
   if (*VAR_11 != VAR_9 && *VAR_11 != VAR_6)
   {
      FUNC_0("could not set video render display properties (%u)", *VAR_11);
      goto error;
   }

   if (FUNC_2())
   {
      MMAL_PARAMETER_BOOLEAN_T VAR_15 =
         {{VAR_8, sizeof(MMAL_PARAMETER_BOOLEAN_T)}, 1};
      *VAR_11 = FUNC_6(VAR_13, &VAR_15.hdr);
      if (*VAR_11 != VAR_9 && *VAR_11 != VAR_6)
      {
         FUNC_0("failed to set zero copy on render input");
         goto error;
      }
      FUNC_1("enabled zero copy on render");
   }

   if (VAR_10->opaque)
   {
      VAR_13->format->encoding = VAR_5;
   }


   *VAR_11 = FUNC_5(VAR_12);
   if(*VAR_11)
   {
      FUNC_0("video render component couldn't be enabled (%u)", *VAR_11);
      goto error;
   }

   return VAR_12;

 error:
   if(VAR_12) FUNC_4(VAR_12);
   return 0;
}
