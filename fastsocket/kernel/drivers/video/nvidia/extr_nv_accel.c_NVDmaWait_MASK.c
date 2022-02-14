
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int dmaFree; int lockup; int dmaPut; int dmaMax; int dmaCurrent; } ;
struct fb_info {struct nvidia_par* par; } ;


 int FUNC_0 (struct nvidia_par*,int) ;
 int FUNC_1 (struct nvidia_par*) ;
 int VAR_0 ;
 int FUNC_2 (struct nvidia_par*,int) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_1, int VAR_2)
{
 struct nvidia_par *VAR_3 = VAR_1->par;
 int VAR_4;
 int VAR_5 = 1000000000, VAR_6;
 VAR_2++;

 while (VAR_3->dmaFree < VAR_2 && --VAR_5 && !VAR_3->lockup) {
  VAR_4 = FUNC_1(VAR_3);

  if (VAR_3->dmaPut >= VAR_4) {
   VAR_3->dmaFree = VAR_3->dmaMax - VAR_3->dmaCurrent;
   if (VAR_3->dmaFree < VAR_2) {
    FUNC_0(VAR_3, 0x20000000);
    if (VAR_4 <= VAR_0) {
     if (VAR_3->dmaPut <= VAR_0)
      FUNC_2(VAR_3, VAR_0 + 1);
     VAR_6 = 1000000000;
     do {
      VAR_4 = FUNC_1(VAR_3);
     } while (--VAR_6 && VAR_4 <= VAR_0);
     if (!VAR_6) {
      FUNC_4("DMA Get lockup\n");
      VAR_3->lockup = 1;
     }
    }
    FUNC_2(VAR_3, VAR_0);
    VAR_3->dmaCurrent = VAR_3->dmaPut = VAR_0;
    VAR_3->dmaFree = VAR_4 - (VAR_0 + 1);
   }
  } else
   VAR_3->dmaFree = VAR_4 - VAR_3->dmaCurrent - 1;
 }

 if (!VAR_5) {
  FUNC_4("nvidiafb: DMA Wait Lockup\n");
  FUNC_3(VAR_1);
 }
}
