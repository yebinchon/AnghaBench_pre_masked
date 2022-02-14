
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vram; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned char *VAR_2,int VAR_3,unsigned char VAR_4)
{
 unsigned int VAR_5=0; unsigned int VAR_6=0, VAR_7 = 1;
 int VAR_8;

 VAR_3+=14;
 for(VAR_8=8; VAR_8; VAR_8--, VAR_3-=2, VAR_2 += VAR_0) {
  VAR_5=*(unsigned int *)(VAR_1.vram+VAR_3);
  if(!VAR_5) continue;

  VAR_6=VAR_5&0x000f0000; if (VAR_6) VAR_2[0]=(unsigned char)((VAR_6>>16)|VAR_4);
  VAR_6=VAR_5&0x00f00000; if (VAR_6) VAR_2[1]=(unsigned char)((VAR_6>>20)|VAR_4);
  VAR_6=VAR_5&0x0f000000; if (VAR_6) VAR_2[2]=(unsigned char)((VAR_6>>24)|VAR_4);
  VAR_6=VAR_5&0xf0000000; if (VAR_6) VAR_2[3]=(unsigned char)((VAR_6>>28)|VAR_4);
  VAR_6=VAR_5&0x0000000f; if (VAR_6) VAR_2[4]=(unsigned char)((VAR_6 )|VAR_4);
  VAR_6=VAR_5&0x000000f0; if (VAR_6) VAR_2[5]=(unsigned char)((VAR_6>> 4)|VAR_4);
  VAR_6=VAR_5&0x00000f00; if (VAR_6) VAR_2[6]=(unsigned char)((VAR_6>> 8)|VAR_4);
  VAR_6=VAR_5&0x0000f000; if (VAR_6) VAR_2[7]=(unsigned char)((VAR_6>>12)|VAR_4);
  VAR_7 = 0;
 }
 return VAR_7;
}
