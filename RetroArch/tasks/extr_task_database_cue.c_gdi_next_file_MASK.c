
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int intfstream_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (char*,char*,char*,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

bool FUNC_6(intfstream_t *VAR_2, const char *VAR_3,
      char *VAR_4, uint64_t VAR_5)
{
   bool VAR_6 = 0;
   char *VAR_7 = (char*)FUNC_5(VAR_0);
   int64_t VAR_8 = -1;

   VAR_7[0] = '\0';


   VAR_8 = FUNC_4(VAR_2);
   if (VAR_8 == 0)
      FUNC_3(VAR_2, VAR_7, VAR_0);


   FUNC_3(VAR_2, VAR_7, VAR_0);


   FUNC_3(VAR_2, VAR_7, VAR_0);


   FUNC_3(VAR_2, VAR_7, VAR_0);


   FUNC_3(VAR_2, VAR_7, VAR_0);


   if (FUNC_3(VAR_2, VAR_7, VAR_0) > 0)
   {
      char *VAR_9 = (char*)FUNC_5(VAR_1);

      VAR_9[0] = '\0';

      FUNC_0(VAR_9, VAR_3, VAR_1);

      FUNC_1(VAR_4, VAR_9, VAR_7, (size_t)VAR_5);
      VAR_6 = 1;


      FUNC_3(VAR_2, VAR_7, VAR_0);

      FUNC_2(VAR_9);
   }

   FUNC_2(VAR_7);
   return VAR_6;
}
