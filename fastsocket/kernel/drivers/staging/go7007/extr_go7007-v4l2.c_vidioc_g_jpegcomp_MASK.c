
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int quality; int jpeg_markers; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_jpegcompression*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_jpegcompression *VAR_4)
{
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->quality = 50;
 VAR_4->jpeg_markers = VAR_0 |
    VAR_1;

 return 0;
}
