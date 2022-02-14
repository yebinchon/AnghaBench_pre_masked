
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* format; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_13__ {scalar_t__ es_type; TYPE_2__* type; int codec; } ;
typedef TYPE_4__ VC_CONTAINER_ES_FORMAT_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_14__ {scalar_t__ es_type; int (* param_handler ) (int *,TYPE_3__*,int const*) ;int codec; int value; int name; } ;
struct TYPE_10__ {int channels; int sample_rate; } ;
struct TYPE_11__ {TYPE_1__ audio; } ;
typedef TYPE_5__ PARAMETER_T ;
typedef TYPE_5__ MIME_TYPE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (int *,TYPE_3__*,int const*) ;
 int FUNC_1 (int const*,TYPE_5__*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3(VC_CONTAINER_T *VAR_6,
      VC_CONTAINER_TRACK_T *VAR_7,
      const VC_CONTAINERS_LIST_T *VAR_8)
{
   VC_CONTAINER_ES_FORMAT_T *VAR_9 = VAR_7->format;
   VC_CONTAINER_STATUS_T VAR_10 = VAR_4;
   PARAMETER_T VAR_11;
   MIME_TYPE_DATA_T VAR_12;


   VAR_11.name = VAR_0;
   if (!FUNC_1(VAR_8, &VAR_11))
      return VAR_1;






   VAR_12.name = VAR_11.value;
   if (!FUNC_1(&VAR_5, &VAR_12))
      return VAR_2;

   VAR_9->codec = VAR_12.codec;
   VAR_9->es_type = VAR_12.es_type;


   if (VAR_12.es_type == VAR_3)
      VAR_9->type->audio.channels = 1;


   VAR_10 = VAR_12.param_handler(VAR_6, VAR_7, VAR_8);


   if (VAR_12.es_type == VAR_3 && !VAR_9->type->audio.sample_rate)
      return VAR_1;

   return VAR_10;
}
