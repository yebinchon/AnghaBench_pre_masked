
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmagbbfb_par {int dummy; } ;
struct TYPE_2__ {unsigned int len; } ;
struct fb_info {TYPE_1__ cmap; struct pmagbbfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pmagbbfb_par*,int ,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_3, unsigned int VAR_4,
         unsigned int VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, struct fb_info *VAR_8)
{
 struct pmagbbfb_par *VAR_9 = VAR_8->par;

 FUNC_0(VAR_3 >= VAR_8->cmap.len);

 VAR_4 >>= 8;
 VAR_5 >>= 8;
 VAR_6 >>= 8;

 FUNC_2();
 FUNC_1(VAR_9, VAR_1, VAR_3);
 FUNC_1(VAR_9, VAR_0, 0x00);
 FUNC_3();
 FUNC_1(VAR_9, VAR_2, VAR_4);
 FUNC_3();
 FUNC_1(VAR_9, VAR_2, VAR_5);
 FUNC_3();
 FUNC_1(VAR_9, VAR_2, VAR_6);

 return 0;
}
