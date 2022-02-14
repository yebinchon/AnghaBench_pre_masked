
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buffer ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int*,int,int,int *) ;
 int FUNC_4 (size_t,int,int*) ;

__attribute__((used)) static int FUNC_5( const char *VAR_0 )
{
   uint8_t VAR_1[128];
   size_t VAR_2 = 0, VAR_3 = 0;
   int VAR_4, VAR_5 = 0;
   FILE *VAR_6 = ((void*)0);
   int VAR_7 = FUNC_4(VAR_3, sizeof (VAR_1), VAR_1);
   VAR_3 += sizeof( VAR_1);

   if (VAR_7 == sizeof(VAR_1) && (VAR_6 = FUNC_2(VAR_0, "wb")) != ((void*)0)) {
      VAR_2 += FUNC_3(VAR_1, 1, sizeof VAR_1, VAR_6);
      VAR_5 = VAR_1[0x7e];
      for(VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_3 += sizeof( VAR_1)) {
         VAR_7 = FUNC_4(VAR_3, sizeof( VAR_1), VAR_1);
         if(VAR_7 == sizeof(VAR_1)) {
            VAR_2 += FUNC_3(VAR_1, 1, sizeof (VAR_1), VAR_6);
         } else {
            break;
         }
      }
   }
   if (VAR_6)
      FUNC_1(VAR_6);
   if(VAR_2) {
      FUNC_0( "Written %d bytes to %s", VAR_2, VAR_0);
   } else {
      FUNC_0( "Nothing written!");
   }
   return VAR_2 < sizeof(VAR_1);
}
