
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int VC_URI_PARTS_T ;


 int FUNC_0 (int const*,char*,size_t) ;
 size_t FUNC_1 (int const*) ;

uint32_t FUNC_2( const VC_URI_PARTS_T *VAR_0, char *VAR_1, size_t VAR_2 )
{
   uint32_t VAR_3;

   if (!VAR_0)
      return 0;

   VAR_3 = FUNC_1(VAR_0);
   if (VAR_1 && VAR_3 < VAR_2)
      FUNC_0(VAR_0, VAR_1, VAR_2);

   return VAR_3;
}
