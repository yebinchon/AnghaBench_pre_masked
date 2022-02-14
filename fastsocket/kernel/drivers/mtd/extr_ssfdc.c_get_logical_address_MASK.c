
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5[2] = {6, 11};
 int VAR_6;
 int VAR_7 = 0;






 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
  VAR_3 = ((int)VAR_2[VAR_5[VAR_6]] << 8) |
   VAR_2[VAR_5[VAR_6]+1];


  if ((VAR_3 & ~0x7FF) == 0x1000) {
   VAR_4 = VAR_3 & 0x01;
   VAR_3 &= 0x7FF;
   VAR_3 >>= 1;

   if (FUNC_2(VAR_3, 10) != VAR_4) {
    FUNC_1(VAR_0,
     "SSFDC_RO: logical address field%d"
     "parity error(0x%04X)\n", VAR_6+1,
     VAR_3);
   } else {
    VAR_7 = 1;
    break;
   }
  }
 }

 if (!VAR_7)
  VAR_3 = -2;

 FUNC_1(VAR_1, "SSFDC_RO: get_logical_address() %d\n",
  VAR_3);

 return VAR_3;
}
