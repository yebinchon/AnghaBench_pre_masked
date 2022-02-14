
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_9__ {TYPE_2__** tracks; scalar_t__ tracks_num; } ;
typedef TYPE_3__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {TYPE_1__* format; } ;
struct TYPE_7__ {int codec; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_3,
   int VAR_4, int *VAR_5, uint32_t *VAR_6)
{
   int32_t VAR_7;

   if(VAR_4 >= (int)VAR_3->tracks_num)
      return *VAR_5 ? VAR_2 : VAR_0;

   switch(VAR_3->tracks[VAR_4]->format->codec)
   {
   case 128:
      if(*VAR_5 < 1) return VAR_1;
      FUNC_1(VAR_3); *VAR_5 -= 1;
      break;
   case 129:
      if(*VAR_5 < 1) return VAR_1;
      *VAR_5 -= 1;
      if(FUNC_1(VAR_3)!=1) return VAR_0;
      break;
   case 130:
      if(*VAR_5 < 4) return VAR_1;
      *VAR_5 -= 1;
      if(FUNC_1(VAR_3)!=1) return VAR_0;
      VAR_7 = FUNC_0(VAR_3);
      VAR_7 <<= 8; VAR_7 >>= 8;
      *VAR_6 += VAR_7;
      *VAR_5 -= 3;
      break;
   default:
      break;
   }

   return *VAR_5 ? VAR_2 : VAR_0;
}
