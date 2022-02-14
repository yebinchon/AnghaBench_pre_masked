
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; int pixelformat; int* description; int flags; } ;
struct TYPE_4__ {int nmodes; TYPE_1__* cam_mode; } ;
struct gspca_dev {TYPE_2__ cam; } ;
struct file {int dummy; } ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {scalar_t__ pixelformat; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_fmtdesc *VAR_4)
{
 struct gspca_dev *VAR_5 = VAR_3;
 int VAR_6, VAR_7, VAR_8;
 __u32 VAR_9[8];


 VAR_8 = 0;
 VAR_7 = 0;
 for (VAR_6 = VAR_5->cam.nmodes; --VAR_6 >= 0; ) {
  VAR_9[VAR_8] = VAR_5->cam.cam_mode[VAR_6].pixelformat;
  VAR_7 = 0;
  for (;;) {
   if (VAR_9[VAR_7] == VAR_9[VAR_8])
    break;
   VAR_7++;
  }
  if (VAR_7 == VAR_8) {
   if (VAR_4->index == VAR_8)
    break;
   VAR_8++;
   if (VAR_8 >= FUNC_0(VAR_9))
    return -VAR_0;
  }
 }
 if (VAR_6 < 0)
  return -VAR_0;

 VAR_4->pixelformat = VAR_9[VAR_8];
 if (FUNC_1(VAR_9[VAR_8]))
  VAR_4->flags = VAR_1;
 VAR_4->description[0] = VAR_4->pixelformat & 0xff;
 VAR_4->description[1] = (VAR_4->pixelformat >> 8) & 0xff;
 VAR_4->description[2] = (VAR_4->pixelformat >> 16) & 0xff;
 VAR_4->description[3] = VAR_4->pixelformat >> 24;
 VAR_4->description[4] = '\0';
 return 0;
}
