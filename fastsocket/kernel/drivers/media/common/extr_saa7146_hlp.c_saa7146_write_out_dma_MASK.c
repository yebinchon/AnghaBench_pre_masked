
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_video_dma {int base_odd; int base_even; int prot_addr; int pitch; int base_page; int num_line_byte; } ;
struct saa7146_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct saa7146_dev*,int,int) ;

void FUNC_1(struct saa7146_dev* VAR_3, int VAR_4, struct saa7146_video_dma* VAR_5)
{
 int VAR_6 = 0;

 if( VAR_4 < 1 || VAR_4 > 3) {
  return;
 }


 VAR_6 = (VAR_4-1)*0x18;

 FUNC_0(VAR_3, VAR_6, VAR_5->base_odd);
 FUNC_0(VAR_3, VAR_6+0x04, VAR_5->base_even);
 FUNC_0(VAR_3, VAR_6+0x08, VAR_5->prot_addr);
 FUNC_0(VAR_3, VAR_6+0x0c, VAR_5->pitch);
 FUNC_0(VAR_3, VAR_6+0x10, VAR_5->base_page);
 FUNC_0(VAR_3, VAR_6+0x14, VAR_5->num_line_byte);


 FUNC_0(VAR_3, VAR_2, (VAR_0<<(VAR_4-1))|(VAR_1<<(VAR_4-1)));
}
