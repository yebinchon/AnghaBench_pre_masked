
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef int VC_CONTAINER_STATUS_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(uint8_t *VAR_2, uint32_t *VAR_3,
   uint32_t *VAR_4, uint8_t *VAR_5, uint8_t *VAR_6)
{
   if(VAR_2[0] != 'M' || VAR_2[1] != 'T' || VAR_2[2] != 'h' || VAR_2[3] != 'd' ||
      VAR_2[4] != 0 || VAR_2[5] != 0 || VAR_2[6] != 0 || VAR_2[7] != 6)
      return VAR_0;

   if(VAR_2[12] < 0x80)
   {
      if(VAR_4) *VAR_4 = FUNC_0(VAR_2+12);
   }
   else
   {
      if(VAR_5) *VAR_5 = 256-VAR_2[12];
      if(VAR_6) *VAR_6 = VAR_2[13];
   }

   if(VAR_3) *VAR_3 = FUNC_0(VAR_2+10);

   return VAR_1;
}
