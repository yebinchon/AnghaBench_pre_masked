
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_jpegcompression {int quality; int jpeg_markers; int COM_len; int APP_len; int COM_data; int APP_data; int APPn; } ;
struct TYPE_3__ {int inhibit_htables; } ;
struct TYPE_4__ {TYPE_1__ compression; } ;
struct camera_data {int COM_len; int COM_data; int APP_len; int APP_data; int APPn; TYPE_2__ params; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct v4l2_jpegcompression*,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_5,struct camera_data *VAR_6)
{
 struct v4l2_jpegcompression *VAR_7 = VAR_5;

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->quality = 80;

 VAR_7->jpeg_markers = VAR_3 | VAR_4;
 if(!VAR_6->params.compression.inhibit_htables) {
  VAR_7->jpeg_markers |= VAR_2;
 }

 VAR_7->APPn = VAR_6->APPn;
 VAR_7->APP_len = VAR_6->APP_len;
 if(VAR_6->APP_len > 0) {
  FUNC_1(VAR_7->APP_data, VAR_6->APP_data, VAR_6->APP_len);
  VAR_7->jpeg_markers |= VAR_1;
 }

 VAR_7->COM_len = VAR_6->COM_len;
 if(VAR_6->COM_len > 0) {
  FUNC_1(VAR_7->COM_data, VAR_6->COM_data, VAR_6->COM_len);
  VAR_7->jpeg_markers |= VAR_0;
 }

 FUNC_0("G_JPEGCOMP APP_len:%d COM_len:%d\n",
     VAR_7->APP_len, VAR_7->COM_len);

 return 0;
}
