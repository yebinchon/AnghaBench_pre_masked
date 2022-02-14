
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct bttv_fh {int dummy; } ;


 int FUNC_0 (struct bttv_fh*,int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
      struct v4l2_format *VAR_2)
{
 struct bttv_fh *VAR_3 = VAR_1;

 return FUNC_0(VAR_3, &VAR_2->fmt.win,
                     1,
                     0);
}
