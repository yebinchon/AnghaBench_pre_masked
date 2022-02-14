
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ pseudo_palette; TYPE_2__ cmap; } ;
struct au1200fb_device {TYPE_1__ fb_info; int fb_phys; scalar_t__ fb_mem; int fb_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct au1200fb_device* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct au1200fb_device *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return -VAR_2;


 FUNC_1(((void*)0));

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
 {
  VAR_5 = &VAR_3[VAR_6];


  FUNC_6(&VAR_5->fb_info);
  if (VAR_5->fb_mem)
   FUNC_2(&VAR_4->dev,
     FUNC_0(VAR_5->fb_len),
     VAR_5->fb_mem, VAR_5->fb_phys);
  if (VAR_5->fb_info.cmap.len != 0)
   FUNC_3(&VAR_5->fb_info.cmap);
  if (VAR_5->fb_info.pseudo_palette)
   FUNC_5(VAR_5->fb_info.pseudo_palette);
 }

 FUNC_4(VAR_0, (void *)VAR_4);

 return 0;
}
