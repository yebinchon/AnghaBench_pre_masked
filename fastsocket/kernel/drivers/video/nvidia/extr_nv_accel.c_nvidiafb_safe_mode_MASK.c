
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvidia_par {int lockup; } ;
struct TYPE_2__ {int scan_align; } ;
struct fb_info {TYPE_1__ pixmap; struct nvidia_par* par; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct fb_info *VAR_0)
{
 struct nvidia_par *VAR_1 = VAR_0->par;

 FUNC_0();
 VAR_0->pixmap.scan_align = 1;
 VAR_1->lockup = 1;
}
