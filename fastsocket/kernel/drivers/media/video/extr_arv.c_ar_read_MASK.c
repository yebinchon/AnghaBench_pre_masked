
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct file {int dummy; } ;
struct ar_device {long frame_bytes; scalar_t__ size; scalar_t__ mode; int line_buff; int line_bytes; int height; unsigned char** frame; int lock; int wait; scalar_t__ start_capture; } ;
typedef long ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,char*,...) ;
 long VAR_11 ;
 long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,unsigned char*,int) ;
 int FUNC_5 () ;
 int VAR_22 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int ) ;
 struct video_device* FUNC_15 (struct file*) ;
 struct ar_device* FUNC_16 (struct video_device*) ;
 int FUNC_17 (unsigned char*) ;
 int FUNC_18 (int) ;
 unsigned char* VAR_23 ;

__attribute__((used)) static ssize_t FUNC_19(struct file *VAR_24, char *VAR_25, size_t VAR_26, loff_t *VAR_27)
{
 struct video_device *VAR_28 = FUNC_15(VAR_24);
 struct ar_device *VAR_29 = FUNC_16(VAR_28);
 long VAR_30 = VAR_29->frame_bytes;
 unsigned long VAR_31 = 0;
 unsigned long VAR_32;
 unsigned char *VAR_33;
 int VAR_34, VAR_35;
 unsigned char *VAR_36, *VAR_37, *VAR_38;

 int VAR_39;


 FUNC_0(1, "ar_read()\n");

 if (VAR_29->size == VAR_9)
  VAR_31 |= VAR_4;
 if (VAR_29->mode == VAR_8)
  VAR_31 |= VAR_3;

 FUNC_11(&VAR_29->lock);
 FUNC_2(VAR_31, VAR_1);
 FUNC_6();
 FUNC_2(0x8000, VAR_21);
 FUNC_2(0xa0861300, VAR_15);
 FUNC_2(0x01000000, VAR_16);
 FUNC_2(VAR_0, VAR_17);
 FUNC_2(VAR_0, VAR_20);
 FUNC_2(VAR_29->line_bytes, VAR_13);
 FUNC_2(VAR_29->line_bytes, VAR_18);

 FUNC_10(VAR_32);
 while (FUNC_1(VAR_5) != 0)
  FUNC_5();
 if (VAR_29->mode == VAR_7 && VAR_29->size == VAR_10) {
  for (VAR_34 = 0; VAR_34 < VAR_29->height; VAR_34++) {
   FUNC_18(VAR_34);
   if (VAR_34 < (VAR_6/2))
    VAR_39 = VAR_34 << 1;
   else
    VAR_39 = (((VAR_34 - (VAR_6/2)) << 1) + 1);
   FUNC_2(FUNC_17(VAR_29->frame[VAR_39]), VAR_14);
   FUNC_7();
   while (!(FUNC_1(VAR_21) & 0x8000))
    FUNC_5();
   FUNC_6();
   FUNC_3();
   FUNC_2(0xa0861300, VAR_15);
  }
 } else {
  for (VAR_34 = 0; VAR_34 < VAR_29->height; VAR_34++) {
   FUNC_18(VAR_34);
   FUNC_2(FUNC_17(VAR_29->frame[VAR_34]), VAR_14);
   FUNC_7();
   while (!(FUNC_1(VAR_21) & 0x8000))
    FUNC_5();
   FUNC_6();
   FUNC_3();
   FUNC_2(0xa0861300, VAR_15);
  }
 }
 FUNC_9(VAR_32);
 VAR_36 = VAR_23;
 VAR_37 = VAR_36 + (VAR_29->frame_bytes / 2);
 VAR_38 = VAR_37 + (VAR_29->frame_bytes / 4);
 for (VAR_34 = 0; VAR_34 < VAR_29->height; VAR_34++) {
  VAR_33 = VAR_29->frame[VAR_34];
  for (VAR_35 = 0; VAR_35 < VAR_29->line_bytes; VAR_35 += 4) {
   *VAR_36++ = *VAR_33++;
   *VAR_37++ = *VAR_33++;
   *VAR_36++ = *VAR_33++;
   *VAR_38++ = *VAR_33++;
  }
 }
 if (FUNC_4(VAR_25, VAR_23, VAR_29->frame_bytes)) {
  FUNC_13("arv: failed while copy_to_user yuv.\n");
  VAR_30 = -VAR_11;
  goto out_up;
 }
 FUNC_0(1, "ret = %d\n", VAR_30);
out_up:
 FUNC_12(&VAR_29->lock);
 return VAR_30;
}
