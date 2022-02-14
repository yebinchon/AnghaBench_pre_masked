
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void)
{
 FUNC_0("AUDF1= %02X    AUDF2= %02X    AUDF3= %02X    AUDF4= %02X    AUDCTL=%02X    KBCODE=%02X\n",
     VAR_3[VAR_4], VAR_3[VAR_5], VAR_3[VAR_6], VAR_3[VAR_7], VAR_2[0], VAR_11);
 FUNC_0("AUDC1= %02X    AUDC2= %02X    AUDC3= %02X    AUDC4= %02X    IRQEN= %02X    IRQST= %02X\n",
     VAR_1[VAR_4], VAR_1[VAR_5], VAR_1[VAR_6], VAR_1[VAR_7], VAR_9, VAR_10);
 FUNC_0("SKSTAT=%02X    SKCTL= %02X\n", VAR_13, VAR_12);
}
