
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bottomlight; scalar_t__ toplight; int qx3_detected; } ;
struct TYPE_4__ {TYPE_1__ qx3; } ;
struct sd {TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,int,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4, VAR_5, VAR_6;

 if (!VAR_3->params.qx3.qx3_detected)
  return 0;

 VAR_5 = (VAR_3->params.qx3.bottomlight == 0) << 1;
 VAR_6 = (VAR_3->params.qx3.toplight == 0) << 3;

 VAR_4 = FUNC_0(VAR_2, VAR_1,
    0x90, 0x8f, 0x50, 0);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_0, 2, 0,
     VAR_5 | VAR_6 | 0xe0, 0);
}
