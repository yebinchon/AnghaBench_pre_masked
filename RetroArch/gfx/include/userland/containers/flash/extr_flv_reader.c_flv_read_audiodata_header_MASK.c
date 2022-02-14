
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_FOURCC_T ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_10,
   VC_CONTAINER_FOURCC_T *VAR_11, int *VAR_12, int *VAR_13, int *VAR_14)
{
   int VAR_15, VAR_16, VAR_17;
   uint8_t VAR_18 = FUNC_1(VAR_10);

   switch((VAR_18 >> 2) & 0x3)
   {
   case 0: VAR_15 = 5512; break;
   case 1: VAR_15 = 11025; break;
   case 2: VAR_15 = 22050; break;
   default:
   case 3: VAR_15 = 44100; break;
   }

   VAR_16 = 1 << (VAR_18 & 1);
   VAR_17 = 8 << ((VAR_18 >> 1) & 1);

   switch(VAR_18 >> 4)
   {
   case 0: *VAR_11 = VAR_17 == 8 ? VAR_8 : VAR_6; break;
   case 1: *VAR_11 = VAR_0; break;
   case 2: *VAR_11 = VAR_3; break;
   case 3: *VAR_11 = VAR_17 == 8 ? VAR_8 : VAR_7; break;
   case 4: *VAR_11 = VAR_5; VAR_15 = 8000; VAR_16 = 1; break;
   case 5: *VAR_11 = VAR_5; VAR_15 = 16000; VAR_16 = 1; break;
   case 6: *VAR_11 = VAR_5; VAR_16 = 1; break;
   case 7: *VAR_11 = VAR_1; break;
   case 8: *VAR_11 = VAR_4; break;
   case 10: *VAR_11 = VAR_2; VAR_15 = 44100; VAR_16 = 2; break;
   case 11: *VAR_11 = VAR_9; break;
   case 14: *VAR_11 = VAR_3; VAR_15 = 8000; break;
   default: *VAR_11 = 0; break;
   }

   if(VAR_12) *VAR_12 = VAR_15;
   if(VAR_13) *VAR_13 = VAR_16;
   if(VAR_14) *VAR_14 = VAR_17;

   return FUNC_0(VAR_10);
}
