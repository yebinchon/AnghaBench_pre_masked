
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iram_rom; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int FUNC_1(void)
{
 unsigned char *VAR_4 = (unsigned char *)VAR_3->iram_rom;
 int VAR_5, VAR_6 = VAR_4[0x083^1] + VAR_4[0x4FA^1] + VAR_4[0x5F7^1] + VAR_4[0x47B^1];
 VAR_5 = VAR_1[(VAR_6>>1)&0x3f];

 if (VAR_5 == 0) {
  FUNC_0(VAR_0, "svp: iram ctx val: %02x PC=%04x\n", (VAR_6>>1)&0x3f, VAR_2);


 }
 return VAR_5;
}
