
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {struct broadsheetfb_par* par; } ;
struct broadsheetfb_par {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ,int,char*,struct broadsheetfb_par*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_5)
{
 int VAR_6;
 struct broadsheetfb_par *VAR_7 = VAR_5->par;

 VAR_6 = FUNC_2(FUNC_0(VAR_2), VAR_4,
    VAR_0|VAR_1,
    "AM300", VAR_7);
 if (VAR_6)
  FUNC_1(&VAR_3->dev, "request_irq failed: %d\n", VAR_6);

 return VAR_6;
}
