
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int quality; int jpeg_markers; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
    struct v4l2_jpegcompression *VAR_5)
{
 if (VAR_5->quality != 50 ||
   VAR_5->jpeg_markers != (VAR_1 |
      VAR_2))
  return -VAR_0;

 return 0;
}
