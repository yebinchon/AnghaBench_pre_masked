
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {int pen_probably_down; int dev; TYPE_1__* mach_ops; } ;
struct TYPE_2__ {int (* post_sample ) (int) ;int (* pre_sample ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct wm97xx*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wm97xx*,int ) ;
 int FUNC_8 (struct wm97xx*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct wm97xx *VAR_9, int VAR_10, int *VAR_11)
{
 int VAR_12 = 5 * VAR_8;

 if (!VAR_9->pen_probably_down) {
  u16 VAR_13 = FUNC_7(VAR_9, VAR_2);
  if (!(VAR_13 & VAR_6))
   return VAR_3;
  VAR_9->pen_probably_down = 1;
 }


 if (VAR_10 & 0x8000)
  VAR_10 = ((VAR_10 & 0x7fff) + 3) << 12;

 if (VAR_9->mach_ops && VAR_9->mach_ops->pre_sample)
  VAR_9->mach_ops->pre_sample(VAR_10);
 FUNC_8(VAR_9, VAR_1,
    VAR_10 | VAR_7 | FUNC_0(VAR_8));


 FUNC_3(VAR_8);


 while ((FUNC_7(VAR_9, VAR_1) & VAR_7)
        && VAR_12) {
  FUNC_6(VAR_0);
  VAR_12--;
 }

 if (VAR_12 <= 0) {

  if (FUNC_2(VAR_9))
   VAR_9->pen_probably_down = 0;
  else
   FUNC_1(VAR_9->dev, "adc sample timeout");
  return VAR_3;
 }

 *VAR_11 = FUNC_7(VAR_9, VAR_2);
 if (VAR_9->mach_ops && VAR_9->mach_ops->post_sample)
  VAR_9->mach_ops->post_sample(VAR_10);


 if ((*VAR_11 & VAR_5) != VAR_10) {
  FUNC_1(VAR_9->dev, "adc wrong sample, read %x got %x", VAR_10,
  *VAR_11 & VAR_5);
  return VAR_3;
 }

 if (!(*VAR_11 & VAR_6)) {
  VAR_9->pen_probably_down = 0;
  return VAR_3;
 }

 return VAR_4;
}
