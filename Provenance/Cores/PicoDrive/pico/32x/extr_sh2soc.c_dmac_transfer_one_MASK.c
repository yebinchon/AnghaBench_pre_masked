
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_chan {int chcr; int sar; int dar; scalar_t__ tcr; } ;
typedef int SH2 ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int,int *) ;
 int FUNC_4 (int,int,int *) ;
 int FUNC_5 (int,int,int *) ;

__attribute__((used)) static void FUNC_6(SH2 *VAR_0, struct dma_chan *VAR_1)
{
  u32 VAR_2, VAR_3;

  VAR_2 = (VAR_1->chcr >> 10) & 3;
  switch (VAR_2) {
  case 0:
    VAR_3 = FUNC_2(VAR_1->sar, VAR_0);
    FUNC_5(VAR_1->dar, VAR_3, VAR_0);
  case 1:
    VAR_3 = FUNC_0(VAR_1->sar, VAR_0);
    FUNC_3(VAR_1->dar, VAR_3, VAR_0);
    break;
  case 2:
    VAR_3 = FUNC_1(VAR_1->sar, VAR_0);
    FUNC_4(VAR_1->dar, VAR_3, VAR_0);
    break;
  case 3:
    VAR_3 = FUNC_1(VAR_1->sar + 0x00, VAR_0);
    FUNC_4(VAR_1->dar + 0x00, VAR_3, VAR_0);
    VAR_3 = FUNC_1(VAR_1->sar + 0x04, VAR_0);
    FUNC_4(VAR_1->dar + 0x04, VAR_3, VAR_0);
    VAR_3 = FUNC_1(VAR_1->sar + 0x08, VAR_0);
    FUNC_4(VAR_1->dar + 0x08, VAR_3, VAR_0);
    VAR_3 = FUNC_1(VAR_1->sar + 0x0c, VAR_0);
    FUNC_4(VAR_1->dar + 0x0c, VAR_3, VAR_0);
    VAR_1->sar += 16;
    if (VAR_1->chcr & (1 << 15))
      VAR_1->dar -= 16;
    if (VAR_1->chcr & (1 << 14))
      VAR_1->dar += 16;
    VAR_1->tcr -= 4;
    return;
  }
  VAR_1->tcr--;

  VAR_2 = 1 << VAR_2;
  if (VAR_1->chcr & (1 << 15))
    VAR_1->dar -= VAR_2;
  if (VAR_1->chcr & (1 << 14))
    VAR_1->dar += VAR_2;
  if (VAR_1->chcr & (1 << 13))
    VAR_1->sar -= VAR_2;
  if (VAR_1->chcr & (1 << 12))
    VAR_1->sar += VAR_2;
}
