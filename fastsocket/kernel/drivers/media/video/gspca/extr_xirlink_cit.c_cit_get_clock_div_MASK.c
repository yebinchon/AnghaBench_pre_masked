
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int width; int height; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int,int) ;
 int FUNC_1 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1)
{
 int VAR_2 = 7;
 int VAR_3[8] = { 30, 25, 20, 15, 12, 8, 6, 3 };
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 while (VAR_2 > 3 &&
   1000 * VAR_4 >
   VAR_1->width * VAR_1->height *
   VAR_3[VAR_2 - 1] * 3 / 2)
  VAR_2--;

 FUNC_0(VAR_0,
        "PacketSize: %d, res: %dx%d -> using clockdiv: %d (%d fps)",
        VAR_4, VAR_1->width, VAR_1->height, VAR_2,
        VAR_3[VAR_2]);

 return VAR_2;
}
