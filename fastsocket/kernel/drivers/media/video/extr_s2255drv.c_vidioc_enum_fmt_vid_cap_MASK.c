
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; int pixelformat; int description; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int fourcc; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
          struct v4l2_fmtdesc *VAR_4)
{
 int VAR_5 = 0;
 if (VAR_4)
  VAR_5 = VAR_4->index;

 if (VAR_5 >= FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_1(4, "name %s\n", VAR_1[VAR_5].name);
 FUNC_2(VAR_4->description, VAR_1[VAR_5].name, sizeof(VAR_4->description));
 VAR_4->pixelformat = VAR_1[VAR_5].fourcc;
 return 0;
}
