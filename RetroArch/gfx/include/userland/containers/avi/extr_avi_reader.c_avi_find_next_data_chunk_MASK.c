
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef scalar_t__ VC_CONTAINER_FOURCC_T ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char,char) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (char,char,char,char) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_8(VC_CONTAINER_T *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
   VC_CONTAINER_STATUS_T VAR_5 = VAR_1;
   VC_CONTAINER_FOURCC_T VAR_6;
   uint32_t VAR_7 = 0;
   uint32_t VAR_8[1];

   do
   {
      VAR_6 = FUNC_3(VAR_2, "Chunk ID");
      VAR_7 = FUNC_4(VAR_2, "Chunk size");
      if((VAR_5 = FUNC_6(VAR_2)) != VAR_1)
         break;


      if(VAR_6 == FUNC_7('L','I','S','T'))
      {
         if (FUNC_2(VAR_2, (uint8_t*)VAR_8, 4) != 4)
            return VAR_0;
         if (VAR_8[0] == FUNC_7('r','e','c',' '))
            FUNC_5(VAR_2, "rec ");
         else if (VAR_8[0] == FUNC_7('m','o','v','i'))
            FUNC_5(VAR_2, "movi");
         else
            FUNC_0(VAR_2, VAR_7);
         continue;
      }


      if(VAR_6 == FUNC_7('R','I','F','F'))
      {
         if (FUNC_2(VAR_2, (uint8_t*)VAR_8, 4) != 4)
            return VAR_0;
         if (VAR_8[0] == FUNC_7('A','V','I','X'))
            FUNC_5(VAR_2, "AVIX");
         else
            FUNC_0(VAR_2, VAR_7);
         continue;
      }


      if((uint32_t)VAR_6 >> 16 == FUNC_1('d','c') ||
         (uint32_t)VAR_6 >> 16 == FUNC_1('d','b') ||
         (uint32_t)VAR_6 >> 16 == FUNC_1('d','d') ||
         (uint32_t)VAR_6 >> 16 == FUNC_1('w','b'))
      {
         *VAR_3 = VAR_6;
         *VAR_4 = VAR_7;
         break;
      }


      if(VAR_7 == 0 && VAR_6 == 0) return VAR_0;


      FUNC_0(VAR_2, VAR_7);
   } while ((VAR_5 = FUNC_6(VAR_2)) == VAR_1);

   return VAR_5;
}
