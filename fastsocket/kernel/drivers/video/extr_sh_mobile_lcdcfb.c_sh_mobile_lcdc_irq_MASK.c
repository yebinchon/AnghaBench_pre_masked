
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_priv {struct sh_mobile_lcdc_chan* ch; } ;
struct sh_mobile_lcdc_chan {int frame_end; scalar_t__ new_pan_offset; scalar_t__ pan_offset; struct sh_mobile_lcdc_priv* lcdc; scalar_t__ dma_handle; int frame_end_wait; int enabled; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sh_mobile_lcdc_chan*) ;
 int FUNC_2 (struct sh_mobile_lcdc_priv*,int ) ;
 int FUNC_3 (struct sh_mobile_lcdc_priv*,int ,unsigned long) ;
 int FUNC_4 (struct sh_mobile_lcdc_chan*,int ,scalar_t__) ;
 int FUNC_5 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 struct sh_mobile_lcdc_priv *VAR_12 = VAR_11;
 struct sh_mobile_lcdc_chan *VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 int VAR_16;
 int VAR_17;


 VAR_15 = VAR_14 = FUNC_2(VAR_12, VAR_7);




 VAR_14 &= 0xffffff00 & ~VAR_2;
 FUNC_3(VAR_12, VAR_7, VAR_14);


 VAR_16 = (FUNC_2(VAR_12, VAR_9) & (1 << 10)) ? 1 : 0;


 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_12->ch); VAR_17++) {
  VAR_13 = &VAR_12->ch[VAR_17];

  if (!VAR_13->enabled)
   continue;


  if (VAR_15 & VAR_1) {
   if (VAR_16 == FUNC_1(VAR_13)) {
    VAR_13->frame_end = 1;
    FUNC_6(&VAR_13->frame_end_wait);

    FUNC_5(VAR_12);
   }
  }


  if (VAR_15 & VAR_3) {
   unsigned long VAR_18 = FUNC_2(VAR_12, VAR_8);

   FUNC_4(VAR_13, VAR_6, VAR_13->dma_handle +
            VAR_13->new_pan_offset);
   if (FUNC_1(VAR_13))
    FUNC_3(VAR_13->lcdc, VAR_8,
        VAR_18 ^ VAR_5);
   else
    FUNC_3(VAR_13->lcdc, VAR_8,
        VAR_18 ^ VAR_4);
   VAR_13->pan_offset = VAR_13->new_pan_offset;
  }
 }

 return VAR_0;
}
