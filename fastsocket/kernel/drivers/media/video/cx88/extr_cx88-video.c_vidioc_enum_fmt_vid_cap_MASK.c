
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; int pixelformat; int description; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int fourcc; int name; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (struct file *VAR_2, void *VAR_3,
     struct v4l2_fmtdesc *VAR_4)
{
 if (FUNC_2(VAR_4->index >= FUNC_0(VAR_1)))
  return -VAR_0;

 FUNC_1(VAR_4->description,VAR_1[VAR_4->index].name,sizeof(VAR_4->description));
 VAR_4->pixelformat = VAR_1[VAR_4->index].fourcc;

 return 0;
}
