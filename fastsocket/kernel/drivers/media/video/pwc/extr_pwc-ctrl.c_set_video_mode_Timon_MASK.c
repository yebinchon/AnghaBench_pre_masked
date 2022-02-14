
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int y; int x; } ;
struct pwc_device {scalar_t__ pixfmt; int cmd_len; unsigned char* cmd_buf; int vframes; int vsize; int vsnapshot; scalar_t__ valternate; int vbandlength; int frame_size; TYPE_1__ image; int type; int vendpoint; } ;
struct Timon_table_entry {scalar_t__ alternate; unsigned char* mode; int bandlength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct Timon_table_entry*** VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (struct pwc_device*,int ,unsigned char*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (struct pwc_device*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct pwc_device *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 unsigned char VAR_12[13];
 const struct Timon_table_entry *VAR_13;
 int VAR_14, VAR_15;

 if (VAR_8 >= VAR_2 || VAR_9 < 5 || VAR_9 > 30 || VAR_10 < 0 || VAR_10 > 3)
  return -VAR_0;
 if (VAR_8 == VAR_3 && VAR_9 > 15)
  return -VAR_0;
 VAR_15 = (VAR_9 / 5) - 1;




 VAR_13 = ((void*)0);
 while (VAR_10 <= 3) {
    VAR_13 = &VAR_4[VAR_8][VAR_15][VAR_10];
    if (VAR_13->alternate != 0)
      break;
    VAR_10++;
 }
 if (VAR_13 == ((void*)0) || VAR_13->alternate == 0)
  return -VAR_1;

 FUNC_0(VAR_12, VAR_13->mode, 13);
 if (VAR_11)
  VAR_12[0] |= 0x80;
 VAR_14 = FUNC_2(VAR_7, VAR_7->vendpoint, VAR_12, 13);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_13->bandlength > 0 && VAR_7->pixfmt == VAR_5)
  FUNC_1(VAR_7, VAR_7->type, VAR_12);

 VAR_7->cmd_len = 13;
 FUNC_0(VAR_7->cmd_buf, VAR_12, 13);


 VAR_7->vframes = VAR_9;
 VAR_7->vsize = VAR_8;
 VAR_7->vsnapshot = VAR_11;
 VAR_7->valternate = VAR_13->alternate;
 VAR_7->image = VAR_6[VAR_8];
 VAR_7->vbandlength = VAR_13->bandlength;
 if (VAR_13->bandlength > 0)
  VAR_7->frame_size = (VAR_13->bandlength * VAR_7->image.y) / 4;
 else
  VAR_7->frame_size = (VAR_7->image.x * VAR_7->image.y * 12) / 8;
 return 0;
}
