
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_streaming {int last_fid; scalar_t__ sequence; TYPE_1__* dev; } ;
struct TYPE_5__ {int tv_usec; int tv_sec; } ;
struct TYPE_6__ {scalar_t__ bytesused; TYPE_2__ timestamp; scalar_t__ sequence; } ;
struct uvc_buffer {scalar_t__ state; TYPE_3__ buf; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int __u8 ;
struct TYPE_4__ {int quirks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (struct timespec*) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct uvc_streaming *VAR_13,
  struct uvc_buffer *VAR_14, const __u8 *VAR_15, int VAR_16)
{
 __u8 VAR_17;






 if (VAR_16 < 2 || VAR_15[0] < 2 || VAR_15[0] > VAR_16)
  return -VAR_2;


 if (VAR_15[1] & VAR_9) {
  FUNC_2(VAR_11, "Dropping payload (error bit "
     "set).\n");
  return -VAR_3;
 }

 VAR_17 = VAR_15[1] & VAR_10;




 if (VAR_13->last_fid != VAR_17)
  VAR_13->sequence++;




 if (VAR_14 == ((void*)0)) {
  VAR_13->last_fid = VAR_17;
  return -VAR_3;
 }
 if (VAR_14->state != VAR_5) {
  struct timespec VAR_18;

  if (VAR_17 == VAR_13->last_fid) {
   FUNC_2(VAR_11, "Dropping payload (out of "
    "sync).\n");
   if ((VAR_13->dev->quirks & VAR_7) &&
       (VAR_15[1] & VAR_8))
    VAR_13->last_fid ^= VAR_10;
   return -VAR_3;
  }

  if (VAR_12 == VAR_0)
   FUNC_1(&VAR_18);
  else
   FUNC_0(&VAR_18);

  VAR_14->buf.sequence = VAR_13->sequence;
  VAR_14->buf.timestamp.tv_sec = VAR_18.tv_sec;
  VAR_14->buf.timestamp.tv_usec = VAR_18.tv_nsec / VAR_4;


  VAR_14->state = VAR_5;
 }
 if (VAR_17 != VAR_13->last_fid && VAR_14->buf.bytesused != 0) {
  FUNC_2(VAR_11, "Frame complete (FID bit "
    "toggled).\n");
  VAR_14->state = VAR_6;
  return -VAR_1;
 }

 VAR_13->last_fid = VAR_17;

 return VAR_15[0];
}
