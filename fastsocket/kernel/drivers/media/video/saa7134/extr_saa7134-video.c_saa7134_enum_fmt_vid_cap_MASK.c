
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; int pixelformat; int description; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int fourcc; int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
     struct v4l2_fmtdesc *VAR_5)
{
 if (VAR_5->index >= VAR_1)
  return -VAR_0;

 FUNC_0(VAR_5->description, VAR_2[VAR_5->index].name,
  sizeof(VAR_5->description));

 VAR_5->pixelformat = VAR_2[VAR_5->index].fourcc;

 return 0;
}
