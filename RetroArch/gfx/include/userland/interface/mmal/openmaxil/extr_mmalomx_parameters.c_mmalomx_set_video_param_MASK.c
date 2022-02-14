
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mmal_param ;
struct TYPE_18__ {TYPE_3__* format; } ;
struct TYPE_17__ {TYPE_9__* mmal; } ;
struct TYPE_12__ {scalar_t__ member_1; scalar_t__ member_0; } ;
struct TYPE_11__ {TYPE_2__ member_0; } ;
struct TYPE_15__ {int member_1; int member_0; } ;
struct TYPE_16__ {int hdr; TYPE_4__* profile; TYPE_1__ member_1; TYPE_5__ member_0; } ;
struct TYPE_14__ {scalar_t__ level; scalar_t__ profile; } ;
struct TYPE_13__ {int encoding; } ;
typedef int OMX_VIDEO_CODINGTYPE ;
typedef int OMX_ERRORTYPE ;
typedef scalar_t__ MMAL_VIDEO_PROFILE_T ;
typedef scalar_t__ MMAL_VIDEO_LEVEL_T ;
typedef TYPE_6__ MMAL_PARAMETER_VIDEO_PROFILE_T ;
typedef TYPE_7__ MMALOMX_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_9__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_5(MMALOMX_PORT_T *VAR_5,
   uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
   MMAL_PARAMETER_VIDEO_PROFILE_T VAR_9 = {{VAR_1, sizeof(VAR_9)},
      {{(MMAL_VIDEO_PROFILE_T)0, (MMAL_VIDEO_LEVEL_T)0}}};
   OMX_VIDEO_CODINGTYPE VAR_10 =
      FUNC_2(VAR_5->mmal->format->encoding);

   if (FUNC_1(VAR_5->mmal, VAR_0,
          VAR_8) != VAR_2)
      return VAR_3;

   VAR_9.profile[0].profile = (MMAL_VIDEO_PROFILE_T)
      FUNC_4(VAR_6, VAR_10);
   VAR_9.profile[0].level = (MMAL_VIDEO_LEVEL_T)
      FUNC_3(VAR_7, VAR_10);
   if (FUNC_0(VAR_5->mmal, &VAR_9.hdr) != VAR_2)
      return VAR_3;

   return VAR_4;
}
