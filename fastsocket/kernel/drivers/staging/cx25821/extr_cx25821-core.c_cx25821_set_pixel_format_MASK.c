
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int pix_frmt; } ;
struct cx25821_dev {int * pixel_formats; } ;


 struct sram_channel* VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct cx25821_dev *VAR_1, int VAR_2,
         u32 VAR_3)
{
 struct sram_channel *VAR_4;

 if (VAR_2 <= 7 && VAR_2 >= 0) {
  VAR_4 = &VAR_0[VAR_2];
  FUNC_0(VAR_4->pix_frmt, VAR_3);
  VAR_1->pixel_formats[VAR_2] = VAR_3;
 }
}
