
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {scalar_t__ dmaPut; } ;
struct fb_info {struct nvidia_par* par; } ;


 scalar_t__ FUNC_0 (struct nvidia_par*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline void FUNC_3(struct fb_info *VAR_0)
{
 struct nvidia_par *VAR_1 = VAR_0->par;
 int VAR_2 = 1000000000;

 while (--VAR_2 && FUNC_0(VAR_1) != VAR_1->dmaPut) ;

 if (!VAR_2) {
  FUNC_2("nvidiafb: DMA Flush lockup\n");
  FUNC_1(VAR_0);
 }
}
