
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int VC_CONTAINER_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(uint8_t *VAR_2, uint32_t *VAR_3, uint8_t *VAR_4,
                                               uint32_t *VAR_5, uint32_t *VAR_6, uint32_t *VAR_7)
{
   int VAR_8;


   VAR_8 = FUNC_0(VAR_2, VAR_5);

   if(VAR_2[VAR_8] == 0xff)
   {
      uint32_t VAR_9;
      uint8_t VAR_10 = VAR_2[VAR_8+1];

      VAR_8 += 2;
      VAR_8 += FUNC_0(VAR_2+VAR_8, &VAR_9);

      if(VAR_10 == 0x2f)
      {
         if(VAR_9 != 0)
            return VAR_0;

         *VAR_7 = 1;
      }
      else if(VAR_10 == 0x51)
      {
         if(VAR_9 != 3)
            return VAR_0;

         *VAR_6 = (VAR_2[VAR_8]<<16) | (VAR_2[VAR_8+1]<<8) | VAR_2[VAR_8+2];
      }

      VAR_8 += VAR_9;
   }
   else if(VAR_2[VAR_8] == 0xf0 || VAR_2[VAR_8] == 0xf7)
   {
      uint32_t VAR_11;
      VAR_8 += 1;
      VAR_8 += FUNC_0(VAR_2+VAR_8, &VAR_11) + VAR_11;
   }
   else
   {
      uint8_t VAR_12;

      if(VAR_2[VAR_8] < 128)
         VAR_12 = *VAR_4;
      else
      {
         VAR_12 = VAR_2[VAR_8] >> 4;
         *VAR_4 = VAR_12;
         VAR_8++;
      }

      switch(VAR_12) {
      case 8: case 9: case 0xa: case 0xb: case 0xe:
         VAR_8 += 2;
         break;
      case 0xc: case 0xd:
         VAR_8 += 1;
         break;
      default:
         return VAR_0;
      }
   }

   *VAR_3 = VAR_8;
   return VAR_1;
}
