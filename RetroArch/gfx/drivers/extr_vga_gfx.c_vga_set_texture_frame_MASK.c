
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

__attribute__((used)) static void FUNC_2(void *VAR_7,
      const void *VAR_8, bool VAR_9, unsigned VAR_10, unsigned VAR_11,
      float VAR_12)
{
   unsigned VAR_13 = VAR_10 * 2;

   if (VAR_9)
      VAR_13 = VAR_10 * 4;

   if (VAR_3)
   {
      FUNC_0(VAR_3);
      VAR_3 = ((void*)0);
   }

   if ( !VAR_3 ||
         VAR_6 != VAR_10 ||
         VAR_4 != VAR_11 ||
         VAR_5 != VAR_13)
      if (VAR_13 && VAR_11)
         VAR_3 = (unsigned char*)FUNC_1(VAR_1 * VAR_0);

   if (VAR_3 && VAR_8 && VAR_13 && VAR_11)
   {
      unsigned VAR_14, VAR_15;

      if (VAR_9)
      {
      }
      else
      {
         unsigned short *VAR_16 = (unsigned short*)VAR_8;

         for(VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
         {
            for(VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
            {

               unsigned VAR_17 = (VAR_10 * VAR_14) / VAR_1;
               unsigned VAR_18 = (VAR_11 * VAR_15) / VAR_0;
               unsigned short VAR_19 = VAR_16[VAR_10 * VAR_18 + VAR_17];
               unsigned VAR_20 = ((VAR_19 & 0xF000) >> 13);
               unsigned VAR_21 = ((VAR_19 & 0xF00) >> 9);
               unsigned VAR_22 = ((VAR_19 & 0xF0) >> 6);
               VAR_3[VAR_1 * VAR_15 + VAR_14] = (VAR_22 << 6) | (VAR_21 << 3) | VAR_20;
            }
         }
      }

      VAR_6 = VAR_10;
      VAR_4 = VAR_11;
      VAR_5 = VAR_13;
      VAR_2 = VAR_9 ? 32 : 16;
   }
}
