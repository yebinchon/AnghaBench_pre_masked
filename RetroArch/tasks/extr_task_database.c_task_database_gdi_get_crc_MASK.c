
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,...) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int,char*,int ) ;
 int FUNC_3 (char*,int ,int ,char**) ;
 scalar_t__ FUNC_4 (int ) ;
 char const* FUNC_5 (int ) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_4, uint32_t *VAR_5)
{
   char *VAR_6 = (char *)FUNC_4(VAR_2);
   int VAR_7 = 0;

   VAR_6[0] = '\0';

   VAR_7 = FUNC_2(VAR_4, 1, VAR_6, VAR_2);

   if (VAR_7 < 0)
   {
      FUNC_0("%s: %s\n", FUNC_5(VAR_0),
                FUNC_6(-VAR_7));
      FUNC_1(VAR_6);
      return 0;
   }

   FUNC_0("GDI '%s' primary track: %s\n", VAR_4, VAR_6);

   FUNC_0("%s\n", FUNC_5(VAR_1));

   VAR_7 = FUNC_3(VAR_6, 0, VAR_3, VAR_5);
   if (VAR_7 == 1)
   {
      FUNC_0("GDI '%s' crc: %x\n", VAR_4, *VAR_5);
   }
   FUNC_1(VAR_6);
   return VAR_7;
}
