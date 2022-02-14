
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int64_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_1, int64_t VAR_2 )
{
   uint16_t VAR_3, VAR_4;

   VAR_4 = FUNC_0(VAR_1, VAR_2, "Bitrate Records Count");


   if(VAR_2 < VAR_4 * 6) return VAR_0;
   for(VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   {
      FUNC_1(VAR_1, VAR_2, "Flags");
      FUNC_2(VAR_1, VAR_2, "Average Bitrate");
   }

   return FUNC_3(VAR_1);
}
