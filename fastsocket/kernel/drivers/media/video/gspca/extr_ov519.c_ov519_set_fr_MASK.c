
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_14__ {size_t curr_mode; } ;
struct sd {int frame_rate; scalar_t__ sensor; TYPE_7__ gspca_dev; } ;
struct TYPE_13__ {int member_0; int member_1; int member_2; } ;
struct TYPE_12__ {int member_0; int member_1; int member_2; } ;
struct TYPE_11__ {int member_0; int member_1; int member_2; } ;
struct TYPE_10__ {int member_0; int member_1; int member_2; } ;
struct TYPE_9__ {int member_0; int member_1; int member_2; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sd*,int ,int) ;
 int FUNC_1 (struct sd*,int,int const) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_3)
{
 int VAR_4;
 u8 VAR_5;





 static const u8 VAR_6[2][6][3] = {
  {{0x04, 0xff, 0x00},
   {0x04, 0x1f, 0x00},
   {0x04, 0x1b, 0x00},
   {0x04, 0x15, 0x00},
   {0x04, 0x09, 0x00},
   {0x04, 0x01, 0x00}},
  {{0x0c, 0xff, 0x00},
   {0x0c, 0x1f, 0x00},
   {0x0c, 0x1b, 0x00},
   {0x04, 0xff, 0x01},
   {0x04, 0x1f, 0x01},
   {0x04, 0x1b, 0x01}},
 };

 if (VAR_2 > 0)
  VAR_3->frame_rate = VAR_2;
 if (VAR_3->frame_rate >= 30)
  VAR_4 = 0;
 else if (VAR_3->frame_rate >= 25)
  VAR_4 = 1;
 else if (VAR_3->frame_rate >= 20)
  VAR_4 = 2;
 else if (VAR_3->frame_rate >= 15)
  VAR_4 = 3;
 else if (VAR_3->frame_rate >= 10)
  VAR_4 = 4;
 else
  VAR_4 = 5;
 FUNC_1(VAR_3, 0xa4, VAR_6[VAR_3->gspca_dev.curr_mode][VAR_4][0]);
 FUNC_1(VAR_3, 0x23, VAR_6[VAR_3->gspca_dev.curr_mode][VAR_4][1]);
 VAR_5 = VAR_6[VAR_3->gspca_dev.curr_mode][VAR_4][2];
 if (VAR_3->sensor == VAR_1)
  VAR_5 |= 0x80;
 FUNC_0(VAR_3, VAR_0, VAR_5);
}
