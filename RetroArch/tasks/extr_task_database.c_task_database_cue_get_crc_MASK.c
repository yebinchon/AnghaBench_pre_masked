
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char const*,int,scalar_t__*,scalar_t__*,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,size_t,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 char const* FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, uint32_t *VAR_4)
{
   char *VAR_5 = (char *)FUNC_4(VAR_2);
   uint64_t VAR_6 = 0;
   uint64_t VAR_7 = 0;
   int VAR_8 = 0;

   VAR_5[0] = '\0';

   VAR_8 = FUNC_1(VAR_3, 0, &VAR_6, &VAR_7,
         VAR_5, VAR_2);

   if (VAR_8 < 0)
   {
      FUNC_0("%s: %s\n",
            FUNC_5(VAR_0),
            FUNC_6(-VAR_8));
      FUNC_2(VAR_5);
      return 0;
   }

   FUNC_0("CUE '%s' primary track: %s\n (%lu, %lu)\n",VAR_3, VAR_5, (unsigned long) VAR_6, (unsigned long) VAR_7);

   FUNC_0("%s\n", FUNC_5(VAR_1));

   VAR_8 = FUNC_3(VAR_5, VAR_6, (size_t)VAR_7, VAR_4);
   if (VAR_8 == 1)
   {
      FUNC_0("CUE '%s' crc: %x\n", VAR_3, *VAR_4);
   }
   FUNC_2(VAR_5);
   return VAR_8;
}
