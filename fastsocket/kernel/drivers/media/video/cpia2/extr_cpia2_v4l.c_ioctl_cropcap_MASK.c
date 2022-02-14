
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int numerator; int denominator; } ;
struct TYPE_6__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_5__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_4__ pixelaspect; TYPE_2__ defrect; TYPE_1__ bounds; } ;
struct TYPE_7__ {int height; int width; } ;
struct camera_data {TYPE_3__ vw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2,struct camera_data *VAR_3)
{
 struct v4l2_cropcap *VAR_4 = VAR_2;

 if (VAR_4->type != VAR_1)
        return -VAR_0;

 VAR_4->bounds.left = 0;
 VAR_4->bounds.top = 0;
 VAR_4->bounds.width = VAR_3->vw.width;
 VAR_4->bounds.height = VAR_3->vw.height;
 VAR_4->defrect.left = 0;
 VAR_4->defrect.top = 0;
 VAR_4->defrect.width = VAR_3->vw.width;
 VAR_4->defrect.height = VAR_3->vw.height;
 VAR_4->pixelaspect.numerator = 1;
 VAR_4->pixelaspect.denominator = 1;

 return 0;
}
