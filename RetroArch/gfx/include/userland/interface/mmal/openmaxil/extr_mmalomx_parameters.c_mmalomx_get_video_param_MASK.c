
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int mmal_param ;
struct TYPE_13__ {int mmal; } ;
struct TYPE_11__ {int member_1; int member_0; } ;
struct TYPE_10__ {TYPE_4__ member_0; } ;
struct TYPE_9__ {int member_1; int member_0; } ;
struct TYPE_12__ {TYPE_1__* profile; int hdr; TYPE_3__ member_1; TYPE_2__ member_0; } ;
struct TYPE_8__ {int level; int profile; } ;
typedef int OMX_ERRORTYPE ;
typedef int MMAL_VIDEO_PROFILE_T ;
typedef int MMAL_VIDEO_LEVEL_T ;
typedef TYPE_5__ MMAL_PARAMETER_VIDEO_PROFILE_T ;
typedef TYPE_6__ MMALOMX_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static OMX_ERRORTYPE FUNC_4(MMALOMX_PORT_T *VAR_4,
   uint32_t *VAR_5, uint32_t *VAR_6, uint32_t *VAR_7)
{
   MMAL_PARAMETER_VIDEO_PROFILE_T VAR_8 = {{VAR_1, sizeof(VAR_8)},
      {{(MMAL_VIDEO_PROFILE_T)0, (MMAL_VIDEO_LEVEL_T)0}}};

   *VAR_5 = *VAR_6 = *VAR_7 = 0;

   FUNC_1(VAR_4->mmal, VAR_0, VAR_7);

   if (FUNC_0(VAR_4->mmal, &VAR_8.hdr) == VAR_2)
   {
      *VAR_5 = FUNC_3(VAR_8.profile[0].profile);
      *VAR_6 = FUNC_2(VAR_8.profile[0].level);
   }

   return VAR_3;
}
