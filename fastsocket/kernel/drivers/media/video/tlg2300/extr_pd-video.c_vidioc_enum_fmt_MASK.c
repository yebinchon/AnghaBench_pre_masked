
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; int description; int pixelformat; scalar_t__ flags; int type; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int name; int fourcc; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    struct v4l2_fmtdesc *VAR_5)
{
 if (FUNC_0(VAR_2) <= VAR_5->index)
  return -VAR_0;
 VAR_5->type = VAR_1;
 VAR_5->flags = 0;
 VAR_5->pixelformat = VAR_2[VAR_5->index].fourcc;
 FUNC_1(VAR_5->description, VAR_2[VAR_5->index].name);
 return 0;
}
