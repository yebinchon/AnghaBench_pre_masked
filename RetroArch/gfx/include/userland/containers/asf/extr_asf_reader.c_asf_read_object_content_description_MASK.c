
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ int64_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 scalar_t__ FUNC_0 (int *,scalar_t__,char*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_4( VC_CONTAINER_T *VAR_1, int64_t VAR_2 )
{
   uint16_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

   VAR_3 = FUNC_0(VAR_1, VAR_2, "Title Length");
   VAR_4 = FUNC_0(VAR_1, VAR_2, "Author Length");
   VAR_5 = FUNC_0(VAR_1, VAR_2, "Copyright Length");
   VAR_6 = FUNC_0(VAR_1, VAR_2, "Description Length");
   VAR_7 = FUNC_0(VAR_1, VAR_2, "Rating Length");

   FUNC_2(VAR_1, VAR_2);

   if(VAR_2 < VAR_3) return VAR_0;
   FUNC_1(VAR_1, VAR_2, VAR_3, "Title");
   if(VAR_2 < VAR_4) return VAR_0;
   FUNC_1(VAR_1, VAR_2, VAR_4, "Author");
   if(VAR_2 < VAR_5) return VAR_0;
   FUNC_1(VAR_1, VAR_2, VAR_5, "Copyright");
   if(VAR_2 < VAR_6) return VAR_0;
   FUNC_1(VAR_1, VAR_2, VAR_6, "Description");
   if(VAR_2 < VAR_7) return VAR_0;
   FUNC_1(VAR_1, VAR_2, VAR_7, "Rating");

   return FUNC_3(VAR_1);
}
