
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivi_fmt {int fourcc; int name; } ;
struct v4l2_fmtdesc {size_t index; int pixelformat; int description; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (struct vivi_fmt*) ;
 int VAR_0 ;
 struct vivi_fmt* VAR_1 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_fmtdesc *VAR_4)
{
 struct vivi_fmt *VAR_5;

 if (VAR_4->index >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5 = &VAR_1[VAR_4->index];

 FUNC_1(VAR_4->description, VAR_5->name, sizeof(VAR_4->description));
 VAR_4->pixelformat = VAR_5->fourcc;
 return 0;
}
