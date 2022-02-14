
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int* jpeg_hdr; } ;
struct gspca_dev {size_t curr_mode; scalar_t__ empty_packet; } ;
struct TYPE_2__ {scalar_t__ pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_6,
   u8 *VAR_7,
   int VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_6;

 if (VAR_5[VAR_6->curr_mode].pixelformat ==
     VAR_4) {
  if (VAR_8 >= 2 &&
      VAR_7[0] == 0xff &&
      VAR_7[1] == 0xd8) {
   FUNC_0(VAR_6, VAR_3,
     ((void*)0), 0);
   FUNC_0(VAR_6, VAR_0,
     VAR_9->jpeg_hdr, VAR_2);


   VAR_8 -= 2;
   VAR_7 += 2;
  }
 } else {

  if (VAR_6->empty_packet) {
   FUNC_0(VAR_6, VAR_3,
      ((void*)0), 0);
   FUNC_0(VAR_6, VAR_0,
     ((void*)0), 0);
   VAR_6->empty_packet = 0;
  }
 }
 FUNC_0(VAR_6, VAR_1, VAR_7, VAR_8);
}
