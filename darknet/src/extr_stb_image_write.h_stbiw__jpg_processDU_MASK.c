
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__write_context ;


 int FUNC_0 (float*,float*,float*,float*,float*,float*,float*,float*) ;
 size_t* VAR_0 ;
 int FUNC_1 (int,unsigned short*) ;
 int FUNC_2 (int *,int*,int*,unsigned short const*) ;

__attribute__((used)) static int FUNC_3(stbi__write_context *VAR_1, int *VAR_2, int *VAR_3, float *VAR_4, float *VAR_5, int VAR_6, const unsigned short VAR_7[256][2], const unsigned short VAR_8[256][2]) {
   const unsigned short VAR_9[2] = { VAR_8[0x00][0], VAR_8[0x00][1] };
   const unsigned short VAR_10[2] = { VAR_8[0xF0][0], VAR_8[0xF0][1] };
   int VAR_11, VAR_12, VAR_13, VAR_14;
   int VAR_15[64];


   for(VAR_11=0; VAR_11<64; VAR_11+=8) {
      FUNC_0(&VAR_4[VAR_11], &VAR_4[VAR_11+1], &VAR_4[VAR_11+2], &VAR_4[VAR_11+3], &VAR_4[VAR_11+4], &VAR_4[VAR_11+5], &VAR_4[VAR_11+6], &VAR_4[VAR_11+7]);
   }

   for(VAR_11=0; VAR_11<8; ++VAR_11) {
      FUNC_0(&VAR_4[VAR_11], &VAR_4[VAR_11+8], &VAR_4[VAR_11+16], &VAR_4[VAR_11+24], &VAR_4[VAR_11+32], &VAR_4[VAR_11+40], &VAR_4[VAR_11+48], &VAR_4[VAR_11+56]);
   }

   for(VAR_12=0; VAR_12<64; ++VAR_12) {
      float VAR_16 = VAR_4[VAR_12]*VAR_5[VAR_12];


      VAR_15[VAR_0[VAR_12]] = (int)(VAR_16 < 0 ? VAR_16 - 0.5f : VAR_16 + 0.5f);
   }


   VAR_13 = VAR_15[0] - VAR_6;
   if (VAR_13 == 0) {
      FUNC_2(VAR_1, VAR_2, VAR_3, VAR_7[0]);
   } else {
      unsigned short VAR_17[2];
      FUNC_1(VAR_13, VAR_17);
      FUNC_2(VAR_1, VAR_2, VAR_3, VAR_7[VAR_17[1]]);
      FUNC_2(VAR_1, VAR_2, VAR_3, VAR_17);
   }

   VAR_14 = 63;
   for(; (VAR_14>0)&&(VAR_15[VAR_14]==0); --VAR_14) {
   }

   if(VAR_14 == 0) {
      FUNC_2(VAR_1, VAR_2, VAR_3, VAR_9);
      return VAR_15[0];
   }
   for(VAR_12 = 1; VAR_12 <= VAR_14; ++VAR_12) {
      int VAR_18 = VAR_12;
      int VAR_19;
      unsigned short VAR_20[2];
      for (; VAR_15[VAR_12]==0 && VAR_12<=VAR_14; ++VAR_12) {
      }
      VAR_19 = VAR_12-VAR_18;
      if ( VAR_19 >= 16 ) {
         int VAR_21 = VAR_19>>4;
         int VAR_22;
         for (VAR_22=1; VAR_22 <= VAR_21; ++VAR_22)
            FUNC_2(VAR_1, VAR_2, VAR_3, VAR_10);
         VAR_19 &= 15;
      }
      FUNC_1(VAR_15[VAR_12], VAR_20);
      FUNC_2(VAR_1, VAR_2, VAR_3, VAR_8[(VAR_19<<4)+VAR_20[1]]);
      FUNC_2(VAR_1, VAR_2, VAR_3, VAR_20);
   }
   if(VAR_14 != 63) {
      FUNC_2(VAR_1, VAR_2, VAR_3, VAR_9);
   }
   return VAR_15[0];
}
