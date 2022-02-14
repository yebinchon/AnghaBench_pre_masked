
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tracks_num; TYPE_4__** tracks; } ;
typedef TYPE_1__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_11__ {scalar_t__ es_type; int extradata_size; } ;
typedef TYPE_2__ VC_CONTAINER_ES_FORMAT_T ;
struct TYPE_12__ {int format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_4__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_5,
   VC_CONTAINER_ES_FORMAT_T *VAR_6 )
{
   VC_CONTAINER_STATUS_T VAR_7;


   if (VAR_5->tracks_num)
      return VAR_2;
   if (VAR_6->es_type != VAR_3)
      return VAR_1;


   VAR_5->tracks[0] = FUNC_0(VAR_5, 0);
   if (!VAR_5->tracks[0])
      return VAR_0;

   VAR_7 = FUNC_2(VAR_5,
      VAR_5->tracks[0], VAR_6->extradata_size);
   if(VAR_7 != VAR_4)
      return VAR_7;

   FUNC_1(VAR_5->tracks[0]->format, VAR_6,
      VAR_6->extradata_size);
   VAR_5->tracks_num++;
   return VAR_4;
}
