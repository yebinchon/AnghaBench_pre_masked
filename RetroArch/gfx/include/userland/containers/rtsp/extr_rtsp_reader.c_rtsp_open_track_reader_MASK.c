
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int reader; int reader_uri; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int *,int *,int *) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5( VC_CONTAINER_T *VAR_2,
      VC_CONTAINER_TRACK_MODULE_T *VAR_3 )
{
   VC_CONTAINER_STATUS_T VAR_4 = VAR_1;
   uint32_t VAR_5;
   char *VAR_6;

   VAR_5 = FUNC_4(VAR_3->reader_uri, ((void*)0), 0) + 1;
   VAR_6 = (char *)FUNC_2(VAR_5);
   if (!VAR_6)
   {
      FUNC_0(VAR_2, "RTSP: Failed to build RTP URI");
      return VAR_0;
   }
   FUNC_4(VAR_3->reader_uri, VAR_6, VAR_5);

   VAR_3->reader = FUNC_3(VAR_6, &VAR_4, ((void*)0), ((void*)0));
   FUNC_1(VAR_6);

   return VAR_4;
}
