
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcam_device {int brightness; int height; int transfer_scale; int port_mode; int bpp; int width; int top; int left; int contrast; int whitebal; int status; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qcam_device*,int) ;
 int FUNC_2 (struct qcam_device*) ;

__attribute__((used)) static void FUNC_3(struct qcam_device *VAR_4)
{
 int VAR_5;
 int VAR_6;

 FUNC_2(VAR_4);





 FUNC_1(VAR_4, 0xb);
 FUNC_1(VAR_4, VAR_4->brightness);

 VAR_5 = VAR_4->height / VAR_4->transfer_scale;
 FUNC_1(VAR_4, 0x11);
 FUNC_1(VAR_4, VAR_5);
 if ((VAR_4->port_mode & VAR_1) == VAR_3 && VAR_4->bpp == 6) {





  VAR_5 = VAR_4->width;
  VAR_6 = VAR_4->transfer_scale * 4;
 } else {
  VAR_5 = VAR_4->width * VAR_4->bpp;
  VAR_6 = (((VAR_4->port_mode & VAR_1) == VAR_0) ? 24 : 8) *
      VAR_4->transfer_scale;
 }
 VAR_5 = FUNC_0(VAR_5, VAR_6);
 FUNC_1(VAR_4, 0x13);
 FUNC_1(VAR_4, VAR_5);


 FUNC_1(VAR_4, 0xd);
 FUNC_1(VAR_4, VAR_4->top);
 FUNC_1(VAR_4, 0xf);
 FUNC_1(VAR_4, VAR_4->left / 2);

 FUNC_1(VAR_4, 0x19);
 FUNC_1(VAR_4, VAR_4->contrast);
 FUNC_1(VAR_4, 0x1f);
 FUNC_1(VAR_4, VAR_4->whitebal);



 VAR_4->status &= (~VAR_2);
}
