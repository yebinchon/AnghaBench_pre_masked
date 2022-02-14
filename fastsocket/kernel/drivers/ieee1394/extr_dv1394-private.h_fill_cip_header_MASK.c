
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CIP_header {unsigned char* b; } ;
typedef enum pal_or_ntsc { ____Placeholder_pal_or_ntsc } pal_or_ntsc ;





__attribute__((used)) static inline void FUNC_0(struct CIP_header *VAR_0,
       unsigned char VAR_1,
       unsigned long VAR_2,
       enum pal_or_ntsc VAR_3,
       unsigned long VAR_4)
{
 VAR_0->b[0] = VAR_1;
 VAR_0->b[1] = 0x78;
 VAR_0->b[2] = 0x00;
 VAR_0->b[3] = VAR_2;

 VAR_0->b[4] = 0x80;

 switch(VAR_3) {
 case 128:
  VAR_0->b[5] = 0x80;
  break;
 case 129:
  VAR_0->b[5] = 0x00;
  break;
 }

 VAR_0->b[6] = VAR_4 >> 8;
 VAR_0->b[7] = VAR_4 & 0xFF;
}
