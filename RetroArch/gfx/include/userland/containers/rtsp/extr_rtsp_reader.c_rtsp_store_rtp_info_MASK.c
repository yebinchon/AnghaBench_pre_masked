
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_5__ {int reader; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_6__ {char* value; int name; } ;
typedef TYPE_2__ RTSP_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char**,char**) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(VC_CONTAINERS_LIST_T *VAR_3,
      VC_CONTAINER_TRACK_MODULE_T *VAR_4 )
{
   RTSP_HEADER_T VAR_5;
   char *VAR_6;

   VAR_5.name = VAR_0;
   if (!FUNC_4(VAR_3, &VAR_5))
      return;

   VAR_6 = VAR_5.value;
   while (VAR_6 && *VAR_6)
   {
      char *VAR_7;
      char *VAR_8;

      if (!FUNC_0(&VAR_6, &VAR_7, &VAR_8))
         continue;

      if (FUNC_2(VAR_7, "rtptime") == 0)
      {
         unsigned int VAR_9 = 0;


         if (FUNC_1(VAR_8, "%u", &VAR_9) == 1)
            (void)FUNC_3(VAR_4->reader, VAR_2, VAR_9);
      }
      else if (FUNC_2(VAR_7, "seq") == 0)
      {
         unsigned short int VAR_10 = 0;


         if (FUNC_1(VAR_8, "%hu", &VAR_10) == 1)
            (void)FUNC_3(VAR_4->reader, VAR_1, (uint32_t)VAR_10);
      }
   }
}
