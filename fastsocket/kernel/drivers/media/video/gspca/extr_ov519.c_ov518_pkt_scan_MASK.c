
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int packet_nr; } ;
struct gspca_dev {scalar_t__ last_packet_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;



 if ((!(VAR_6[0] | VAR_6[1] | VAR_6[2] | VAR_6[3] | VAR_6[5])) && VAR_6[6]) {
  FUNC_2(VAR_5, (VAR_6[6] >> 1) & 1);
  FUNC_1(VAR_5, VAR_4, ((void*)0), 0);
  FUNC_1(VAR_5, VAR_2, ((void*)0), 0);
  VAR_8->packet_nr = 0;
 }

 if (VAR_5->last_packet_type == VAR_0)
  return;


 if (VAR_7 & 7) {
  VAR_7--;
  if (VAR_8->packet_nr == VAR_6[VAR_7])
   VAR_8->packet_nr++;



  else if (VAR_8->packet_nr == 0 || VAR_6[VAR_7]) {
   FUNC_0(VAR_1, "Invalid packet nr: %d (expect: %d)",
    (int)VAR_6[VAR_7], (int)VAR_8->packet_nr);
   VAR_5->last_packet_type = VAR_0;
   return;
  }
 }


 FUNC_1(VAR_5, VAR_3, VAR_6, VAR_7);
}
