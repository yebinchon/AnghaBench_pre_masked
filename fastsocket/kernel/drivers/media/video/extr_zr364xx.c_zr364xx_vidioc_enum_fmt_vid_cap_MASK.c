
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {scalar_t__ index; int pixelformat; int description; int flags; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int fourcc; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3,
           void *VAR_4, struct v4l2_fmtdesc *VAR_5)
{
 if (VAR_5->index > 0)
  return -VAR_0;
 VAR_5->flags = VAR_1;
 FUNC_0(VAR_5->description, VAR_2[0].name);
 VAR_5->pixelformat = VAR_2[0].fourcc;
 return 0;
}
