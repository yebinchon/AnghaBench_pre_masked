
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_FOURCC_T ;
typedef int MMAL_ES_TYPE_T ;
typedef int MMALOMX_ROLE_T ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_0(MMALOMX_ROLE_T VAR_13,
   MMAL_FOURCC_T *VAR_14, MMAL_ES_TYPE_T *VAR_15, unsigned int *VAR_16)
{
   switch (VAR_13)
   {
   case 133:
   case 128:
      *VAR_14 = VAR_5;
      *VAR_15 = VAR_12;
      break;
   case 136:
   case 130:
      *VAR_14 = VAR_2;
      *VAR_15 = VAR_12;
      break;
   case 134:
      *VAR_14 = VAR_3;
      *VAR_15 = VAR_12;
      break;
   case 131:
      *VAR_14 = VAR_9;
      *VAR_15 = VAR_12;
      break;
   case 132:
      *VAR_14 = VAR_8;
      *VAR_15 = VAR_12;
      break;
   case 135:
   case 129:
      *VAR_14 = VAR_1;
      *VAR_15 = VAR_12;
      break;
   case 141:
      *VAR_14 = VAR_4;
      *VAR_15 = VAR_10;
      break;
   case 139:
   case 138:
   case 137:
      *VAR_14 = VAR_6;
      *VAR_15 = VAR_10;
      break;

   case 140:
      *VAR_14 = VAR_0;
      *VAR_15 = VAR_10;
      break;

   default:
      *VAR_14 = VAR_7;
      *VAR_15 = VAR_11;
      break;
   }

   switch (VAR_13)
   {
   case 129:
   case 128:
   case 130:
      *VAR_16 = 1;
      break;
   default:
      *VAR_16 = 0;
      break;
   }
}
