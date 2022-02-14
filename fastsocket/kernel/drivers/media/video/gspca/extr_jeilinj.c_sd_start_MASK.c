
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int work_struct; int work_thread; int quality; int jpeg_hdr; } ;
struct gspca_dev {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5;


 FUNC_3(VAR_4->jpeg_hdr, VAR_3->height, VAR_3->width,
   0x21);
 FUNC_4(VAR_4->jpeg_hdr, VAR_4->quality);
 FUNC_0(VAR_1, "Start streaming at 320x240");
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0, "Start streaming command failed");
  return VAR_5;
 }

 VAR_4->work_thread = FUNC_1(VAR_2);
 FUNC_5(VAR_4->work_thread, &VAR_4->work_struct);

 return 0;
}
