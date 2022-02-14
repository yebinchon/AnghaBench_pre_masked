
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {void* last_packet_type; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int) ;
 int FUNC_1 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 if (VAR_6[0] == 0xff && VAR_6[1] == 0xff && VAR_6[2] == 0xff) {
  switch (VAR_6[3]) {
  case 0x50:




   VAR_6 += 16;
   VAR_7 -= 16;

   if (VAR_6[0] == 0xff || VAR_6[1] == 0xd8)
    FUNC_0(VAR_5, VAR_1,
      VAR_6, VAR_7);
   else
    VAR_5->last_packet_type = VAR_0;
   return;
  case 0x51:
   FUNC_1(VAR_5, VAR_6[11] & 1);
   if (VAR_6[9] != 0)
    VAR_5->last_packet_type = VAR_0;
   FUNC_0(VAR_5, VAR_4,
     ((void*)0), 0);
   return;
  }
 }


 FUNC_0(VAR_5, VAR_3, VAR_6, VAR_7);
}
