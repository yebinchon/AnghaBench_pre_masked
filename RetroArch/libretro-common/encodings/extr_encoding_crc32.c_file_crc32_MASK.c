
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ int64_t ;
typedef int RFILE ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned char*,size_t) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,int ) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,int ) ;
 int FUNC_5 (unsigned char*) ;
 scalar_t__ FUNC_6 (int ) ;

uint32_t FUNC_7(uint32_t VAR_3, const char *VAR_4)
{
   unsigned VAR_5;
   RFILE *VAR_6 = ((void*)0);
   unsigned char *VAR_7 = ((void*)0);
   if (!VAR_4)
      return 0;

   VAR_6 = FUNC_3(VAR_4, VAR_2, 0);
   if (!VAR_6)
      goto error;

   VAR_7 = (unsigned char*)FUNC_6(VAR_0);
   if (!VAR_7)
      goto error;

   for(VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      int64_t VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_0);
      if (VAR_8 < 0)
         goto error;

      VAR_3 = FUNC_0(VAR_3, VAR_7, (size_t)VAR_8);
      if (FUNC_2(VAR_6))
         break;
   }
   FUNC_5(VAR_7);
   FUNC_1(VAR_6);
   return VAR_3;

error:
   if (VAR_7)
      FUNC_5(VAR_7);
   if (VAR_6)
      FUNC_1(VAR_6);
   return 0;
}
