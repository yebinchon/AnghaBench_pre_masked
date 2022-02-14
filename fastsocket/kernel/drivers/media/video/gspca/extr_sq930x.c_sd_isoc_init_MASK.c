
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ do_ctrl; } ;
struct TYPE_2__ {int bulk_nurbs; int bulk_size; } ;
struct gspca_dev {int width; int height; TYPE_1__ cam; } ;



__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 VAR_0->cam.bulk_nurbs = 1;
 VAR_1->do_ctrl = 0;
 VAR_0->cam.bulk_size = VAR_0->width * VAR_0->height + 8;
 return 0;
}
