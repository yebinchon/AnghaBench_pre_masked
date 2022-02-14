
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rbmp_source_type { ____Placeholder_rbmp_source_type } rbmp_source_type ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void const*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int *,unsigned int,unsigned int,int) ;

bool FUNC_4(
      const char *VAR_3,
      const void *VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      unsigned VAR_7, enum rbmp_source_type VAR_8)
{
   bool VAR_9 = 0;
   RFILE *VAR_10 = FUNC_2(VAR_3,
         VAR_2,
         VAR_1);
   if (!VAR_10)
      return 0;

   VAR_9 = FUNC_3(VAR_10, VAR_5, VAR_6, VAR_8==VAR_0);

   if (VAR_9)
      FUNC_0(VAR_10, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

   FUNC_1(VAR_10);

   return VAR_9;
}
