
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned char SiS_DDC_DeviceAddr; int SiS_ChrontelInit; } ;


 int FUNC_0 (struct SiS_Private*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct SiS_Private*) ;
 scalar_t__ FUNC_2 (struct SiS_Private*) ;
 unsigned short FUNC_3 (struct SiS_Private*,unsigned char) ;

__attribute__((used)) static bool
FUNC_4(struct SiS_Private *VAR_1, unsigned short VAR_2, unsigned char VAR_3, unsigned short VAR_4)
{
  unsigned short VAR_5, VAR_6;

  for(VAR_6=0; VAR_6<20; VAR_6++) {
     if(VAR_6) {
 FUNC_2(VAR_1);
 FUNC_0(VAR_1,VAR_0 * 4);
     }
     if(FUNC_1(VAR_1)) continue;
     VAR_5 = FUNC_3(VAR_1, VAR_1->SiS_DDC_DeviceAddr);
     if(VAR_5) continue;
     VAR_5 = FUNC_3(VAR_1, (VAR_2 | VAR_4));
     if(VAR_5) continue;
     VAR_5 = FUNC_3(VAR_1, VAR_3);
     if(VAR_5) continue;
     if(FUNC_2(VAR_1)) continue;
     VAR_1->SiS_ChrontelInit = 1;
     return 1;
  }
  return 0;
}
