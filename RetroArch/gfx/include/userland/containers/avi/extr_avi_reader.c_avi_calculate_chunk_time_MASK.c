
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int index; int offs; } ;
struct TYPE_6__ {int sample_size; TYPE_1__ chunk; scalar_t__ time_start; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_MODULE_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int64_t FUNC_1(VC_CONTAINER_TRACK_MODULE_T *VAR_0)
{
   if (VAR_0->sample_size == 0)
      return VAR_0->time_start + FUNC_0(VAR_0, VAR_0->chunk.index);
   else
      return VAR_0->time_start + FUNC_0(VAR_0,
         ((VAR_0->chunk.offs + (VAR_0->sample_size >> 1)) / VAR_0->sample_size));
}
