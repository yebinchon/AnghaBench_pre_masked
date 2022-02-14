
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvfb_par {int update; int fb_ready; int dwork; } ;
struct hv_device {int channel; } ;
struct fb_info {struct hvfb_par* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 struct fb_info* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (struct hv_device*,int *) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hv_device *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_2(VAR_0);
 struct hvfb_par *VAR_2 = VAR_1->par;

 VAR_2->update = 0;
 VAR_2->fb_ready = 0;

 FUNC_5(VAR_1);
 FUNC_0(&VAR_2->dwork);

 FUNC_6(VAR_0->channel);
 FUNC_3(VAR_0, ((void*)0));

 FUNC_4(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}
