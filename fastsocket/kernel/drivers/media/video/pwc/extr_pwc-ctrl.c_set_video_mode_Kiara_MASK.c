
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int y; int x; } ;
struct pwc_device {scalar_t__ pixfmt; int cmd_len; unsigned char* cmd_buf; int vframes; int vsize; int vsnapshot; scalar_t__ valternate; scalar_t__ vbandlength; int frame_size; TYPE_2__ image; int type; } ;
struct TYPE_3__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; } ;
struct Kiara_table_entry {int member_0; int member_1; int member_2; scalar_t__ alternate; unsigned char* mode; scalar_t__ bandlength; TYPE_1__ member_3; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct Kiara_table_entry*** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (struct pwc_device*,int ,unsigned char*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_4 (struct pwc_device*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(struct pwc_device *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 const struct Kiara_table_entry *VAR_12 = ((void*)0);
 int VAR_13, VAR_14;
 unsigned char VAR_15[12];
 struct Kiara_table_entry VAR_16 = {6, 773, 1272, {0xAD, 0xF4, 0x10, 0x27, 0xB6, 0x24, 0x96, 0x02, 0x30, 0x05, 0x03, 0x80}};

 if (VAR_8 >= VAR_3 || VAR_9 < 5 || VAR_9 > 30 || VAR_10 < 0 || VAR_10 > 3)
  return -VAR_0;
 if (VAR_8 == VAR_4 && VAR_9 > 15)
  return -VAR_0;
 VAR_13 = (VAR_9 / 5) - 1;


 if (VAR_8 == VAR_4 && VAR_9 == 5 && VAR_11 && VAR_7->pixfmt != VAR_5)
 {




  FUNC_0("Choosing VGA/5 BAYER mode.\n");
  VAR_12 = &VAR_16;
 }
 else
 {




  VAR_11 = 0;
  while (VAR_10 <= 3) {
   VAR_12 = &VAR_2[VAR_8][VAR_13][VAR_10];
   if (VAR_12->alternate != 0)
    break;
   VAR_10++;
  }
 }
 if (VAR_12 == ((void*)0) || VAR_12->alternate == 0)
  return -VAR_1;

 FUNC_1("Using alternate setting %d.\n", VAR_12->alternate);


 FUNC_2(VAR_15, VAR_12->mode, 12);
 if (VAR_11)
  VAR_15[0] |= 0x80;


 VAR_14 = FUNC_4(VAR_7, 4 , VAR_15, 12);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_12->bandlength > 0 && VAR_7->pixfmt == VAR_5)
  FUNC_3(VAR_7, VAR_7->type, VAR_15);

 VAR_7->cmd_len = 12;
 FUNC_2(VAR_7->cmd_buf, VAR_15, 12);

 VAR_7->vframes = VAR_9;
 VAR_7->vsize = VAR_8;
 VAR_7->vsnapshot = VAR_11;
 VAR_7->valternate = VAR_12->alternate;
 VAR_7->image = VAR_6[VAR_8];
 VAR_7->vbandlength = VAR_12->bandlength;
 if (VAR_7->vbandlength > 0)
  VAR_7->frame_size = (VAR_7->vbandlength * VAR_7->image.y) / 4;
 else
  VAR_7->frame_size = (VAR_7->image.x * VAR_7->image.y * 12) / 8;
 FUNC_1("frame_size=%d, vframes=%d, vsize=%d, vsnapshot=%d, vbandlength=%d\n",
     VAR_7->frame_size,VAR_7->vframes,VAR_7->vsize,VAR_7->vsnapshot,VAR_7->vbandlength);
 return 0;
}
