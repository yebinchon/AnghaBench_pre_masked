
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_5(VC_CONTAINER_T *VAR_0, int *VAR_1,
                                                 int *VAR_2, int *VAR_3, uint32_t *VAR_4)
{
   int VAR_5, VAR_6, VAR_7;
   uint32_t VAR_8;

   VAR_5 = FUNC_1(VAR_0, "PreviousTagSize");
   VAR_6 = FUNC_2(VAR_0, "TagType");
   VAR_7 = FUNC_0(VAR_0, "DataSize");
   VAR_8 = FUNC_0(VAR_0, "Timestamp");
   VAR_8 |= (FUNC_2(VAR_0, "TimestampExtended") << 24);
   FUNC_3(VAR_0, "StreamID");

   if(VAR_1) *VAR_1 = VAR_5 + 4;
   if(VAR_2) *VAR_2 = VAR_6;
   if(VAR_3) *VAR_3 = VAR_7;
   if(VAR_4) *VAR_4 = VAR_8;

   return FUNC_4(VAR_0);
}
