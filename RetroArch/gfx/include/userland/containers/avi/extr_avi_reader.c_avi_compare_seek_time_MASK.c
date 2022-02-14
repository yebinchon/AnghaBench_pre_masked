
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int64_t VAR_1, int64_t VAR_2,
   int VAR_3, VC_CONTAINER_SEEK_FLAGS_T VAR_4)
{
   if (VAR_1 == VAR_2 && VAR_3 && !(VAR_4 & VAR_0))
      return 0;

   if (VAR_1 > VAR_2 && VAR_3 && (VAR_4 & VAR_0))
      return 0;

   if (VAR_1 > VAR_2 && !(VAR_4 & VAR_0))
      return 1;

   return -1;
}
