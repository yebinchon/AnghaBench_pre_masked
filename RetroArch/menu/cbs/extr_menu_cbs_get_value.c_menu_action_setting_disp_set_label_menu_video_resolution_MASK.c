
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_list_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,unsigned int,unsigned int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 scalar_t__ FUNC_3 (unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_4(
      file_list_t* VAR_1,
      unsigned *VAR_2, unsigned VAR_3, unsigned VAR_4,
      const char *VAR_5,
      char *VAR_6, size_t VAR_7,
      const char *VAR_8,
      char *VAR_9, size_t VAR_10)
{
   unsigned VAR_11 = 0, VAR_12 = 0;

   *VAR_2 = 19;
   *VAR_6 = '\0';

   FUNC_2(VAR_9, VAR_8, VAR_10);

   if (FUNC_3(&VAR_11, &VAR_12))
   {





         FUNC_1(VAR_6, VAR_7, "%ux%u", VAR_11, VAR_12);
   }
   else
      FUNC_2(VAR_6, FUNC_0(VAR_0), VAR_7);
}
