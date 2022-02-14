
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
typedef int dummy ;
struct TYPE_6__ {TYPE_1__* format; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;
struct TYPE_5__ {int extradata_size; int codec; int extradata; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,int) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_7,
   VC_CONTAINER_TRACK_T *VAR_8)
{
   VC_CONTAINER_STATUS_T VAR_9;
   VC_CONTAINER_FOURCC_T VAR_10;
   uint8_t VAR_11[12];
   uint32_t VAR_12;

   if(FUNC_1(VAR_7, VAR_11, sizeof(VAR_11)) != sizeof(VAR_11)) return VAR_4;

   VAR_12 = FUNC_0(VAR_11);
   if(VAR_12 < 12 || VAR_12 > 1024) return VAR_5;

   if(VAR_11[4] != 'V' || VAR_11[5] != 'I' || VAR_11[6] != 'D' || VAR_11[7] != 'O' ||
      VAR_11[8] != 'R' || VAR_11[9] != 'V' || VAR_11[11] != '0')
      return VAR_5;

   switch(VAR_11[10]) {
   case '4': VAR_10 = VAR_3; break;
   case '3': VAR_10 = VAR_2; break;
   case '2': VAR_10 = VAR_1; break;
   case '1': VAR_10 = VAR_0; break;
   default: return VAR_5;
   }

   if (!VAR_8)
      return VAR_6;

   VAR_9 = FUNC_4(VAR_7, VAR_8, VAR_12);
   if(VAR_9 != VAR_6) return VAR_9;

   if(FUNC_2(VAR_7, VAR_8->format->extradata, VAR_12) != VAR_12) return VAR_4;
   VAR_8->format->extradata_size = VAR_12;

   VAR_8->format->codec = VAR_10;
   return FUNC_3(VAR_7);
}
