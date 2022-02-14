
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int width; int height; } ;
struct sd {TYPE_1__ gspca_dev; scalar_t__ first_frame; } ;
struct gspca_dev {int image_len; int last_packet_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;

 FUNC_0(VAR_5, VAR_2, VAR_6, VAR_7);


 if (VAR_7 < VAR_4) {


  if (VAR_8->first_frame) {
   VAR_8->first_frame--;
   if (VAR_5->image_len <
      VAR_8->gspca_dev.width * VAR_8->gspca_dev.height)
    VAR_5->last_packet_type = VAR_0;
  }
  FUNC_0(VAR_5, VAR_3, ((void*)0), 0);
  FUNC_0(VAR_5, VAR_1, ((void*)0), 0);
 }
}
