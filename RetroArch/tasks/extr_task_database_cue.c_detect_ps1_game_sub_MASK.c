
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int intfstream_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,...) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(intfstream_t *VAR_3,
      char *VAR_4, int VAR_5)
{
   uint8_t* VAR_6;
   uint8_t* VAR_7;
   int VAR_8, VAR_9, VAR_10, VAR_11;
   uint8_t VAR_12[2048 * 2];

   VAR_12[0] = '\0';
   VAR_10 = 0;

   if (FUNC_1(VAR_3, 0, VAR_1) == -1)
      goto error;

   if (!VAR_5)
   {
      if (!(FUNC_2(VAR_3) & 0x7FF))
      {
         unsigned int VAR_13 = 0;

         if (FUNC_1(VAR_3, 0, VAR_2) == -1)
            goto error;

         FUNC_0(VAR_3, &VAR_13, 4);
         if (VAR_13 != VAR_0)
            VAR_10 = 1;
      }
   }

   VAR_8 = VAR_10? 0: 24;
   VAR_9 = VAR_5? 2448: VAR_10? 2048: 2352;

   if (FUNC_1(VAR_3, 156 + VAR_8 + 16 * VAR_9, VAR_2) == -1)
      goto error;

   FUNC_0(VAR_3, VAR_12, 6);

   VAR_11 = VAR_12[2] | (VAR_12[3] << 8) | (VAR_12[4] << 16);

   if (FUNC_1(VAR_3, VAR_8 + VAR_11 * VAR_9, VAR_2) == -1)
      goto error;
   FUNC_0(VAR_3, VAR_12, 2048 * 2);

   VAR_6 = VAR_12;
   while (VAR_6 < (VAR_12 + 2048 * 2))
   {
      if (!*VAR_6)
         goto error;

      if (!FUNC_4((const char*)(VAR_6 + 33), "SYSTEM.CNF;1", 12))
         break;

      VAR_6 += *VAR_6;
   }

   if(VAR_6 >= (VAR_12 + 2048 * 2))
      goto error;

   VAR_11 = VAR_6[2] | (VAR_6[3] << 8) | (VAR_6[4] << 16);
   if (FUNC_1(VAR_3, VAR_8 + VAR_11 * VAR_9, VAR_2) == -1)
      goto error;

   FUNC_0(VAR_3, VAR_12, 256);
   VAR_12[256] = '\0';

   VAR_6 = VAR_12;
   while(*VAR_6 && FUNC_4((const char*)VAR_6, "boot", 4))
      VAR_6++;

   if(!*VAR_6)
      goto error;

   VAR_7 = VAR_6;
   while(*VAR_6 && *VAR_6 != '\n')
   {
      if((*VAR_6 == '\\') || (*VAR_6 == ':'))
         VAR_7 = VAR_6 + 1;

      VAR_6++;
   }

   VAR_6 = VAR_7;
   *VAR_4++ = FUNC_5(*VAR_6++);
   *VAR_4++ = FUNC_5(*VAR_6++);
   *VAR_4++ = FUNC_5(*VAR_6++);
   *VAR_4++ = FUNC_5(*VAR_6++);
   *VAR_4++ = '-';

   if(!FUNC_3(*VAR_6))
      VAR_6++;

   while(FUNC_3(*VAR_6))
   {
      *VAR_4++ = *VAR_6++;
      if(*VAR_6 == '.')
         VAR_6++;
   }

   *VAR_4 = 0;

   return 1;

error:
   return 0;
}
