
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_13__ {TYPE_1__* format; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
struct TYPE_14__ {TYPE_3__** tracks; TYPE_2__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_15__ {size_t current_track; } ;
typedef TYPE_5__ VC_CONTAINER_MODULE_T ;
struct TYPE_12__ {TYPE_5__* module; } ;
struct TYPE_11__ {scalar_t__ codec; int extradata; int extradata_size; int codec_variant; } ;


 int FUNC_0 (TYPE_4__*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char,char,char,char) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*,unsigned int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_3, int64_t VAR_4 )
{
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_3->priv->module;
   VC_CONTAINER_TRACK_T *VAR_6 = VAR_3->tracks[VAR_5->current_track];
   VC_CONTAINER_STATUS_T VAR_7;

   if(VAR_6->format->codec != VAR_0 || VAR_4 <= 0)
      return VAR_1;

   VAR_6->format->codec_variant = FUNC_2('a','v','c','C');

   VAR_7 = FUNC_3(VAR_3, VAR_6, (unsigned int)VAR_4);
   if(VAR_7 != VAR_2) return VAR_7;
   VAR_6->format->extradata_size = FUNC_0(VAR_3, VAR_6->format->extradata, VAR_4);

   return FUNC_1(VAR_3);
}
