
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef int VC_CONTAINER_TRACK_T ;
struct TYPE_4__ {int tracks_num; int ** tracks; } ;
typedef TYPE_1__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_CONTROL_T ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2( VC_CONTAINER_T *VAR_4,
   VC_CONTAINER_CONTROL_T VAR_5, va_list VAR_6 )
{
   VC_CONTAINER_TRACK_T *VAR_7;
   FUNC_0(VAR_6);

   switch(VAR_5)
   {
   case 129:
      if(VAR_4->tracks_num >= 2) return VAR_1;


      VAR_4->tracks[VAR_4->tracks_num] = VAR_7 = FUNC_1(VAR_4, 0);
      if(!VAR_7) return VAR_0;

      VAR_4->tracks_num++;
      return VAR_3;

   case 128:
      return VAR_3;

   default: return VAR_2;
   }
}
