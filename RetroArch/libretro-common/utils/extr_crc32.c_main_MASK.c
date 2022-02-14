
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int buffer ;
typedef int FILE ;


 int FUNC_0 (int,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (void*,int,int,int *) ;
 int FUNC_5 (char*,int) ;
 int VAR_1 ;
 char* FUNC_6 (int ) ;

int FUNC_7(int VAR_2, const char* VAR_3[])
{
   if (VAR_2 != 2 )
   {
      FUNC_3( VAR_1, "Usage: crc32 <filename>\n" );
      return 1;
   }

   FILE *VAR_4 = FUNC_2(VAR_3[1], "rb");

   if (VAR_4)
   {
      uint32_t VAR_5 = FUNC_0(0L, ((void*)0), 0 );

      for (;;)
      {
         uint8_t VAR_6[16384];

         int VAR_7 = FUNC_4((void*)VAR_6, 1, sizeof(VAR_6), VAR_4);

         if (VAR_7 > 0)
            VAR_5 = FUNC_0( VAR_5, VAR_6, VAR_7 );
         else
            break;
      }

      FUNC_1(VAR_4);

      FUNC_5("%08x\n", VAR_5);
      return 0;
   }

   FUNC_3(VAR_1, "Error opening input file: %s\n", FUNC_6(VAR_0));
   return 1;
}
