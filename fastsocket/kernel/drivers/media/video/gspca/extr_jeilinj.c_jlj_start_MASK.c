
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int member_0; int member_1; } ;
struct jlj_command {int member_1; scalar_t__ ack_wanted; int instruction; TYPE_1__ member_0; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct jlj_command*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1)
{
 int VAR_2;
 int VAR_3 = -1;
 u8 VAR_4 = 0xff;
 struct jlj_command VAR_5[] = {
  {{0x71, 0x81}, 0},
  {{0x70, 0x05}, 0},
  {{0x95, 0x70}, 1},
  {{0x71, 0x81}, 0},
  {{0x70, 0x04}, 0},
  {{0x95, 0x70}, 1},
  {{0x71, 0x00}, 0},
  {{0x70, 0x08}, 0},
  {{0x95, 0x70}, 1},
  {{0x94, 0x02}, 0},
  {{0xde, 0x24}, 0},
  {{0x94, 0x02}, 0},
  {{0xdd, 0xf0}, 0},
  {{0x94, 0x02}, 0},
  {{0xe3, 0x2c}, 0},
  {{0x94, 0x02}, 0},
  {{0xe4, 0x00}, 0},
  {{0x94, 0x02}, 0},
  {{0xe5, 0x00}, 0},
  {{0x94, 0x02}, 0},
  {{0xe6, 0x2c}, 0},
  {{0x94, 0x03}, 0},
  {{0xaa, 0x00}, 0},
  {{0x71, 0x1e}, 0},
  {{0x70, 0x06}, 0},
  {{0x71, 0x80}, 0},
  {{0x70, 0x07}, 0}
 };
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_5); VAR_2++) {
  VAR_3 = FUNC_3(VAR_1, VAR_5[VAR_2].instruction);
  if (VAR_3 < 0)
   return VAR_3;
  if (VAR_5[VAR_2].ack_wanted)
   VAR_3 = FUNC_2(VAR_1, VAR_4);
  if (VAR_3 < 0)
   return VAR_3;
 }
 FUNC_1(VAR_0, "jlj_start retval is %d", VAR_3);
 return VAR_3;
}
