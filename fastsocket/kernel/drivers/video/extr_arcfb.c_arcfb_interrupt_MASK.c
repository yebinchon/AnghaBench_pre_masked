
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct arcfb_par* par; } ;
struct arcfb_par {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (struct arcfb_par*) ;
 int FUNC_1 (struct arcfb_par*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct fb_info *VAR_7 = VAR_6;
 unsigned char VAR_8;
 struct arcfb_par *VAR_9 = VAR_7->par;

 VAR_8 = FUNC_0(VAR_9);

 if (!(VAR_8 & VAR_3))
  return VAR_1;

 FUNC_1(VAR_9, VAR_2);

 FUNC_2(&VAR_9->lock);
        if (FUNC_4(&VAR_4)) {
                FUNC_5(&VAR_4);
        }
 FUNC_3(&VAR_9->lock);

 return VAR_0;
}
