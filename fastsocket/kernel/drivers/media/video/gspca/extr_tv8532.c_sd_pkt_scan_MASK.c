
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int packet; } ;
struct gspca_dev {int height; int width; scalar_t__ empty_packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3,
   u8 *VAR_4,
   int VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;
 int VAR_7, VAR_8;

 VAR_7 = VAR_8 = VAR_1;
 if (VAR_3->empty_packet) {
  VAR_3->empty_packet = 0;
  VAR_6->packet = VAR_3->height / 2;
  VAR_7 = VAR_0;
 } else if (VAR_6->packet == 0)
  return;
 VAR_6->packet--;
 if (VAR_6->packet == 0)
  VAR_8 = VAR_2;
 FUNC_0(VAR_3, VAR_7,
   VAR_4 + 2, VAR_3->width);
 FUNC_0(VAR_3, VAR_8,
   VAR_4 + VAR_3->width + 5, VAR_3->width);
}
