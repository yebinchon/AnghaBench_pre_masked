
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;
typedef int u32 ;
struct pxa168fb_info {scalar_t__ reg_base; int dev; int clk; } ;
struct fb_videomode {int pixclock; int refresh; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (long long,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pxa168fb_info *VAR_1,
         const struct fb_videomode *VAR_2)
{
 int VAR_3;
 int VAR_4;
 u64 VAR_5;
 u32 VAR_6 = 0;
 if (!VAR_2 || !VAR_2->pixclock || !VAR_2->refresh) {
  FUNC_1(VAR_1->dev, "Input refresh or pixclock is wrong.\n");
  return;
 }




 VAR_6 = 0x80000000;




 VAR_5 = 1000000000000ll;
 FUNC_3(VAR_5, VAR_2->pixclock);
 VAR_4 = (u32)VAR_5;

 VAR_3 = FUNC_0(VAR_1->clk) / VAR_4;


 if (VAR_3 < 2) {
  FUNC_2(VAR_1->dev, "Warning: clock source is too slow."
    "Try smaller resolution\n");
  VAR_3 = 2;
 }




 VAR_6 |= VAR_3;
 FUNC_4(VAR_6, VAR_1->reg_base + VAR_0);
}
