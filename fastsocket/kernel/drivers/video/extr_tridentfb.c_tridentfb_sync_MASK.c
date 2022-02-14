
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int (* wait_engine ) (struct tridentfb_par*) ;} ;
struct fb_info {int flags; struct tridentfb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct tridentfb_par*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_1)
{
 struct tridentfb_par *VAR_2 = VAR_1->par;

 if (!(VAR_1->flags & VAR_0))
  VAR_2->wait_engine(VAR_2);
 return 0;
}
