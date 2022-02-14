
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_video_queue {int* mem; } ;
struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {scalar_t__ bytesused; unsigned int length; TYPE_1__ m; } ;
struct uvc_buffer {scalar_t__ state; TYPE_2__ buf; } ;
typedef int __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int*,int const*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct uvc_video_queue *VAR_4, struct uvc_buffer *VAR_5,
  const __u8 *VAR_6, unsigned int VAR_7)
{
 static const __u8 VAR_8[] = {
  0x11, 0x22, 0x33, 0x44,
  0xde, 0xad, 0xbe, 0xef,
  0xde, 0xad, 0xfa, 0xce
 };

 unsigned int VAR_9, VAR_10;
 __u8 *VAR_11;
 int VAR_12 = 0;

 if (VAR_5 == ((void*)0))
  return 0;

 if ((VAR_7 >= 14 && FUNC_0(&VAR_6[2], VAR_8, 12) == 0) ||
     (VAR_7 >= 15 && FUNC_0(&VAR_6[3], VAR_8, 12) == 0)) {
  FUNC_3(VAR_3, "iSight header found\n");
  VAR_12 = 1;
 }


 if (VAR_5->state != VAR_1) {
  if (!VAR_12) {
   FUNC_3(VAR_3, "Dropping packet (out of "
      "sync).\n");
   return 0;
  }

  VAR_5->state = VAR_1;
 }






 if (VAR_12 && VAR_5->buf.bytesused != 0) {
  VAR_5->state = VAR_2;
  return -VAR_0;
 }




 if (!VAR_12) {
  VAR_9 = VAR_5->buf.length - VAR_5->buf.bytesused;
  VAR_11 = VAR_4->mem + VAR_5->buf.m.offset + VAR_5->buf.bytesused;
  VAR_10 = FUNC_2(VAR_7, VAR_9);
  FUNC_1(VAR_11, VAR_6, VAR_10);
  VAR_5->buf.bytesused += VAR_10;

  if (VAR_7 > VAR_9 || VAR_5->buf.bytesused == VAR_5->buf.length) {
   FUNC_3(VAR_3, "Frame complete "
      "(overflow).\n");
   VAR_5->state = VAR_2;
  }
 }

 return 0;
}
