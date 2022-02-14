
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_4__ {int win; } ;
struct saa7146_fh {TYPE_2__ ov; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 VAR_2->fmt.win = ((struct saa7146_fh *)VAR_1)->ov.win;
 return 0;
}
