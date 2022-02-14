
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccdc_vertical_dft {int* dft_corr_vert; int* dft_corr_horz; int* dft_corr_sub1; int* dft_corr_sub2; int* dft_corr_sub3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

int FUNC_3(int VAR_9, struct ccdc_vertical_dft *VAR_10)
{


 u32 VAR_11, VAR_12 = 1000;

 FUNC_2(VAR_10->dft_corr_vert[VAR_9], VAR_1);
 FUNC_2(VAR_10->dft_corr_horz[VAR_9], VAR_2);
 FUNC_2(VAR_10->dft_corr_sub1[VAR_9], VAR_3);
 FUNC_2(VAR_10->dft_corr_sub2[VAR_9], VAR_4);
 FUNC_2(VAR_10->dft_corr_sub3[VAR_9], VAR_5);

 VAR_11 = FUNC_1(VAR_6) | VAR_0;
 FUNC_2(VAR_11, VAR_6);





 while (FUNC_1(VAR_6) & VAR_0)
  VAR_12--;





 if (VAR_12) {
  FUNC_0(VAR_8, "defect table write timeout !!!\n");
  return -1;
 }
 return 0;
}
