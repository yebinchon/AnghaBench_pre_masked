
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {int height; int bytesperline; int pixelformat; } ;
struct cafe_camera {struct v4l2_pix_format pix_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 int FUNC_0 (struct cafe_camera*,int ,int) ;
 int FUNC_1 (struct cafe_camera*,int ,int,int ) ;
 int FUNC_2 (struct cafe_camera*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct cafe_camera *VAR_19)
{
 int VAR_20;
 struct v4l2_pix_format *VAR_21 = &VAR_19->pix_format;

 VAR_20 = ((VAR_21->height << VAR_14) & VAR_13) |
  (VAR_21->bytesperline & VAR_12);
 FUNC_0(VAR_19, VAR_18, VAR_20);
 FUNC_0(VAR_19, VAR_16, 0);

 FUNC_1(VAR_19, VAR_17, VAR_21->bytesperline,
   VAR_11);



 switch (VAR_19->pix_format.pixelformat) {
 case 128:
     FUNC_1(VAR_19, VAR_15,
       VAR_2|VAR_10|VAR_9,
       VAR_0);
     break;

 case 130:
     FUNC_1(VAR_19, VAR_15,
       VAR_1|VAR_5|VAR_3,
       VAR_0);

     break;

 case 129:
     FUNC_1(VAR_19, VAR_15,
       VAR_1|VAR_6|VAR_4,
       VAR_0);
     break;

 default:
     FUNC_2(VAR_19, "Unknown format %x\n", VAR_19->pix_format.pixelformat);
     break;
 }



 FUNC_1(VAR_19, VAR_15, VAR_8,
   VAR_7);
}
