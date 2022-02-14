
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int chip_revision; } ;
struct gspca_dev {int input_dev; int last_packet_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_7,
   u8 *VAR_8,
   int VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_7;

 VAR_9--;
 switch (*VAR_8++) {
 case 0:
  FUNC_1(VAR_7, VAR_5, ((void*)0), 0);


  if (VAR_9 < 2) {
   FUNC_0(VAR_1, "Short SOF packet, ignoring");
   VAR_7->last_packet_type = VAR_0;
   return;
  }
  if (VAR_8[1] & 0x10) {

   FUNC_1(VAR_7, VAR_2, VAR_8, VAR_9);
  } else {

   if (VAR_10->chip_revision == VAR_6) {
    VAR_8 += 20;
    VAR_9 -= 20;
   } else {
    VAR_8 += 16;
    VAR_9 -= 16;
   }
   FUNC_1(VAR_7, VAR_2, VAR_8, VAR_9);
  }
  return;
 case 0xff:
  return;
 }
 FUNC_1(VAR_7, VAR_3, VAR_8, VAR_9);
}
