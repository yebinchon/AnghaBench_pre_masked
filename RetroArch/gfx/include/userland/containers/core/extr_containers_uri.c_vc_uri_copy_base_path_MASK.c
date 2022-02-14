
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int const VC_URI_PARTS_T ;


 int FUNC_0 (int const*,char const*,char const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 char* FUNC_2 (int const*) ;
 int FUNC_3 (int const*,scalar_t__,char const**,char const**) ;
 int FUNC_4 (int const*,char const*) ;

__attribute__((used)) static bool FUNC_5( const VC_URI_PARTS_T *VAR_0,
      VC_URI_PARTS_T *VAR_1 )
{
   const char *VAR_2 = FUNC_2(VAR_0);


   if (!FUNC_4(VAR_1, VAR_2))
      return 0;


   if (!FUNC_1(VAR_1))
   {
      uint32_t VAR_3 = FUNC_1(VAR_0);
      const char *VAR_4, *VAR_5;
      uint32_t VAR_6;

      for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
      {
         FUNC_3(VAR_0, VAR_6, &VAR_4, &VAR_5);
         if (!FUNC_0(VAR_1, VAR_4, VAR_5))
            return 0;
      }
   }

   return 1;
}
