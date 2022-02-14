
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sys_addr_t ;
typedef int spawn_data ;
typedef int SceNpDrmKey ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*,char const** const,char const**,int ,int,int,int ) ;
 int FUNC_2 (char const*,char const** const,char const**,int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1,
      char const *VAR_2[], char const *VAR_3[])
{
   int VAR_4;
   unsigned VAR_5;
   char VAR_6[256];
   SceNpDrmKey *VAR_7 = ((void*)0);

   for(VAR_5 = 0; VAR_5 < sizeof(VAR_6); ++VAR_5)
      VAR_6[VAR_5] = VAR_5 & 0xff;

   VAR_4 = FUNC_1(VAR_7, VAR_1,
         (const char** const)VAR_2, VAR_3, (sys_addr_t)VAR_6,
         256, 1000, VAR_0);

   if(VAR_4 < 0)
   {
      FUNC_0("SELF file is not of NPDRM type, trying another approach to boot it...\n");
      FUNC_2(VAR_1, (const char** const)VAR_2,
            VAR_3, ((void*)0), 0, 1000, VAR_0);
   }

   return VAR_4;
}
