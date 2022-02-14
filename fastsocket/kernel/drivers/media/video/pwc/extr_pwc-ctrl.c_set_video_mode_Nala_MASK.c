
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; } ;
struct pwc_device {scalar_t__ pixfmt; int release; int cmd_len; unsigned char* cmd_buf; int vframes; int vsize; scalar_t__ valternate; int frame_size; int vbandlength; TYPE_1__ image; int decompress_data; int type; int vendpoint; } ;
struct Nala_table_entry {scalar_t__ alternate; unsigned char* mode; scalar_t__ compressed; } ;


 int VAR_0 ;
 struct Nala_table_entry** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (int ,int,unsigned char*,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (struct pwc_device*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct pwc_device *VAR_5, int VAR_6, int VAR_7)
{
 unsigned char VAR_8[3];
 int VAR_9, VAR_10;
 struct Nala_table_entry *VAR_11;
 int VAR_12[31] =
 {
    0, 0, 0, 0, 4,
    5, 5, 7, 7, 10,
   10, 10, 12, 12, 15,
   15, 15, 15, 20, 20,
   20, 20, 20, 24, 24,
   24, 24, 24, 24, 24,
   24
 };
 int VAR_13[31] =
 { 0, 0, 0, 0, 0,
   1, 1, 1, 2, 2,
   3, 3, 4, 4, 4,
   5, 5, 5, 5, 5,
   6, 6, 6, 6, 7,
   7, 7, 7, 7, 7,
   7
 };

 if (VAR_6 < 0 || VAR_6 > VAR_2 || VAR_7 < 4 || VAR_7 > 25)
  return -VAR_0;
 VAR_7 = VAR_12[VAR_7];
 VAR_10 = VAR_13[VAR_7];
 VAR_11 = &VAR_1[VAR_6][VAR_10];
 if (VAR_11->alternate == 0)
  return -VAR_0;

 FUNC_1(VAR_8, VAR_11->mode, 3);
 VAR_9 = FUNC_3(VAR_5, VAR_5->vendpoint, VAR_8, 3);
 if (VAR_9 < 0) {
  FUNC_0("Failed to send video command... %d\n", VAR_9);
  return VAR_9;
 }
 if (VAR_11->compressed && VAR_5->pixfmt == VAR_3)
  FUNC_2(VAR_5->type, VAR_5->release, VAR_8, VAR_5->decompress_data);

 VAR_5->cmd_len = 3;
 FUNC_1(VAR_5->cmd_buf, VAR_8, 3);


 VAR_5->vframes = VAR_7;
 VAR_5->vsize = VAR_6;
 VAR_5->valternate = VAR_11->alternate;
 VAR_5->image = VAR_4[VAR_6];
 VAR_5->frame_size = (VAR_5->image.x * VAR_5->image.y * 3) / 2;
 if (VAR_11->compressed) {
  if (VAR_5->release < 5) {
   VAR_5->vbandlength = 528;
   VAR_5->frame_size /= 4;
  }
  else {
   VAR_5->vbandlength = 704;
   VAR_5->frame_size /= 3;
  }
 }
 else
  VAR_5->vbandlength = 0;
 return 0;
}
