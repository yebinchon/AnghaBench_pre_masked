
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int64_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;


 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_0, int64_t VAR_1 )
{
   uint32_t VAR_2;

   VAR_2 = FUNC_0(VAR_0, VAR_1, "Secret Data Length");
   FUNC_1(VAR_0, VAR_1, VAR_2);

   VAR_2 = FUNC_0(VAR_0, VAR_1, "Protection Type Length");
   FUNC_1(VAR_0, VAR_1, VAR_2);

   VAR_2 = FUNC_0(VAR_0, VAR_1, "Key ID Length");
   FUNC_1(VAR_0, VAR_1, VAR_2);

   VAR_2 = FUNC_0(VAR_0, VAR_1, "License URL Length");
   FUNC_1(VAR_0, VAR_1, VAR_2);

   return FUNC_2(VAR_0);
}
