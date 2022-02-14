
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ packet_nr; } ;
struct gspca_dev {int width; int height; int last_packet_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;
 if (!(VAR_6[0] | VAR_6[1] | VAR_6[2] | VAR_6[3] | VAR_6[4] | VAR_6[5] | VAR_6[6] | VAR_6[7]) &&
     (VAR_6[8] & 0x08)) {
  FUNC_2(VAR_5, (VAR_6[8] >> 2) & 1);
  if (VAR_6[8] & 0x80) {

   if ((VAR_6[9] + 1) * 8 != VAR_5->width ||
       (VAR_6[10] + 1) * 8 != VAR_5->height) {
    FUNC_0(VAR_1, "Invalid frame size, got: %dx%d,"
     " requested: %dx%d\n",
     (VAR_6[9] + 1) * 8, (VAR_6[10] + 1) * 8,
     VAR_5->width, VAR_5->height);
    VAR_5->last_packet_type = VAR_0;
    return;
   }

   FUNC_1(VAR_5, VAR_4, VAR_6, 11);
   return;
  } else {

   FUNC_1(VAR_5, VAR_2, VAR_6, 0);
   VAR_8->packet_nr = 0;
  }
 }


 VAR_7--;


 FUNC_1(VAR_5, VAR_3, VAR_6, VAR_7);
}
