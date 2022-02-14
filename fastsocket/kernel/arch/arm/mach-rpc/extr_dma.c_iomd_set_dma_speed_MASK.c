
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dma_t ;






 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_1, dma_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3 < 188)
  VAR_5 = 3;
 else if (VAR_3 <= 250)
  VAR_5 = 2;
 else if (VAR_3 < 438)
  VAR_5 = 1;
 else
  VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 &= 3;

 switch (VAR_1) {
 case 131:
  VAR_4 = (VAR_4 & ~0x03) | VAR_5;
  break;

 case 130:
  VAR_4 = (VAR_4 & ~0x0c) | (VAR_5 << 2);
  break;

 case 129:
  VAR_4 = (VAR_4 & ~0x30) | (VAR_5 << 4);
  break;

 case 128:
  VAR_4 = (VAR_4 & ~0xc0) | (VAR_5 << 6);
  break;

 default:
  break;
 }

 FUNC_1(VAR_4, VAR_0);

 return VAR_5;
}
