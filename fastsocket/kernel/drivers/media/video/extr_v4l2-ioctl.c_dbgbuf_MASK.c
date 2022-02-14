
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_timecode {scalar_t__ userbits; int frames; int flags; int type; int seconds; int minutes; int hours; } ;
struct TYPE_4__ {int userptr; } ;
struct TYPE_3__ {int tv_sec; scalar_t__ tv_usec; } ;
struct v4l2_buffer {int length; TYPE_2__ m; int memory; int sequence; int field; int flags; int bytesused; int type; int index; TYPE_1__ timestamp; struct v4l2_timecode timecode; } ;
typedef int __u32 ;


 int FUNC_0 (unsigned int,char*,int,int,int,long,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2, struct video_device *VAR_3,
     struct v4l2_buffer *VAR_4)
{
 struct v4l2_timecode *VAR_5 = &VAR_4->timecode;

 FUNC_0(VAR_2, "%02ld:%02d:%02d.%08ld index=%d, type=%s, "
  "bytesused=%d, flags=0x%08d, "
  "field=%0d, sequence=%d, memory=%s, offset/userptr=0x%08lx, length=%d\n",
   VAR_4->timestamp.tv_sec / 3600,
   (int)(VAR_4->timestamp.tv_sec / 60) % 60,
   (int)(VAR_4->timestamp.tv_sec % 60),
   (long)VAR_4->timestamp.tv_usec,
   VAR_4->index,
   FUNC_2(VAR_4->type, VAR_1),
   VAR_4->bytesused, VAR_4->flags,
   VAR_4->field, VAR_4->sequence,
   FUNC_2(VAR_4->memory, VAR_0),
   VAR_4->m.userptr, VAR_4->length);
 FUNC_1("timecode=%02d:%02d:%02d type=%d, "
  "flags=0x%08d, frames=%d, userbits=0x%08x\n",
   VAR_5->hours, VAR_5->minutes, VAR_5->seconds,
   VAR_5->type, VAR_5->flags, VAR_5->frames, *(__u32 *)VAR_5->userbits);
}
