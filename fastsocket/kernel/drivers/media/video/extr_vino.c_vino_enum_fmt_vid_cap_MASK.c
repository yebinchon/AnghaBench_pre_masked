
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; int description; int pixelformat; } ;
struct file {int dummy; } ;
struct TYPE_2__ {size_t description; int pixelformat; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ,size_t) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
         struct v4l2_fmtdesc *VAR_5)
{
 FUNC_0("format index = %d\n", VAR_5->index);

 if (VAR_5->index >= VAR_1)
  return -VAR_0;
 FUNC_0("format name = %s\n", VAR_2[VAR_5->index].description);

 VAR_5->pixelformat = VAR_2[VAR_5->index].pixelformat;
 FUNC_1(VAR_5->description, VAR_2[VAR_5->index].description);
 return 0;
}
