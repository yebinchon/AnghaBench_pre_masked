
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int intfstream_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char const*,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_3, uint32_t *VAR_4)
{
   int VAR_5;
   intfstream_t *VAR_6 = FUNC_4(
         VAR_3,
         VAR_2,
         VAR_1,
         VAR_0);
   if (!VAR_6)
      return 0;

   VAR_5 = FUNC_3(VAR_6, VAR_4);
   if (VAR_5 == 1)
   {
      FUNC_0("CHD '%s' crc: %x\n", VAR_3, *VAR_4);
   }
   if (VAR_6)
   {
      FUNC_2(VAR_6);
      FUNC_1(VAR_6);
   }
   return VAR_5;
}
