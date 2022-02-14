
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_frame_buf {int filled; scalar_t__ data; } ;
struct pwc_device {int type; scalar_t__ drop_frames; unsigned char vmirror; int frame_total_size; int vframe_count; int vframes_error; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pwc_device*) ;
 scalar_t__ FUNC_3 (struct pwc_device*) ;
 int FUNC_4 (struct pwc_device*,unsigned char) ;

__attribute__((used)) static int FUNC_5(struct pwc_device *VAR_0, const struct pwc_frame_buf *VAR_1)
{
 int VAR_2 = 0;





 if (VAR_0->type == 730) {
  unsigned char *VAR_3 = (unsigned char *)VAR_1->data;

  if (VAR_3[1] == 1 && VAR_3[0] & 0x10) {
   FUNC_1("Hyundai CMOS sensor bug. Dropping frame.\n");
   VAR_0->drop_frames += 2;
   VAR_0->vframes_error++;
  }
  if ((VAR_3[0] ^ VAR_0->vmirror) & 0x01) {
   FUNC_4(VAR_0, VAR_3[0] & 0x01);
  }
  if ((VAR_3[0] ^ VAR_0->vmirror) & 0x02) {
   if (VAR_3[0] & 0x02)
    FUNC_1("Image is mirrored.\n");
   else
    FUNC_1("Image is normal.\n");
  }
  VAR_0->vmirror = VAR_3[0] & 0x03;
  if (VAR_1->filled == 4)
   VAR_0->drop_frames++;
 }
 else if (VAR_0->type == 740 || VAR_0->type == 720) {
  unsigned char *VAR_4 = (unsigned char *)VAR_1->data;
  if ((VAR_4[0] ^ VAR_0->vmirror) & 0x01) {
   FUNC_4(VAR_0, VAR_4[0] & 0x01);
  }
  VAR_0->vmirror = VAR_4[0] & 0x03;
 }




 if (VAR_0->drop_frames > 0)
  VAR_0->drop_frames--;
 else {

  if (VAR_1->filled < VAR_0->frame_total_size) {
   FUNC_0("Frame buffer underflow (%d bytes);"
           " discarded.\n", VAR_1->filled);
   VAR_0->vframes_error++;
  }
  else {

   VAR_2 = 1;





   if (FUNC_3(VAR_0))
    FUNC_2(VAR_0);

  }
 }
 VAR_0->vframe_count++;
 return VAR_2;
}
