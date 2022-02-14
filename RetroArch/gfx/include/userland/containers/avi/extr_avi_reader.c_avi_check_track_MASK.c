
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {scalar_t__ tracks_num; TYPE_2__** tracks; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_7__ {TYPE_1__* format; } ;
struct TYPE_6__ {scalar_t__ es_type; } ;


 scalar_t__ FUNC_0 (char,char) ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
   VC_CONTAINER_STATUS_T VAR_7 = VAR_3;

   if (VAR_6 < VAR_4->tracks_num)
   {
      if (VAR_5 == FUNC_0('w','b') && VAR_4->tracks[VAR_6]->format->es_type != VAR_1)
      {
         FUNC_1(VAR_4, "suspicious track type ('wb'), track %d is not an audio track", VAR_6);
         VAR_7 = VAR_0;
      }
      if (VAR_5 == FUNC_0('d','b') && VAR_4->tracks[VAR_6]->format->es_type != VAR_2)
      {
         FUNC_1(VAR_4, "suspicious track type ('db'), track %d is not a video track", VAR_6);
         VAR_7 = VAR_0;
      }
      if (VAR_5 == FUNC_0('d','c') && VAR_4->tracks[VAR_6]->format->es_type != VAR_2)
      {
         FUNC_1(VAR_4, "suspicious track type ('dc'), track %d is not a video track", VAR_6);
         VAR_7 = VAR_0;
      }
      if (VAR_5 == FUNC_0('d','d') && VAR_4->tracks[VAR_6]->format->es_type != VAR_2)
      {
         FUNC_1(VAR_4, "suspicious track type ('dd'), track %d is not a video track", VAR_6);
         VAR_7 = VAR_0;
      }
   }
   else
   {
      FUNC_1(VAR_4, "invalid track number %d (no more than %d tracks expected)",
         VAR_6, VAR_4->tracks_num);
      VAR_7 = VAR_0;
   }

   return VAR_7;
}
