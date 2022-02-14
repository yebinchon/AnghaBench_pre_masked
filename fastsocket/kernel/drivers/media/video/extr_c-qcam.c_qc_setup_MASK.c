
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int brightness; int ccd_height; int ccd_width; int top; int left; int contrast; int whitebal; } ;


 int FUNC_0 (struct qcam_device*) ;
 int FUNC_1 (struct qcam_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct qcam_device *VAR_0)
{
 FUNC_0(VAR_0);


 FUNC_1(VAR_0, 11, VAR_0->brightness);



 FUNC_1(VAR_0, 17, VAR_0->ccd_height);
 FUNC_1(VAR_0, 19, VAR_0->ccd_width / 2);


 FUNC_1(VAR_0, 0xd, VAR_0->top);
 FUNC_1(VAR_0, 0xf, VAR_0->left);


 FUNC_1(VAR_0, 0x19, VAR_0->contrast);
 FUNC_1(VAR_0, 0x1f, VAR_0->whitebal);


 FUNC_1(VAR_0, 45, 2);
}
