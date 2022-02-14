
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int quality; int jpeg_hdr; } ;
struct gspca_dev {int width; int height; } ;


 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;


 FUNC_4(VAR_1->jpeg_hdr, VAR_0->height, VAR_0->width,
   0x22);
 FUNC_5(VAR_1->jpeg_hdr, VAR_1->quality);

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 return 0;
}
