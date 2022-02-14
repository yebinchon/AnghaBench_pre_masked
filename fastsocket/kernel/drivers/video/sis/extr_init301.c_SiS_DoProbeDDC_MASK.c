
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_DeviceAddr; } ;


 scalar_t__ FUNC_0 (struct SiS_Private*) ;
 scalar_t__ FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (struct SiS_Private*,int) ;
 int FUNC_3 (struct SiS_Private*) ;
 int FUNC_4 (struct SiS_Private*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static unsigned short
FUNC_6(struct SiS_Private *VAR_1)
{
    unsigned char VAR_2, VAR_3;
    unsigned short VAR_4, VAR_5=0;
    bool VAR_6 = 0;

    FUNC_4(VAR_1);
    if(FUNC_0(VAR_1)) {
         FUNC_3(VAR_1);





         return 0xFFFF;
    }
    VAR_2 = 0xf0;
    VAR_3 = 0x20;
    if(VAR_1->SiS_DDC_DeviceAddr == 0xa0) {
       VAR_4 = (unsigned char)FUNC_1(VAR_1);
       FUNC_2(VAR_1, 0);
       if(VAR_4 == 0) {
           VAR_2 = 0xff;
    VAR_3 = 0xff;
       } else {
           VAR_6 = 1;
    VAR_5 = 0xFFFF;





       }
    }
    if(!VAR_6) {
       VAR_4 = (unsigned char)FUNC_1(VAR_1);
       FUNC_2(VAR_1, 1);
       VAR_4 &= VAR_2;
       if(VAR_4 == VAR_3) VAR_5 = 0;
       else {
          VAR_5 = 0xFFFF;





          if(VAR_1->SiS_DDC_DeviceAddr == 0xa0) {
             if(VAR_4 == 0x30) VAR_5 = 0;
          }
       }
    }
    FUNC_3(VAR_1);
    return VAR_5;
}
