
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int dummy; } ;
struct pvr2_hdw {struct pvr2_stream* vid_stream; } ;



struct pvr2_stream *FUNC_0(struct pvr2_hdw *VAR_0)
{
 return VAR_0->vid_stream;
}
