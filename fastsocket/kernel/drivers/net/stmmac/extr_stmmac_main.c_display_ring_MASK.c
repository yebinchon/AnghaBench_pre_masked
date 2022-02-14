
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dma_desc {int dummy; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct dma_desc*) ;

__attribute__((used)) static void FUNC_2(struct dma_desc *VAR_0, int VAR_1)
{
 struct tmp_s {
  u64 a;
  unsigned int b;
  unsigned int c;
 };
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct tmp_s *VAR_3 = (struct tmp_s *)(VAR_0 + VAR_2);
  FUNC_0("\t%d [0x%x]: DES0=0x%x DES1=0x%x BUF1=0x%x BUF2=0x%x",
         VAR_2, (unsigned int)FUNC_1(&VAR_0[VAR_2]),
         (unsigned int)(VAR_3->a), (unsigned int)((VAR_3->a) >> 32),
         VAR_3->b, VAR_3->c);
  FUNC_0("\n");
 }
}
