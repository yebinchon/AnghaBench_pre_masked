
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_2__ bounds; TYPE_2__ defrect; TYPE_1__ pixelaspect; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {scalar_t__ is_50hz; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
   struct v4l2_cropcap *VAR_4)
{
 struct cx18 *VAR_5 = ((struct cx18_open_id *)VAR_3)->cx;

 if (VAR_4->type != VAR_1)
  return -VAR_0;
 VAR_4->bounds.top = VAR_4->bounds.left = 0;
 VAR_4->bounds.width = 720;
 VAR_4->bounds.height = VAR_5->is_50hz ? 576 : 480;
 VAR_4->pixelaspect.numerator = VAR_5->is_50hz ? 59 : 10;
 VAR_4->pixelaspect.denominator = VAR_5->is_50hz ? 54 : 11;
 VAR_4->defrect = VAR_4->bounds;
 return 0;
}
