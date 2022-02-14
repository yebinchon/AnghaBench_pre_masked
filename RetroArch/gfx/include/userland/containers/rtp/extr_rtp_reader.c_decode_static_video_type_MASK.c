
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_12__ {scalar_t__ codec; int (* param_handler ) (int const*,TYPE_4__*,int const*) ;int payload_handler; } ;
typedef TYPE_3__ VIDEO_PAYLOAD_TYPE_DATA_T ;
struct TYPE_13__ {TYPE_2__* priv; TYPE_5__* format; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
typedef int const VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_14__ {scalar_t__ codec; int es_type; } ;
typedef TYPE_5__ VC_CONTAINER_ES_FORMAT_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_11__ {TYPE_1__* module; } ;
struct TYPE_10__ {int payload_handler; int timestamp_clock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*) ;
 int VAR_5 ;
 size_t FUNC_1 (TYPE_3__*) ;
 TYPE_3__* VAR_6 ;
 int FUNC_2 (int const*,TYPE_4__*,int const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4(VC_CONTAINER_T *VAR_7,
      VC_CONTAINER_TRACK_T *VAR_8,
      const VC_CONTAINERS_LIST_T *VAR_9,
      uint32_t VAR_10)
{
   VC_CONTAINER_ES_FORMAT_T *VAR_11 = VAR_8->format;
   VIDEO_PAYLOAD_TYPE_DATA_T *VAR_12 = &VAR_6[VAR_10 - VAR_0];

   FUNC_0(VAR_7);
   FUNC_0(VAR_9);

   FUNC_3(VAR_10 >= VAR_0);
   FUNC_3(VAR_10 < VAR_0 + FUNC_1(VAR_6));

   if (VAR_12->codec == VAR_2)
      return VAR_3;

   VAR_11->es_type = VAR_4;
   VAR_11->codec = VAR_12->codec;
   VAR_8->priv->module->timestamp_clock = VAR_1;
   VAR_8->priv->module->payload_handler = VAR_12->payload_handler;

   if (VAR_12->param_handler)
      VAR_12->param_handler(VAR_7, VAR_8, VAR_9);

   return VAR_5;
}
