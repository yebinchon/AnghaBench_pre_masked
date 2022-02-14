
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_pmem_region {unsigned long paddr; unsigned long y_off; unsigned long cbcr_off; } ;
struct axiout {unsigned long output1buffer1_y_phy; unsigned long output2buffer1_y_phy; } ;
struct axidata {int bufnum1; int bufnum2; struct msm_pmem_region* region; } ;


 int FUNC_0 (char*,unsigned long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3,
 struct axidata *VAR_4, struct axiout *VAR_5)
{
 struct msm_pmem_region *VAR_6;
 unsigned long *VAR_7;
 int VAR_8;

 int VAR_9 = 0;

 if (VAR_3 == VAR_0 || VAR_3 == VAR_1) {
  VAR_6 = VAR_4->region;

  FUNC_0("bufnum1 = %d\n", VAR_4->bufnum1);
  FUNC_0("config_axi1: O1, phy = 0x%lx, y_off = %d, cbcr_off =%d\n",
   VAR_6->paddr, VAR_6->y_off, VAR_6->cbcr_off);

  VAR_7 = &VAR_5->output1buffer1_y_phy;
  for (VAR_8 = 0; VAR_8 < VAR_4->bufnum1; VAR_8++) {
   *VAR_7 = VAR_6->paddr + VAR_6->y_off;
   VAR_7++;
   *VAR_7 = VAR_6->paddr + VAR_6->cbcr_off;

   VAR_7++;
   VAR_6++;
  }

  VAR_6--;
  for (VAR_8 = 0; VAR_8 < (8 - VAR_4->bufnum1); VAR_8++) {
   *VAR_7 = VAR_6->paddr + VAR_6->y_off;
   VAR_7++;
   *VAR_7 = VAR_6->paddr + VAR_6->cbcr_off;
   VAR_7++;
  }
 }

 if (VAR_3 == VAR_2 || VAR_3 == VAR_1) {
  VAR_6 = &(VAR_4->region[VAR_4->bufnum1]);

  FUNC_0("bufnum2 = %d\n", VAR_4->bufnum2);
  FUNC_0("config_axi2: O2, phy = 0x%lx, y_off = %d, cbcr_off =%d\n",
   VAR_6->paddr, VAR_6->y_off, VAR_6->cbcr_off);

  VAR_7 = &VAR_5->output2buffer1_y_phy;
  for (VAR_8 = 0; VAR_8 < VAR_4->bufnum2; VAR_8++) {
   *VAR_7 = VAR_6->paddr + VAR_6->y_off;
   VAR_7++;
   *VAR_7 = VAR_6->paddr + VAR_6->cbcr_off;

   VAR_7++;
   VAR_6++;
  }

  VAR_6--;
  for (VAR_8 = 0; VAR_8 < (8 - VAR_4->bufnum2); VAR_8++) {
   *VAR_7 = VAR_6->paddr + VAR_6->y_off;
   VAR_7++;
   *VAR_7 = VAR_6->paddr + VAR_6->cbcr_off;
   VAR_7++;
  }
 }

 return VAR_9;
}
