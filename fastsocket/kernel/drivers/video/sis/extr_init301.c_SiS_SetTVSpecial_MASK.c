
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBType; int SiS_VBInfo; int SiS_TVMode; int SiS_Part2Port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,unsigned char const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_8, unsigned short VAR_9)
{
  if(!(VAR_8->SiS_VBType & VAR_7)) return;
  if(!(VAR_8->SiS_VBInfo & VAR_0)) return;
  if(VAR_8->SiS_TVMode & (VAR_5 | VAR_6)) return;

  if(!(VAR_8->SiS_TVMode & VAR_3)) {
     if(VAR_8->SiS_TVMode & VAR_2) {
        const unsigned char VAR_10[] = {
  0xa7,0x07,0xf2,0x6e,0x17,0x8b,0x73,0x53,
  0x13,0x40,0x34,0xf4,0x63,0xbb,0xcc,0x7a,
  0x58,0xe4,0x73,0xda,0x13
 };
 int VAR_11, VAR_12;
 for(VAR_11 = 0x1c, VAR_12 = 0; VAR_11 <= 0x30; VAR_11++, VAR_12++) {
    FUNC_0(VAR_8->SiS_Part2Port,VAR_11,VAR_10[VAR_12]);
 }
 FUNC_0(VAR_8->SiS_Part2Port,0x43,0x72);
 if(!(VAR_8->SiS_VBInfo & VAR_1)) {
    if(VAR_8->SiS_TVMode & VAR_4) {
       FUNC_0(VAR_8->SiS_Part2Port,0x01,0x14);
       FUNC_0(VAR_8->SiS_Part2Port,0x02,0x1b);
    } else {
       FUNC_0(VAR_8->SiS_Part2Port,0x01,0x14);
       FUNC_0(VAR_8->SiS_Part2Port,0x02,0x1a);
    }
 }
     }
  } else {
     if((VAR_9 == 0x38) || (VAR_9 == 0x4a) || (VAR_9 == 0x64) ||
        (VAR_9 == 0x52) || (VAR_9 == 0x58) || (VAR_9 == 0x5c)) {
        FUNC_0(VAR_8->SiS_Part2Port,0x01,0x1b);
        FUNC_0(VAR_8->SiS_Part2Port,0x02,0x54);
     } else {
        FUNC_0(VAR_8->SiS_Part2Port,0x01,0x1a);
        FUNC_0(VAR_8->SiS_Part2Port,0x02,0x53);
     }
  }
}
